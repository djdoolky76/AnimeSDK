#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/EGCPGOHHAIC.h"

class MGGFABNBOEB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_GET_PLAYANIMWITHPARENT_OFFSET UNITYSDK_OFFSET(0x1A2BD5F0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_HANDLEEXTRAUIOPERATION_OFFSET UNITYSDK_OFFSET(0x1A2BE2B0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A2BD700)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2BD790)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A2BD600)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A2BD660)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1A2BE260)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A2BE1B0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0x1A2BDF60)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x1A2BDA60)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A2BD810)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2BE370)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A2BE3D0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2BE460)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A2BE4F0)
#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A2BE580)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTimerWidgetController_TypeDefinitionIndex = 48211;

	class UIInLevelTimerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MGGFABNBOEB* _view; // 0x2C8
		::System::Boolean FOFIDPHMGBE; // 0x2D0
		::System::Boolean CFKDLPDNGJC; // 0x2D1
		::System::Byte _padding0[0x2];
		::System::Single countDownSeconds; // 0x2D4
		::System::Int32 FILJICBLANA; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_PlayAnimWithParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_GET_PLAYANIMWITHPARENT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_UPDATEAUDIO_OFFSET))(this);
		}

		::System::Void SetFillAmount(::System::Single remainingNormalized)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETFILLAMOUNT_OFFSET))(this, remainingNormalized);
		}

		::System::Void SetTime(::System::Int32 totalS)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_SETTIME_OFFSET))(this, totalS);
		}

		::System::Void Pause(::System::Boolean pauseState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_PAUSE_OFFSET))(this, pauseState);
		}

		::System::Void HandleExtraUIOperation(::EGCPGOHHAIC data)
		{
			return ((::System::Void(*)(::PVOID, ::EGCPGOHHAIC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_HANDLEEXTRAUIOPERATION_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
