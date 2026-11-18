#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuidePageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFF280)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_2__REFRESHRECOMMENDTEAMPANEL_B__2_OFFSET UNITYSDK_OFFSET(0x13AFF290)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass71_2_TypeDefinitionIndex = 52245;

	template <typename T1, typename T2>
	class UIStrategyGuidePageController___c__DisplayClass71_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* basicTeamIds; // 0x10
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRecommendTeamPanel_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS71_2__REFRESHRECOMMENDTEAMPANEL_B__2_OFFSET))(this);
		}
	};
}
