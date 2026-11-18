#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UITransitionPanelPopWindowController_TransitionState.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/System/Nullable_1.h"

class MBAJJGCKLJK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITION_OFFSET UNITYSDK_OFFSET(0x14E19B10)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFORCETRANSITIONWITHCOLOR_OFFSET UNITYSDK_OFFSET(0x14E19970)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x14E19240)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14E19230)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_IGKIOGIBHGL_OFFSET UNITYSDK_OFFSET(0x14E19D00)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEIN_OFFSET UNITYSDK_OFFSET(0x14E1A6B0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEOUT_OFFSET UNITYSDK_OFFSET(0x14E1A760)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x14E1A710)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_KGOIEKICMEM_OFFSET UNITYSDK_OFFSET(0x14E1AD00)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_KLHLGKMMFHK_1_OFFSET UNITYSDK_OFFSET(0x14E1AD90)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_KLHLGKMMFHK_OFFSET UNITYSDK_OFFSET(0x14E1AB80)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E194B0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONDISABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x14E196C0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONENABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x14E19330)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14E195D0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E19540)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E19250)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14E19840)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E1A7C0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E1A7E0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONDISABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x14E1A870)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONENABLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x14E1A900)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14E1A990)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E1AA50)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E1AA60)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14E1AAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UITransitionPanelPopWindowController_TypeDefinitionIndex = 57667;

	class UITransitionPanelPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single DEF_FADE_TRANSIT_DURATION; // 0x0
		::System::Boolean HBOPLLBMLCH; // 0x320
		::System::Byte _padding0[0x7];
		::MBAJJGCKLJK* _view; // 0x328
		::MoleMole::UITransitionPanelPopWindowController_TransitionState MBBGIFIEOLK; // 0x330
		::UnityEngine::Color NIDBOPODPJD; // 0x334
		::Foundation::Coroutine::CoroutineHandle BAPLOPHPNOP; // 0x344
		::MoleMole::UITransitionPanelPopWindowController_TransitionState IILMPOAHEAF; // 0x348
		::System::Byte _padding1[0x4];
		::System::Action* AACJIGFFHPJ; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnEnableSoundState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONENABLESOUNDSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnDisableSoundState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ONDISABLESOUNDSTATE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void DoForceTransitionWithColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFORCETRANSITIONWITHCOLOR_OFFSET))(this, color);
		}

		::System::Void DoFadeTransition(::MoleMole::UITransitionPanelPopWindowController_TransitionState state, ::System::Single fadeDuraionSeconds, ::System::Action* onFadeBeginCallback, ::System::Action* onFadeEndCallback, ::UnityEngine::AnimationCurve* curve, ::System::Boolean fromCurrentColor, ::System::Boolean isWhiteCurtain)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::System::Action*, ::System::Action*, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_DOFADETRANSITION_OFFSET))(this, state, fadeDuraionSeconds, onFadeBeginCallback, onFadeEndCallback, curve, fromCurrentColor, isWhiteCurtain);
		}

		::System::Boolean IsFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEIN_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsFadeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_ISFADEOUT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnDisableSoundState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONDISABLESOUNDSTATE_OFFSET))(this);
		}

		::System::Void __base_OnEnableSoundState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONENABLESOUNDSTATE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void KLHLGKMMFHK(::System::Single KEJNOAFJFKC, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::UnityEngine::Color AOEKDFGHJPO, ::UnityEngine::Color BJCPIOEELOL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_KLHLGKMMFHK_OFFSET))(this, KEJNOAFJFKC, MDPPNMIPDMP, FAJHPKBELMF, AOEKDFGHJPO, BJCPIOEELOL);
		}

		::System::Void IGKIOGIBHGL(::MoleMole::UITransitionPanelPopWindowController_TransitionState JKBLDFBGBPK, ::System::Single CNDIBEDIKOJ, ::System::Action* NPNBGEHALIF, ::System::Action* EACOGDJEALO, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Boolean MLECFAPINNM, ::System::Nullable_1<::UnityEngine::Color> GONMPKAIEJH)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::System::Action*, ::System::Action*, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_IGKIOGIBHGL_OFFSET))(this, JKBLDFBGBPK, CNDIBEDIKOJ, NPNBGEHALIF, EACOGDJEALO, FAJHPKBELMF, MLECFAPINNM, GONMPKAIEJH);
		}

		static ::UnityEngine::Color KGOIEKICMEM(::UnityEngine::Color JBBFCGAMDHI, ::System::Single KGHNBNOMMJI)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_KGOIEKICMEM_OFFSET))(JBBFCGAMDHI, KGHNBNOMMJI);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* KLHLGKMMFHK_1(::MoleMole::UITransitionPanelPopWindowController_TransitionState JKBLDFBGBPK, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::UnityEngine::Color AOEKDFGHJPO, ::UnityEngine::Color BJCPIOEELOL, ::System::Action* EACOGDJEALO)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::UITransitionPanelPopWindowController_TransitionState, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER_KLHLGKMMFHK_1_OFFSET))(this, JKBLDFBGBPK, MDPPNMIPDMP, FAJHPKBELMF, AOEKDFGHJPO, BJCPIOEELOL, EACOGDJEALO);
		}
	};
}
