#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/UIHollowTipsWidgetController_ProgressRedirect.h"

class CKJAPPJEFLE;
class GOGADEDMKCC;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ADDONCLOSE_OFFSET UNITYSDK_OFFSET(0x18E76620)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_BCMCKBLBOKI_OFFSET UNITYSDK_OFFSET(0x18E768F0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_CLOSETIP_OFFSET UNITYSDK_OFFSET(0x18E73A60)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_DOANIMATION_OFFSET UNITYSDK_OFFSET(0x18E73D00)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_IHACFGFFLJM_OFFSET UNITYSDK_OFFSET(0x18E73B70)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_NDPHBEGDLAA_OFFSET UNITYSDK_OFFSET(0x18E745D0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E738A0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18E739C0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E73930)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E73690)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_PJEKAIPNCMB_OFFSET UNITYSDK_OFFSET(0x18E76900)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SETCLOSEACTION_OFFSET UNITYSDK_OFFSET(0x18E765D0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWCHALLENGE_OFFSET UNITYSDK_OFFSET(0x18E74810)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET UNITYSDK_OFFSET(0x18E76120)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_1_OFFSET UNITYSDK_OFFSET(0x18E74700)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_2_OFFSET UNITYSDK_OFFSET(0x18E76530)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET UNITYSDK_OFFSET(0x18E741D0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET UNITYSDK_OFFSET(0x18E73B10)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E766D0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E76730)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18E767C0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E767D0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E76860)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTipsWidgetController_TypeDefinitionIndex = 87865;

	class UIHollowTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::CKJAPPJEFLE* _view; // 0x2C8
		::System::Single MEODNPFIDKA; // 0x2D0
		::System::Byte _padding0[0x4];
		::DG::Tweening::Tweener* KMBLKDONJEK; // 0x2D8
		::UnityEngine::RectTransform* AIBOHAIMPOJ; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle GMGPPBHKOBI; // 0x2E8
		::System::Byte _padding1[0x4];
		::UnityEngine::UI::HorizontalLayoutGroup* PCMDLDCBFNA; // 0x2F0
		::GOGADEDMKCC* EFFAONJBCOG; // 0x2F8
		::System::Action* MMGMBBDCCDL; // 0x300
		::System::Action* ANAGAIEJKPP; // 0x308
		::Foundation::Coroutine::CoroutineHandle ABGNBFABMEC; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void CloseTip(::System::Boolean blend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_CLOSETIP_OFFSET))(this, blend);
		}

		::System::Void StopAutoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_STOPAUTOCLOSE_OFFSET))(this);
		}

		::System::Void DoAnimation(::UnityEngine::UI::VerticalLayoutGroup* missionLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_DOANIMATION_OFFSET))(this, missionLayout);
		}

		::System::Void ShowHollowTips(::System::String* key, ::System::Boolean showIcon, ::System::Boolean finish, ::UnityEngine::RectTransform* viewHollowTip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_OFFSET))(this, key, showIcon, finish, viewHollowTip);
		}

		::System::Void ShowHollowTips_1(::UnityEngine::UI::VerticalLayoutGroup* layout, ::GOGADEDMKCC* data, ::UnityEngine::RectTransform* viewHollowTip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::GOGADEDMKCC*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_1_OFFSET))(this, layout, data, viewHollowTip);
		}

		::System::Void ShowHollowTips_2(::UnityEngine::UI::VerticalLayoutGroup* layout, ::GOGADEDMKCC* data, ::UnityEngine::RectTransform* viewHollowTip, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::GOGADEDMKCC*, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWTIPS_2_OFFSET))(this, layout, data, viewHollowTip, playAnim);
		}

		::System::Void ShowHollowChallenge(::UnityEngine::UI::VerticalLayoutGroup* missionLayout, ::GOGADEDMKCC* data, ::UnityEngine::RectTransform* maxTransform, ::MoleMole::UIHollowTipsWidgetController_ProgressRedirect tempProgress)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::GOGADEDMKCC*, ::UnityEngine::RectTransform*, ::MoleMole::UIHollowTipsWidgetController_ProgressRedirect))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWCHALLENGE_OFFSET))(this, missionLayout, data, maxTransform, tempProgress);
		}

		::System::Void ShowHollowNormalTips(::UnityEngine::UI::VerticalLayoutGroup* missionLayout, ::GOGADEDMKCC* data, ::UnityEngine::RectTransform* maxTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::GOGADEDMKCC*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SHOWHOLLOWNORMALTIPS_OFFSET))(this, missionLayout, data, maxTransform);
		}

		::System::Void SetCloseAction(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_SETCLOSEACTION_OFFSET))(this, callback);
		}

		::System::Void AddOnClose(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_ADDONCLOSE_OFFSET))(this, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void IHACFGFFLJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_IHACFGFFLJM_OFFSET))(this);
		}

		::System::Void BCMCKBLBOKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_BCMCKBLBOKI_OFFSET))(this);
		}

		::System::Void NDPHBEGDLAA(::System::Boolean CGFLLPOCDJM, ::System::Boolean JOBHFEMGBDG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_NDPHBEGDLAA_OFFSET))(this, CGFLLPOCDJM, JOBHFEMGBDG);
		}

		::System::Void PJEKAIPNCMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER_PJEKAIPNCMB_OFFSET))(this);
		}
	};
}
