#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuidePageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFF240)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_1__REFRESHRECOMMENDTEAMPANEL_B__1_OFFSET UNITYSDK_OFFSET(0x13AFF250)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass71_1_TypeDefinitionIndex = 52247;

	template <typename T>
	class UIStrategyGuidePageController___c__DisplayClass71_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* top2Ids; // 0x10
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRecommendTeamPanel_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_1__REFRESHRECOMMENDTEAMPANEL_B__1_OFFSET))(this);
		}
	};
}
