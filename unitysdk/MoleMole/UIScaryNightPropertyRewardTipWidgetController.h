#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CBOBFHGDFFM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_DLPHNANBHMA_OFFSET UNITYSDK_OFFSET(0x1825AD00)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1825A490)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_GJONDDHEPMD_OFFSET UNITYSDK_OFFSET(0x1825B270)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_LGEFHLCIEEK_OFFSET UNITYSDK_OFFSET(0x1825AB40)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_OGILPAIIBFB_OFFSET UNITYSDK_OFFSET(0x1825B350)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1825A620)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1825A6B0)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1825A4A0)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1825A5B0)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_REFRESHUIWITHTEXT_OFFSET UNITYSDK_OFFSET(0x1825AE00)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x1825A880)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1825AF60)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1825B030)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1825B0C0)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1825B150)
#define MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1825B1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightPropertyRewardTipWidgetController_TypeDefinitionIndex = 65211;

	class UIScaryNightPropertyRewardTipWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::CBOBFHGDFFM* _view; // 0x2C8
		::System::Single CGDKCHPNMFE; // 0x2D0
		::System::Boolean MEMEINPDGMG; // 0x2D4
		::System::Boolean GLMDBDPBNOD; // 0x2D5
		::System::Byte _padding0[0x2];
		::System::Single MCOKMPLPNEF; // 0x2D8
		::System::Byte _padding1[0x4];
		::UnityEngine::RectTransform* rectTrans; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle moveCoroutine; // 0x2E8
		::System::Byte _padding2[0x4];
		::System::Action* PLEJMLIFFHG; // 0x2F0
		::UnityEngine::UI::Extension::UILocalizationText* PJCKNDHPDGA; // 0x2F8
		::UnityEngine::UI::Extension::UILocalizationText* KLNKLNOEJMO; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshUI(::GPJMHAAEIKO attrName, ::System::String* propertyName, ::System::String* iconPath, ::System::Int32 delta, ::System::Single duration, ::System::Action* onFinishCb)
		{
			return ((::System::Void(*)(::PVOID, ::GPJMHAAEIKO, ::System::String*, ::System::String*, ::System::Int32, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_REFRESHUI_OFFSET))(this, attrName, propertyName, iconPath, delta, duration, onFinishCb);
		}

		::System::Void RefreshUIWithText(::GPJMHAAEIKO attrName, ::System::String* nameText, ::System::String* iconPath, ::System::String* valueText, ::System::Single duration, ::System::Action* onFinishCb)
		{
			return ((::System::Void(*)(::PVOID, ::GPJMHAAEIKO, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_REFRESHUIWITHTEXT_OFFSET))(this, attrName, nameText, iconPath, valueText, duration, onFinishCb);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void LGEFHLCIEEK(::GPJMHAAEIKO DGDGBJAHDJP)
		{
			return ((::System::Void(*)(::PVOID, ::GPJMHAAEIKO))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_LGEFHLCIEEK_OFFSET))(this, DGDGBJAHDJP);
		}

		::System::Void GJONDDHEPMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_GJONDDHEPMD_OFFSET))(this);
		}

		::System::Void DLPHNANBHMA(::System::Single JOFGIANGHMK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_DLPHNANBHMA_OFFSET))(this, JOFGIANGHMK);
		}

		::System::Void OGILPAIIBFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPROPERTYREWARDTIPWIDGETCONTROLLER_OGILPAIIBFB_OFFSET))(this);
		}
	};
}
