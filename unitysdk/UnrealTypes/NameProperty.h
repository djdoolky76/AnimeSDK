#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyFlags.h"
#include "unitysdk/Foundation/Unreal/FName.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class NamePropertyParams; }

#define UNREALTYPES_NAMEPROPERTY_GETCOMPUTEDFLAGSPROPERTYFLAGS_OFFSET UNITYSDK_OFFSET(0x1E2AE970)
#define UNREALTYPES_NAMEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A0880)
#define UNREALTYPES_NAMEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AE900)

namespace UnrealTypes
{
	inline static constexpr unsigned int NameProperty_TypeDefinitionIndex = 27822;

	class NameProperty
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_NAMEPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::NamePropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::NamePropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_NAMEPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::UnrealTypes::PropertyFlags GetComputedFlagsPropertyFlags()
		{
			return ((::UnrealTypes::PropertyFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_NAMEPROPERTY_GETCOMPUTEDFLAGSPROPERTYFLAGS_OFFSET))(this);
		}
	};
}
