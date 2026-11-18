#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class GALOKGMMHKH;
class HMHKAIANMBE;
namespace MoleMole { class MonoActivityAnimSetting; }
namespace MoleMole { class UIActivityDemoTrialBGContext; }
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0x19149A60)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_JEIDPFBMPJJ_OFFSET UNITYSDK_OFFSET(0x19149E60)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCLICKDEMOPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0x1914A320)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19149880)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19149980)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19149910)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x191499E0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191493A0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19149610)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_PLAYBGANIMATION_OFFSET UNITYSDK_OFFSET(0x19149AD0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1914A5F0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1914A650)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1914A6E0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1914A770)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1914A810)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1914A8A0)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1914A930)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDemoTrialBGEffectWidgetController_TypeDefinitionIndex = 73920;

	class UIActivityDemoTrialBGEffectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GALOKGMMHKH* _view; // 0x2C8
		::MoleMole::UIActivityDemoTrialBGContext* JJANFACAPMG; // 0x2D0
		::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController* roleNameplate; // 0x2D8
		::MoleMole::MonoActivityAnimSetting* animSetting; // 0x2E0
		::HMHKAIANMBE* HONMCJHJFAE; // 0x2E8
		::System::Int32 trialRoleID; // 0x2F0
		::Foundation::Coroutine::CoroutineHandle animHandle; // 0x2F4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean IsPlayingAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET))(this);
		}

		::System::Void PlayBGAnimation(::System::String* extensionName, ::System::Action* enterCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_PLAYBGANIMATION_OFFSET))(this, extensionName, enterCallback);
		}

		::System::Void OnClickDemoPreviewAvatar(::System::Int32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_ONCLICKDEMOPREVIEWAVATAR_OFFSET))(this, roleID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void JEIDPFBMPJJ(::System::String* GPJLCAOKCAO, ::System::Action* DDJGBDAHEPP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER_JEIDPFBMPJJ_OFFSET))(this, GPJLCAOKCAO, DDJGBDAHEPP);
		}
	};
}
