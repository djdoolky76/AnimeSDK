#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyFlags.h"
#include "unitysdk/Foundation/Unreal/FName.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class IFieldVariant; }

#define UNREALTYPES_BOOLPROPERTY_GETCOMPUTEDFLAGSPROPERTYFLAGS_OFFSET UNITYSDK_OFFSET(0x1E29E2F0)
#define UNREALTYPES_BOOLPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E29E280)
#define UNREALTYPES_BOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E210)

namespace UnrealTypes
{
	inline static constexpr unsigned int BoolProperty_TypeDefinitionIndex = 27817;

	class BoolProperty
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_BOOLPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::BoolPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::BoolPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_BOOLPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::UnrealTypes::PropertyFlags GetComputedFlagsPropertyFlags()
		{
			return ((::UnrealTypes::PropertyFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_BOOLPROPERTY_GETCOMPUTEDFLAGSPROPERTYFLAGS_OFFSET))(this);
		}
	};
}
