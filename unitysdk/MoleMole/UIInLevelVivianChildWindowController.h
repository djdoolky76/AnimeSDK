#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class PCNLODODGEG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_OUTLINEANIM_OFFSET UNITYSDK_OFFSET(0x176DB590)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_POINTANIM_OFFSET UNITYSDK_OFFSET(0x176DB560)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x176DB550)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x176DB680)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x176DB780)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x176DB710)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x176DB5C0)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x176DB610)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_REFRESHCURBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x176DBA60)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_REFRESHCURCHARGEPOINT_OFFSET UNITYSDK_OFFSET(0x176DB800)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176DBCC0)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x176DBCD0)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x176DBD60)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x176DBD70)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x176DBD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelVivianChildWindowController_TypeDefinitionIndex = 78763;

	class UIInLevelVivianChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* MACOMNDBLJO; // 0x0
		// static const ::System::String* LFJNBOJFODP; // 0x0
		// static const ::System::String* CCGAAIILDCP; // 0x0
		// static const ::System::String* EJBAFHJJLMG; // 0x0
		::PCNLODODGEG* _view; // 0x320
		::System::Int32 chargeIndex; // 0x328
		::System::Int32 IOKDJFNLCOO; // 0x32C
		::System::Int32 CKMCDPMOJIN; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Animation* get_PointAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_POINTANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* get_OutlineAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_OUTLINEANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void RefreshCurChargePoint(::System::Int32 oldChargeTimes, ::System::Int32 curChargeTimes, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_REFRESHCURCHARGEPOINT_OFFSET))(this, oldChargeTimes, curChargeTimes, ignoreAnimation);
		}

		::System::Void RefreshCurBuffCount(::System::Int32 oldBuffCount, ::System::Int32 curBuffCount, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_REFRESHCURBUFFCOUNT_OFFSET))(this, oldBuffCount, curBuffCount, ignoreAnimation);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
