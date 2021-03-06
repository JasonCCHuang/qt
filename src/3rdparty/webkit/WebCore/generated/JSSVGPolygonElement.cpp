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

#if ENABLE(SVG)

#include "JSSVGPolygonElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGPointList.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGPointList.h"
#include "SVGPolygonElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPolygonElement);

/* Hash table */

static const HashTableValue JSSVGPolygonElementTableValues[14] =
{
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementRequiredFeatures, (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementRequiredExtensions, (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementSystemLanguage, (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)jsSVGPolygonElementXmllang, (intptr_t)setJSSVGPolygonElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)jsSVGPolygonElementXmlspace, (intptr_t)setJSSVGPolygonElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementExternalResourcesRequired, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementStyle, (intptr_t)0 },
    { "transform", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementTransform, (intptr_t)0 },
    { "nearestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementNearestViewportElement, (intptr_t)0 },
    { "farthestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementFarthestViewportElement, (intptr_t)0 },
    { "points", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementPoints, (intptr_t)0 },
    { "animatedPoints", DontDelete|ReadOnly, (intptr_t)jsSVGPolygonElementAnimatedPoints, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPolygonElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSSVGPolygonElementTableValues, 0 };
#else
    { 33, 31, JSSVGPolygonElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGPolygonElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete|Function, (intptr_t)jsSVGPolygonElementPrototypeFunctionHasExtension, (intptr_t)1 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGPolygonElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { "getBBox", DontDelete|Function, (intptr_t)jsSVGPolygonElementPrototypeFunctionGetBBox, (intptr_t)0 },
    { "getCTM", DontDelete|Function, (intptr_t)jsSVGPolygonElementPrototypeFunctionGetCTM, (intptr_t)0 },
    { "getScreenCTM", DontDelete|Function, (intptr_t)jsSVGPolygonElementPrototypeFunctionGetScreenCTM, (intptr_t)0 },
    { "getTransformToElement", DontDelete|Function, (intptr_t)jsSVGPolygonElementPrototypeFunctionGetTransformToElement, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPolygonElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 2047, JSSVGPolygonElementPrototypeTableValues, 0 };
#else
    { 17, 15, JSSVGPolygonElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGPolygonElementPrototype::s_info = { "SVGPolygonElementPrototype", 0, &JSSVGPolygonElementPrototypeTable, 0 };

JSObject* JSSVGPolygonElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPolygonElement>(exec, globalObject);
}

bool JSSVGPolygonElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPolygonElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGPolygonElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGPolygonElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGPolygonElement::s_info = { "SVGPolygonElement", &JSSVGElement::s_info, &JSSVGPolygonElementTable, 0 };

JSSVGPolygonElement::JSSVGPolygonElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPolygonElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGPolygonElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPolygonElementPrototype(JSSVGPolygonElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGPolygonElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPolygonElement, Base>(exec, &JSSVGPolygonElementTable, this, propertyName, slot);
}

bool JSSVGPolygonElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPolygonElement, Base>(exec, &JSSVGPolygonElementTable, this, propertyName, descriptor);
}

JSValue jsSVGPolygonElementRequiredFeatures(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredFeatures()), imp);
}

JSValue jsSVGPolygonElementRequiredExtensions(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredExtensions()), imp);
}

JSValue jsSVGPolygonElementSystemLanguage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->systemLanguage()), imp);
}

JSValue jsSVGPolygonElementXmllang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return jsString(exec, imp->xmllang());
}

JSValue jsSVGPolygonElementXmlspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return jsString(exec, imp->xmlspace());
}

JSValue jsSVGPolygonElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGPolygonElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGPolygonElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
}

JSValue jsSVGPolygonElementTransform(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGPolygonElementNearestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
}

JSValue jsSVGPolygonElementFarthestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
}

JSValue jsSVGPolygonElementPoints(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->points()), imp);
}

JSValue jsSVGPolygonElementAnimatedPoints(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGPolygonElement* castedThis = static_cast<JSSVGPolygonElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->animatedPoints()), imp);
}

void JSSVGPolygonElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPolygonElement, Base>(exec, propertyName, value, &JSSVGPolygonElementTable, this, slot);
}

void setJSSVGPolygonElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(static_cast<JSSVGPolygonElement*>(thisObject)->impl());
    imp->setXmllang(value.toString(exec));
}

void setJSSVGPolygonElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(static_cast<JSSVGPolygonElement*>(thisObject)->impl());
    imp->setXmlspace(value.toString(exec));
}

JSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(asObject(thisValue));
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());
    const UString& extension = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(asObject(thisValue));
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(asObject(thisValue));
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), imp);
    return result;
}

JSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(asObject(thisValue));
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getCTM()).get(), imp);
    return result;
}

JSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(asObject(thisValue));
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getScreenCTM()).get(), imp);
    return result;
}

JSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPolygonElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolygonElement* castedThisObj = static_cast<JSSVGPolygonElement*>(asObject(thisValue));
    SVGPolygonElement* imp = static_cast<SVGPolygonElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(0));


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getTransformToElement(element, ec)).get(), imp);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG)
