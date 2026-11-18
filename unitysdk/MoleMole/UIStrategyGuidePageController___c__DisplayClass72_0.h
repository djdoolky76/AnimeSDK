#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuidePageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS72_0__BUILDAIRECOMMENDTEAMCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x13AFF310)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFF300)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass72_0_TypeDefinitionIndex = 52230;

	class UIStrategyGuidePageController___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* aiTeamIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildAiRecommendTeamContext_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS72_0__BUILDAIRECOMMENDTEAMCONTEXT_B__0_OFFSET))(this);
		}
	};
}
