#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class FLGNGKHFAEP;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_BCCHDNLNGEF_OFFSET UNITYSDK_OFFSET(0x18CE4CE0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GETANIMCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x18CE48A0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GET_FLAMEANIM_OFFSET UNITYSDK_OFFSET(0x18CE4290)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GET_LIGHTANIM_OFFSET UNITYSDK_OFFSET(0x18CE42C0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18CE4360)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18CE4470)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18CE43F0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18CE42F0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18CE44B0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE4B20)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18CE4B30)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18CE4BC0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18CE4C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPanYinhuWidgetController_TypeDefinitionIndex = 63565;

	class UIInLevelPanYinhuWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::FLGNGKHFAEP* _view; // 0x2F8
		::Foundation::Coroutine::CoroutineHandle BELKCKIINHL; // 0x300
		::System::Boolean BDJBADAPJMA; // 0x304
		::System::Boolean AFOFFMBGABM; // 0x305

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animation* get_FlameAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GET_FLAMEANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* get_LightAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GET_LIGHTANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isLightOn, ::System::Boolean isFullLightFlameOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isLightOn, isFullLightFlameOn);
		}

		::System::Single GetAnimClipLength(::UnityEngine::Animation* anim, ::System::String* clipName)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GETANIMCLIPLENGTH_OFFSET))(this, anim, clipName);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void BCCHDNLNGEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_BCCHDNLNGEF_OFFSET))(this);
		}
	};
}
