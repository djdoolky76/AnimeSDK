#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_LayerInfoData.h"
#include "unitysdk/System/ValueTuple_2.h"

class CJOLHKEPLJK;
class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class LGINJIKKBJA;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_APPLYROWVISUAL_OFFSET UNITYSDK_OFFSET(0x1A35E690)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_BINDCLICKHANDLERCORE_OFFSET UNITYSDK_OFFSET(0x1A35E1D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_BINDCLICKHANDLER_OFFSET UNITYSDK_OFFSET(0x1A35E170)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_DISPOSEVIEW_OFFSET UNITYSDK_OFFSET(0x1A35E410)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_GET_LAYERDATA_OFFSET UNITYSDK_OFFSET(0x1A35E090)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_KCNOMHFHKAC_OFFSET UNITYSDK_OFFSET(0x1A35F6B0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_KLFANDHNNPB_OFFSET UNITYSDK_OFFSET(0x1A35F7D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_NKIDFGIHGPK_OFFSET UNITYSDK_OFFSET(0x1A35F6C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A35E310)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1A35E470)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSELECTEDLAYERCHANGED_OFFSET UNITYSDK_OFFSET(0x1A35F300)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A35E3A0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A35E0A0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x1A35F3C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1A35E580)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A35F2B0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35F450)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A35F460)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1A35F4F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A35F590)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A35F620)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageRowWidgetController_TypeDefinitionIndex = 60486;

	class UIBossChallengePageRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::CJOLHKEPLJK* _view; // 0x2F8
		::MoleMole::UIBossChallengePageController_LayerInfoData _AMLHAJBPPPF_k__BackingField; // 0x300
		::System::Action_1<::MoleMole::UIBossChallengePageRowWidgetController*>* _clickCallback; // 0x308
		::System::Int32 _selectLayerIndex; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIBossChallengePageController_LayerInfoData get_layerData()
		{
			return ((::MoleMole::UIBossChallengePageController_LayerInfoData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_GET_LAYERDATA_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindClickHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_BINDCLICKHANDLER_OFFSET))(this);
		}

		::System::Void BindClickHandlerCore(::LGINJIKKBJA* button, ::GCIMMDDIFBJ* rowAnim)
		{
			return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_BINDCLICKHANDLERCORE_OFFSET))(this, button, rowAnim);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DisposeView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_DISPOSEVIEW_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ApplyRowVisual(::UnityEngine::UI::Extension::UILocalizationText* titleText, ::FGCOIBFFCHB* bossImage, ::System::Int32 roleIconCount, ::System::Func_2<::System::Int32, ::System::ValueTuple_2<::FGCOIBFFCHB*, ::FGCOIBFFCHB*>>* getRoleIcon, ::System::Collections::Generic::IList_1<::FGCOIBFFCHB*>* starCollection, ::UnityEngine::UI::Extension::UILocalizationText* score, ::UnityEngine::UI::Extension::UILocalizationText* unScore)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::FGCOIBFFCHB*, ::System::Int32, ::System::Func_2<::System::Int32, ::System::ValueTuple_2<::FGCOIBFFCHB*, ::FGCOIBFFCHB*>>*, ::System::Collections::Generic::IList_1<::FGCOIBFFCHB*>*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_APPLYROWVISUAL_OFFSET))(this, titleText, bossImage, roleIconCount, getRoleIcon, starCollection, score, unScore);
		}

		::System::Void SetClickCallback(::System::Action_1<::MoleMole::UIBossChallengePageRowWidgetController*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBossChallengePageRowWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET))(this, callback);
		}

		::System::Void OnSelectedLayerChanged(::MoleMole::UIBossChallengePageController_LayerInfoData selectedLayerData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSELECTEDLAYERCHANGED_OFFSET))(this, selectedLayerData);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void KCNOMHFHKAC(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_KCNOMHFHKAC_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::ValueTuple_2<::FGCOIBFFCHB*, ::FGCOIBFFCHB*> NKIDFGIHGPK(::System::Int32 HBJOLKHGGDD)
		{
			return ((::System::ValueTuple_2<::FGCOIBFFCHB*, ::FGCOIBFFCHB*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_NKIDFGIHGPK_OFFSET))(this, HBJOLKHGGDD);
		}

		::System::Void KLFANDHNNPB(::MoleMole::UIBossChallengePageController_LayerInfoData EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_KLFANDHNNPB_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
