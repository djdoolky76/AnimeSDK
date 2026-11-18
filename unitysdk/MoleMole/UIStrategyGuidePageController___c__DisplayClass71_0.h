#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuidePageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFF200)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_0__REFRESHRECOMMENDTEAMPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x13AFF210)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass71_0_TypeDefinitionIndex = 52231;

	class UIStrategyGuidePageController___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* top1Ids; // 0x10
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRecommendTeamPanel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_0__REFRESHRECOMMENDTEAMPANEL_B__0_OFFSET))(this);
		}
	};
}
