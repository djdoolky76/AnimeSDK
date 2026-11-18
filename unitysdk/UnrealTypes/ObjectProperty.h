#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class ObjectPropertyParams; }

#define UNREALTYPES_OBJECTPROPERTY_GETOBJECTHANDLEPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2B0560)
#define UNREALTYPES_OBJECTPROPERTY_SETOBJECTHANDLEPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2B0610)
#define UNREALTYPES_OBJECTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E9C0)

namespace UnrealTypes
{
	inline static constexpr unsigned int ObjectProperty_TypeDefinitionIndex = 27820;

	class ObjectProperty
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::ObjectPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::ObjectPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTY__CTOR_OFFSET))(this, owner, prop);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> GetObjectHandlePropertyValue(::PVOID propertyValueAddress)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTY_GETOBJECTHANDLEPROPERTYVALUE_OFFSET))(this, propertyValueAddress);
		}

		::System::Void SetObjectHandlePropertyValue(::PVOID propertyValueAddress, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTY_SETOBJECTHANDLEPROPERTYVALUE_OFFSET))(this, propertyValueAddress, value);
		}
	};
}
