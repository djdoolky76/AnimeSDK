#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"

namespace UnrealTypes { class DoublePropertyParams; }
namespace UnrealTypes { class IFieldVariant; }

#define UNREALTYPES_DOUBLEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A0810)
#define UNREALTYPES_DOUBLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A09F0)

namespace UnrealTypes
{
	inline static constexpr unsigned int DoubleProperty_TypeDefinitionIndex = 27816;

	class DoubleProperty
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_DOUBLEPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::DoublePropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::DoublePropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_DOUBLEPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}
	};
}
