#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuidePageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_3__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFF2C0)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_3__REFRESHRECOMMENDTEAMPANEL_B__3_OFFSET UNITYSDK_OFFSET(0x13AFF2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass71_3_TypeDefinitionIndex = 52233;

	template <typename T1, typename T2, typename T3>
	class UIStrategyGuidePageController___c__DisplayClass71_3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* additionalTeamIds; // 0x10
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_3__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRecommendTeamPanel_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_3__REFRESHRECOMMENDTEAMPANEL_B__3_OFFSET))(this);
		}
	};
}
