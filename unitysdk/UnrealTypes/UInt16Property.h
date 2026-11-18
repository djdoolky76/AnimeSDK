#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define UNREALTYPES_UINT16PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2B8770)
#define UNREALTYPES_UINT16PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2B8810)
#define UNREALTYPES_UINT16PROPERTY_SETINTPROPERTYVALUE_1_OFFSET UNITYSDK_OFFSET(0x1E2B86D0)
#define UNREALTYPES_UINT16PROPERTY_SETINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2B8630)
#define UNREALTYPES_UINT16PROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0650)

namespace UnrealTypes
{
	inline static constexpr unsigned int UInt16Property_TypeDefinitionIndex = 27812;

	class UInt16Property
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::UInt16PropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::UInt16PropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY__CTOR_OFFSET))(this, owner, prop);
		}

		::System::Void SetIntPropertyValue(::PVOID address, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY_SETINTPROPERTYVALUE_OFFSET))(this, address, value);
		}

		::System::Void SetIntPropertyValue_1(::PVOID address, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY_SETINTPROPERTYVALUE_1_OFFSET))(this, address, value);
		}

		::System::Int64 GetSignedIntPropertyValue(::PVOID address)
		{
			return ((::System::Int64(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::UInt64 GetUnsignedIntPropertyValue(::PVOID address)
		{
			return ((::System::UInt64(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}
	};
}
