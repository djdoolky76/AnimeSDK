#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaShopItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEFORMULASHOPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF0A8A0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF0A8E0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA___C___REPORTBUYFORMULA_B__6_0_OFFSET UNITYSDK_OFFSET(0xDF0A8F0)

namespace RPG::Client
{
	class RogueFormulaShopData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueFormulaShopItemData*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaShopItemData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60000);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __ReportBuyFormula_b__6_0(::RPG::Client::RogueFormulaShopItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaShopItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA___C___REPORTBUYFORMULA_B__6_0_OFFSET))(this, a1);
		}

	};
}
