#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class HGAJKHIMKJP;
class HIIJCKACPDL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19044650)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x190447C0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19044940)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190445F0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19044750)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYFRAMETEXTURE_OFFSET UNITYSDK_OFFSET(0x19044DD0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEIN_OFFSET UNITYSDK_OFFSET(0x19044F00)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEOUT_OFFSET UNITYSDK_OFFSET(0x19045260)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHCHANGE_OFFSET UNITYSDK_OFFSET(0x19044E50)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19044AE0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19045540)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190455A0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19045630)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19045640)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190456D0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19045760)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRewardTipsWidgetController_TypeDefinitionIndex = 44062;

	class UIMainCityRewardTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::HGAJKHIMKJP* KPKBEODLMCG; // 0x2C8
		::HIIJCKACPDL* _view; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle OIEOPBKEMJN; // 0x2D8
		::Foundation::Coroutine::CoroutineHandle LMAMOHFCMGO; // 0x2DC
		::UnityEngine::RectTransform* rectTransform; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::HGAJKHIMKJP* itemdata)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemdata);
		}

		::System::Void RefreshChange(::HGAJKHIMKJP* itemdata)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHCHANGE_OFFSET))(this, itemdata);
		}

		::System::Void PlayRewardFadeIn(::System::Single delay, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEIN_OFFSET))(this, delay, animSpeed);
		}

		::System::Void PlayRewardFadeOut(::System::Action* fadeOutCallback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEOUT_OFFSET))(this, fadeOutCallback, animSpeed);
		}

		::System::Void PlayFrameTexture(::System::String* textureKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYFRAMETEXTURE_OFFSET))(this, textureKey);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
