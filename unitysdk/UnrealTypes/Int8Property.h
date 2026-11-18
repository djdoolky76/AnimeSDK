#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Int8PropertyParams; }

#define UNREALTYPES_INT8PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2AE6D0)
#define UNREALTYPES_INT8PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2AE770)
#define UNREALTYPES_INT8PROPERTY_SETINTPROPERTYVALUE_1_OFFSET UNITYSDK_OFFSET(0x1E2AE630)
#define UNREALTYPES_INT8PROPERTY_SETINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2AE590)
#define UNREALTYPES_INT8PROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0420)

namespace UnrealTypes
{
	inline static constexpr unsigned int Int8Property_TypeDefinitionIndex = 27807;

	class Int8Property
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::Int8PropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::Int8PropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_INT8PROPERTY__CTOR_OFFSET))(this, owner, prop);
		}

		::System::Void SetIntPropertyValue(::PVOID address, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNREALTYPES_INT8PROPERTY_SETINTPROPERTYVALUE_OFFSET))(this, address, value);
		}

		::System::Void SetIntPropertyValue_1(::PVOID address, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNREALTYPES_INT8PROPERTY_SETINTPROPERTYVALUE_1_OFFSET))(this, address, value);
		}

		::System::Int64 GetSignedIntPropertyValue(::PVOID address)
		{
			return ((::System::Int64(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_INT8PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::UInt64 GetUnsignedIntPropertyValue(::PVOID address)
		{
			return ((::System::UInt64(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_INT8PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}
	};
}
