#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Package; }

#define UNREALTYPES_GLOBALPACKAGES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2ADBC0)

namespace UnrealTypes
{
	inline static constexpr unsigned int GlobalPackages_TypeDefinitionIndex = 27792;

	class GlobalPackages : public ::System::Object
	{
	public:
		static ::UnrealTypes::Package** StaticGet_TransientPackage()
		{
			return (::UnrealTypes::Package**)Il2CppClass::FromTypeDefinitionIndex(GlobalPackages_TypeDefinitionIndex)->GetStaticField(0x24F20);
		}
		static ::UnrealTypes::Package** StaticGet_ScriptPackage()
		{
			return (::UnrealTypes::Package**)Il2CppClass::FromTypeDefinitionIndex(GlobalPackages_TypeDefinitionIndex)->GetStaticField(0x24F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALPACKAGES__CCTOR_OFFSET))();
		}
	};
}
