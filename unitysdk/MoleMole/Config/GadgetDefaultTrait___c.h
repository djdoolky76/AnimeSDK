#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CKMMPOGHDFI.h"
#include "unitysdk/JOHNONOOOCH.h"

class NLANCPLMPLB;

#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B933070)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9330B0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__ONPOSTENTITYREADY_B__33_0_OFFSET UNITYSDK_OFFSET(0x1B9330C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetDefaultTrait___c_TypeDefinitionIndex = 38880;

	class GadgetDefaultTrait___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GadgetDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x3BDF0);
		}
		static ::NLANCPLMPLB** StaticGet___9__33_0()
		{
			return (::NLANCPLMPLB**)Il2CppClass::FromTypeDefinitionIndex(GadgetDefaultTrait___c_TypeDefinitionIndex)->GetStaticField(0x3BDF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__CTOR_OFFSET))(this);
		}

		::JOHNONOOOCH _OnPostEntityReady_b__33_0(::CKMMPOGHDFI& target)
		{
			return ((::JOHNONOOOCH(*)(::PVOID, ::CKMMPOGHDFI&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___C__ONPOSTENTITYREADY_B__33_0_OFFSET))(this, target);
		}
	};
}
