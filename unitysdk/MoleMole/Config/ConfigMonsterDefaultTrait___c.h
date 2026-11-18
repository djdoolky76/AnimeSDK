#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CKMMPOGHDFI.h"
#include "unitysdk/JOHNONOOOCH.h"

class NLANCPLMPLB;

#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19247890)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192478D0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__ONPOSTENTITYREADY_B__21_0_OFFSET UNITYSDK_OFFSET(0x192478E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterDefaultTrait___c_TypeDefinitionIndex = 69126;

	class ConfigMonsterDefaultTrait___c : public ::System::Object
	{
	public:
		static ::NLANCPLMPLB** StaticGet___9__21_0()
		{
			return (::NLANCPLMPLB**)Il2CppClass::FromTypeDefinitionIndex(ConfigMonsterDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x3BDD0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigMonsterDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x3BDD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__CTOR_OFFSET))(this);
		}

		::JOHNONOOOCH _OnPostEntityReady_b__21_0(::CKMMPOGHDFI& target)
		{
			return ((::JOHNONOOOCH(*)(::PVOID, ::CKMMPOGHDFI&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___C__ONPOSTENTITYREADY_B__21_0_OFFSET))(this, target);
		}
	};
}
