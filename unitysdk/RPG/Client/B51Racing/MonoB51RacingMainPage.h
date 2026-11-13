#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
class IDCOJJANCCK;
class MOHHKCFJKAH;
class PANFFLNPILM;
class PJAPDCPOBGC;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class MonoRemainTimer; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingMainPageEntranceViewModel; }
namespace RPG::Client::B51Racing { class B51RacingMainPageViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_BUILDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CA7E290)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7ED80)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONCLOSECLICK_OFFSET UNITYSDK_OFFSET(0x1CA7CD60)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONDIYCLICK_OFFSET UNITYSDK_OFFSET(0x1CA7E380)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONENTRANCECLICK_OFFSET UNITYSDK_OFFSET(0x1CA7E320)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONEXITMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1CA7E6C0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONLIGHTCONEREWARDCLICK_OFFSET UNITYSDK_OFFSET(0x1CA7E440)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONLIMITEDREWARDCLICK_OFFSET UNITYSDK_OFFSET(0x1CA7E3E0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONPAGEVIEWCHANGETOACTIVE_OFFSET UNITYSDK_OFFSET(0x1CA7E240)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x1CA7DF20)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONREWARDPERMANENTCLICK_OFFSET UNITYSDK_OFFSET(0x1CA7E4A0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1CA7CE40)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ACQUIRESCENETOKEN_OFFSET UNITYSDK_OFFSET(0x1CA7BC50)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__BEGINENTRANCESWITCHINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0x1CA7EA10)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__CLEARENTRANCESWITCHINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0x1CA7C060)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__FORCEREFRESHCARAPPEARANCE_OFFSET UNITYSDK_OFFSET(0x1CA7E010)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x1CA7B630)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETCAMERASERVICE_OFFSET UNITYSDK_OFFSET(0x1CA7E750)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETCARSERVICE_OFFSET UNITYSDK_OFFSET(0x1CA7E8F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETSCENESERVICE_OFFSET UNITYSDK_OFFSET(0x1CA7E820)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1CA7CF40)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETWINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0x1CA7E5F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CA7C140)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CA7BCF0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONENTRANCEANIMATIONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1CA7EBA0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONFADEINANIMEND_OFFSET UNITYSDK_OFFSET(0x1CA7E9C0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CA7B6D0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONTIMELIMITSCHEDULEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1CA7ED20)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__REFRESHREWARDBUTTONS_OFFSET UNITYSDK_OFFSET(0x1CA7DA60)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__REFRESHTEXT_OFFSET UNITYSDK_OFFSET(0x1CA7D3F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__REFRESHTIMELIMITSCHEDULETIMER_OFFSET UNITYSDK_OFFSET(0x1CA7DD40)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__REFRESHUISTATECTRLS_OFFSET UNITYSDK_OFFSET(0x1CA7D940)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__RELEASETRANSIENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1CA7D370)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__SETUPCAMERA_OFFSET UNITYSDK_OFFSET(0x1CA7CFF0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__SETUPCARTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CA7D0F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__TRYPLAYENTRANCESWITCHANIMATION_OFFSET UNITYSDK_OFFSET(0x1CA7E150)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingMainPage_TypeDefinitionIndex = 84623;

	class MonoB51RacingMainPage : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnClose; // 0x40
		::RPG::Client::AnimatorButton* _BtnEntrance; // 0x48
		::RPG::Client::AnimatorButton* _BtnDIY; // 0x50
		::RPG::Client::AnimatorButton* _BtnRewardPermanent; // 0x58
		::RPG::Client::LocalizedText* _ClaimedRewardCountText; // 0x60
		::RPG::Client::LocalizedText* _AllRewardCountText; // 0x68
		::UnityEngine::Transform* _LeftRewardPanelNode; // 0x70
		::RPG::Client::AnimatorButton* _BtnLimitedReward; // 0x78
		::RPG::Client::AnimatorButton* _BtnLightConeReward; // 0x80
		::UnityEngine::Transform* _LightConeRewardReceivedNode; // 0x88
		::UnityEngine::Transform* _LimitRewardRedDotAnchor; // 0x90
		::UnityEngine::Transform* _LightConeRewardRedDotAnchor; // 0x98
		::UnityEngine::Transform* _ResidentRewardRedDotAnchor; // 0xA0
		::UnityEngine::Transform* _EntranceNewRedDotAnchor; // 0xA8
		::UnityEngine::Transform* _RemainTimeIconRoot; // 0xB0
		::RPG::Client::MonoRemainTimer* _RemainTimer; // 0xB8
		::RPG::Client::LocalizedText* _EntranceTitle; // 0xC0
		::RPG::Client::LocalizedText* _EntranceDayNumText; // 0xC8
		::RPG::Client::LocalizedText* _EntranceCycleName; // 0xD0
		::RPG::Client::LocalizedText* _EntranceHint; // 0xD8
		::UnityEngine::GameObject* _EntranceNumRoot; // 0xE0
		::RPG::Client::UIStateCtrl* _UIStateCtrlEntranceRoot; // 0xE8
		::UnityEngine::Animation* _EntranceAnimation; // 0xF0
		::RPG::Client::MonoAnimationTrigger* _EntranceAnimationTrigger; // 0xF8
		::System::UInt32 _EntranceSwitchInputBlockUID; // 0x100
		::System::Byte _padding0[0x4];
		::MOHHKCFJKAH* _CameraService; // 0x108
		::GNOCLCNNAPD* _SceneService; // 0x110
		::PJAPDCPOBGC* _CarService; // 0x118
		::IDCOJJANCCK* _WindowService; // 0x120
		::BDPODLBIFOH* _SceneToken; // 0x128
		::RPG::Client::TextID _ENTRANCE_TITLE_ENTRY_RACE; // 0x130
		::RPG::Client::TextID _ENTRANCE_TITLE_CONTINUE_RACE; // 0x140
		::RPG::Client::TextID _ENTRANCE_TITLE_CHALLENGE; // 0x150
		::RPG::Client::TextID _ENTRANCE_DAY_TEXT; // 0x160
		::System::String* _ROOT_STATE_PREFIX; // 0x170
		::System::String* _ROOT_STATE_CHALLENGE; // 0x178
		::System::String* _ENTRANCE_SWITCH_ANIMATION; // 0x180
		::System::String* _ENTRANCE_SWITCH_EVENT; // 0x188
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_CTOR_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCloseClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONCLOSECLICK_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnReturnToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONRETURNTOTOP_OFFSET))(this);
		}

		::System::Void OnPageViewChangeToActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONPAGEVIEWCHANGETOACTIVE_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingMainPageViewModel* BuildViewModel()
		{
			return ((::RPG::Client::B51Racing::B51RacingMainPageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_BUILDVIEWMODEL_OFFSET))(this);
		}

		::System::Void OnEntranceClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONENTRANCECLICK_OFFSET))(this);
		}

		::System::Void OnDIYClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONDIYCLICK_OFFSET))(this);
		}

		::System::Void OnLimitedRewardClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONLIMITEDREWARDCLICK_OFFSET))(this);
		}

		::System::Void OnLightConeRewardClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONLIGHTCONEREWARDCLICK_OFFSET))(this);
		}

		::System::Void OnRewardPermanentClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONREWARDPERMANENTCLICK_OFFSET))(this);
		}

		::System::Void OnExitMainPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE_ONEXITMAINPAGE_OFFSET))(this, a1);
		}

		::PANFFLNPILM* _GetService()
		{
			return ((::PANFFLNPILM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETSERVICE_OFFSET))(this);
		}

		::System::Void _SetUpCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__SETUPCAMERA_OFFSET))(this);
		}

		::System::Void _SetUpCarTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__SETUPCARTRANSFORM_OFFSET))(this);
		}

		::System::Void _ForceRefreshCarAppearance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__FORCEREFRESHCARAPPEARANCE_OFFSET))(this);
		}

		::System::Void _RefreshText(::RPG::Client::B51Racing::B51RacingMainPageEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingMainPageEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__REFRESHTEXT_OFFSET))(this, a1);
		}

		::System::Void _RefreshUIStateCtrls(::RPG::Client::B51Racing::B51RacingMainPageEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingMainPageEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__REFRESHUISTATECTRLS_OFFSET))(this, a1);
		}

		::System::Void _OnFadeInAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONFADEINANIMEND_OFFSET))(this);
		}

		::System::Void _TryPlayEntranceSwitchAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__TRYPLAYENTRANCESWITCHANIMATION_OFFSET))(this);
		}

		::System::Void _BeginEntranceSwitchInputBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__BEGINENTRANCESWITCHINPUTBLOCK_OFFSET))(this);
		}

		::System::Void _ClearEntranceSwitchInputBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__CLEARENTRANCESWITCHINPUTBLOCK_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimationTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONENTRANCEANIMATIONTRIGGER_OFFSET))(this, a1);
		}

		::System::Void _RefreshRewardButtons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__REFRESHREWARDBUTTONS_OFFSET))(this);
		}

		::System::Void _RefreshTimeLimitScheduleTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__REFRESHTIMELIMITSCHEDULETIMER_OFFSET))(this);
		}

		::System::Void _OnTimeLimitScheduleExpired(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ONTIMELIMITSCHEDULEEXPIRED_OFFSET))(this, a1);
		}

		::MOHHKCFJKAH* _GetCameraService()
		{
			return ((::MOHHKCFJKAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETCAMERASERVICE_OFFSET))(this);
		}

		::GNOCLCNNAPD* _GetSceneService()
		{
			return ((::GNOCLCNNAPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETSCENESERVICE_OFFSET))(this);
		}

		::System::Void _AcquireSceneToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__ACQUIRESCENETOKEN_OFFSET))(this);
		}

		::System::Void _ReleaseTransientToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__RELEASETRANSIENTTOKEN_OFFSET))(this);
		}

		::PJAPDCPOBGC* _GetCarService()
		{
			return ((::PJAPDCPOBGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETCARSERVICE_OFFSET))(this);
		}

		::IDCOJJANCCK* _GetWindowService()
		{
			return ((::IDCOJJANCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGMAINPAGE__GETWINDOWSERVICE_OFFSET))(this);
		}

	};
}
