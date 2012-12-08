/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSArrayBufferView.h"

#include "JSArrayBuffer.h"
#include <wtf/ArrayBuffer.h>
#include <wtf/ArrayBufferView.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSArrayBufferView);
/* Hash table */

static const HashTableValue JSArrayBufferViewTableValues[] =
{
    { "buffer", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsArrayBufferViewBuffer), (intptr_t)0, NoIntrinsic },
    { "byteOffset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsArrayBufferViewByteOffset), (intptr_t)0, NoIntrinsic },
    { "byteLength", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsArrayBufferViewByteLength), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSArrayBufferViewTable = { 8, 7, JSArrayBufferViewTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSArrayBufferViewPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSArrayBufferViewPrototypeTable = { 1, 0, JSArrayBufferViewPrototypeTableValues, 0 };
static const HashTable* getJSArrayBufferViewPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSArrayBufferViewPrototypeTable);
}

const ClassInfo JSArrayBufferViewPrototype::s_info = { "ArrayBufferViewPrototype", &Base::s_info, 0, getJSArrayBufferViewPrototypeTable, CREATE_METHOD_TABLE(JSArrayBufferViewPrototype) };

JSObject* JSArrayBufferViewPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSArrayBufferView>(exec, globalObject);
}

static const HashTable* getJSArrayBufferViewTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSArrayBufferViewTable);
}

const ClassInfo JSArrayBufferView::s_info = { "ArrayBufferView", &Base::s_info, 0, getJSArrayBufferViewTable , CREATE_METHOD_TABLE(JSArrayBufferView) };

JSArrayBufferView::JSArrayBufferView(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ArrayBufferView> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSArrayBufferView::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSArrayBufferView::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSArrayBufferViewPrototype::create(exec->globalData(), globalObject, JSArrayBufferViewPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

void JSArrayBufferView::destroy(JSC::JSCell* cell)
{
    JSArrayBufferView* thisObject = jsCast<JSArrayBufferView*>(cell);
    thisObject->JSArrayBufferView::~JSArrayBufferView();
}

JSArrayBufferView::~JSArrayBufferView()
{
    releaseImplIfNotNull();
}

bool JSArrayBufferView::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    JSArrayBufferView* thisObject = jsCast<JSArrayBufferView*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSArrayBufferView, Base>(exec, getJSArrayBufferViewTable(exec), thisObject, propertyName, slot);
}

bool JSArrayBufferView::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    JSArrayBufferView* thisObject = jsCast<JSArrayBufferView*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSArrayBufferView, Base>(exec, getJSArrayBufferViewTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsArrayBufferViewBuffer(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSArrayBufferView* castedThis = jsCast<JSArrayBufferView*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ArrayBufferView* impl = static_cast<ArrayBufferView*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->buffer()));
    return result;
}


JSValue jsArrayBufferViewByteOffset(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSArrayBufferView* castedThis = jsCast<JSArrayBufferView*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ArrayBufferView* impl = static_cast<ArrayBufferView*>(castedThis->impl());
    JSValue result = jsNumber(impl->byteOffset());
    return result;
}


JSValue jsArrayBufferViewByteLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSArrayBufferView* castedThis = jsCast<JSArrayBufferView*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ArrayBufferView* impl = static_cast<ArrayBufferView*>(castedThis->impl());
    JSValue result = jsNumber(impl->byteLength());
    return result;
}


static inline bool isObservable(JSArrayBufferView* jsArrayBufferView)
{
    if (jsArrayBufferView->hasCustomProperties())
        return true;
    return false;
}

bool JSArrayBufferViewOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSArrayBufferView* jsArrayBufferView = jsCast<JSArrayBufferView*>(handle.get().asCell());
    if (!isObservable(jsArrayBufferView))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSArrayBufferViewOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSArrayBufferView* jsArrayBufferView = jsCast<JSArrayBufferView*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsArrayBufferView->impl(), jsArrayBufferView);
    jsArrayBufferView->releaseImpl();
}

ArrayBufferView* toArrayBufferView(JSC::JSValue value)
{
    return value.inherits(&JSArrayBufferView::s_info) ? jsCast<JSArrayBufferView*>(asObject(value))->impl() : 0;
}

}
