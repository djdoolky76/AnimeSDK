#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E74950)
#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E74990)
#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__ONMAINBTNCLICKED_B__18_0_OFFSET UNITYSDK_OFFSET(0x13E74B20)
#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__SETREWARDICON_B__15_0_OFFSET UNITYSDK_OFFSET(0x13E749A0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex = 74374;

	class UITriDiceOracleCardItemCollectPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x453B0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x453B8);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x453C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetRewardIcon_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__SETREWARDICON_B__15_0_OFFSET))(this);
		}

		::System::Void _OnMainBtnClicked_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__ONMAINBTNCLICKED_B__18_0_OFFSET))(this);
		}
	};
}
