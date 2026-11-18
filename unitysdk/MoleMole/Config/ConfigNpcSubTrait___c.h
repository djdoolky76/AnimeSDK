#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CKMMPOGHDFI.h"
#include "unitysdk/JOHNONOOOCH.h"

class NLANCPLMPLB;

#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B1BCD0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1BD10)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__INITNPCNAME_B__38_0_OFFSET UNITYSDK_OFFSET(0x19B1BD20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcSubTrait___c_TypeDefinitionIndex = 62238;

	class ConfigNpcSubTrait___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait___c_TypeDefinitionIndex)->GetStaticField(0x34830);
		}
		static ::NLANCPLMPLB** StaticGet___9__38_0()
		{
			return (::NLANCPLMPLB**)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait___c_TypeDefinitionIndex)->GetStaticField(0x34838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__CTOR_OFFSET))(this);
		}

		::JOHNONOOOCH _InitNpcName_b__38_0(::CKMMPOGHDFI& target)
		{
			return ((::JOHNONOOOCH(*)(::PVOID, ::CKMMPOGHDFI&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___C__INITNPCNAME_B__38_0_OFFSET))(this, target);
		}
	};
}
