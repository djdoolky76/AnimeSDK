#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Int64PropertyParams; }

#define UNREALTYPES_INT64PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2AE440)
#define UNREALTYPES_INT64PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2AE4E0)
#define UNREALTYPES_INT64PROPERTY_SETINTPROPERTYVALUE_1_OFFSET UNITYSDK_OFFSET(0x1E2AE3A0)
#define UNREALTYPES_INT64PROPERTY_SETINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2AE300)
#define UNREALTYPES_INT64PROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A0570)
#define UNREALTYPES_INT64PROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AE290)

namespace UnrealTypes
{
	inline static constexpr unsigned int Int64Property_TypeDefinitionIndex = 27810;

	class Int64Property
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_INT64PROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::Int64PropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::Int64PropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_INT64PROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::System::Void SetIntPropertyValue(::PVOID address, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNREALTYPES_INT64PROPERTY_SETINTPROPERTYVALUE_OFFSET))(this, address, value);
		}

		::System::Void SetIntPropertyValue_1(::PVOID address, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNREALTYPES_INT64PROPERTY_SETINTPROPERTYVALUE_1_OFFSET))(this, address, value);
		}

		::System::Int64 GetSignedIntPropertyValue(::PVOID address)
		{
			return ((::System::Int64(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_INT64PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::UInt64 GetUnsignedIntPropertyValue(::PVOID address)
		{
			return ((::System::UInt64(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_INT64PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}
	};
}
