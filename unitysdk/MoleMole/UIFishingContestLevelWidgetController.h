#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class NECONCJIAKJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_LPHEBDIAJMB_OFFSET UNITYSDK_OFFSET(0x1808BF80)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1808AE70)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1808AF00)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1808ADA0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1808AE00)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1808BD90)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYLEVELUPANIMATION_OFFSET UNITYSDK_OFFSET(0x1808BEA0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_SHOWLEVELPROGRESS_OFFSET UNITYSDK_OFFSET(0x1808AF80)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_SHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x1808B440)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1808C140)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1808C1B0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1808C240)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1808C2D0)
#define MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1808C360)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestLevelWidgetController_TypeDefinitionIndex = 73554;

	class UIFishingContestLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 BKIDCNJNLNO = 0xF; // 0x0
		::System::Int32 JFLHCHDEBOO; // 0x2C8
		::System::Int32 GDBEOONEAAM; // 0x2CC
		::NECONCJIAKJ* _view; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Void ShowLevelProgress(::UnityEngine::UI::Extension::UILocalizationText* currentGoldText, ::UnityEngine::UI::Extension::UILocalizationText* currentCostText, ::UnityEngine::GameObject* space, ::UnityEngine::RectTransform* progressRoot, ::UnityEngine::RectTransform* progress)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_SHOWLEVELPROGRESS_OFFSET))(currentGoldText, currentCostText, space, progressRoot, progress);
		}

		::System::Void ShowLevel(::System::Int32 currentLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_SHOWLEVEL_OFFSET))(this, currentLevel);
		}

		::System::Void PlayAnimation(::System::Int32 currentLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYANIMATION_OFFSET))(this, currentLevel);
		}

		::System::Void PlayLevelUpAnimation(::System::Int32 currentLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_PLAYLEVELUPANIMATION_OFFSET))(this, currentLevel);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void LPHEBDIAJMB(::System::Int32 HDMFNBPNGDE, ::System::String* LIPIPGHBHFH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTLEVELWIDGETCONTROLLER_LPHEBDIAJMB_OFFSET))(this, HDMFNBPNGDE, LIPIPGHBHFH);
		}
	};
}
