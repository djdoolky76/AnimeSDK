#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
class BDPODLBIFOH;
class FKEIEEJIBPB;
class GNOCLCNNAPD;
class LGKNPHGNNDI;
class MOHHKCFJKAH;
class NOGJOIKFJGE;
class PJAPDCPOBGC;
class PNAKMCAJHHJ;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingReadyPageViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::Client::B51Racing { class MonoB51RacingReadyDriverPanel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA83D30)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA83D00)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONEXITCLICK_OFFSET UNITYSDK_OFFSET(0x1CA82C90)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONGAMEPADSKILLCHECKCLICK_OFFSET UNITYSDK_OFFSET(0x1CA82F70)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONGAMEPADSWITCHAVATARCLICK_OFFSET UNITYSDK_OFFSET(0x1CA82F10)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x1CA830C0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONSTARTRACECLICK_OFFSET UNITYSDK_OFFSET(0x1CA82E60)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONTABSELECT_OFFSET UNITYSDK_OFFSET(0x1CA82FD0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1CA81190)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ACQUIRESCENETOKEN_OFFSET UNITYSDK_OFFSET(0x1CA80AE0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ADAPTCAMERAFOV_OFFSET UNITYSDK_OFFSET(0x1CA837E0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__APPLYSTATICTEXTIDS_OFFSET UNITYSDK_OFFSET(0x1CA81960)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__APPLYTABSTATE_OFFSET UNITYSDK_OFFSET(0x1CA81B90)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x1CA810F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETCAMERASERVICE_OFFSET UNITYSDK_OFFSET(0x1CA83710)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETCARSERVICE_OFFSET UNITYSDK_OFFSET(0x1CA83C30)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETSCENESERVICE_OFFSET UNITYSDK_OFFSET(0x1CA80A10)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1CA82D60)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0x1CA82E10)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CA80B80)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CA829F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONEXITCLICK_B__53_0_OFFSET UNITYSDK_OFFSET(0x1CA83ED0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONGETRANKITEM_OFFSET UNITYSDK_OFFSET(0x1CA83540)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONGETTARGETITEM_OFFSET UNITYSDK_OFFSET(0x1CA83130)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CA802F0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONSTARTENTERMATCHRAID_OFFSET UNITYSDK_OFFSET(0x1CA82EC0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1CA83960)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHDRIVERPANEL_OFFSET UNITYSDK_OFFSET(0x1CA81DE0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHMAPAREA_OFFSET UNITYSDK_OFFSET(0x1CA81E60)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHRANKLIST_OFFSET UNITYSDK_OFFSET(0x1CA826E0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHSTARTBUTTON_OFFSET UNITYSDK_OFFSET(0x1CA82890)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1CA82520)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__RELEASETRANSIENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1CA818E0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__SETUPCAMERA_OFFSET UNITYSDK_OFFSET(0x1CA817A0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__SETUPREADYPAGECONTENT_OFFSET UNITYSDK_OFFSET(0x1CA81540)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__TRYINITDRIVERPANEL_OFFSET UNITYSDK_OFFSET(0x1CA839B0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingReadyPage_TypeDefinitionIndex = 84740;

	class MonoB51RacingReadyPage : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _RightPanelStateCtrl; // 0x40
		::UnityEngine::Transform* _MapRoot; // 0x48
		::RPG::Client::LocalizedText* _MapTitle; // 0x50
		::RPG::Client::LocalizedText* _TrackName; // 0x58
		::RPG::Client::LocalizedText* _RoundNum; // 0x60
		::RPG::Client::LocalizedText* _RoundText; // 0x68
		::RPG::Client::LocalizedText* _MatchIndexTitle; // 0x70
		::RPG::Client::LocalizedText* _MapText; // 0x78
		::UnityEngine::UI::Image* _TrackImage; // 0x80
		::UnityEngine::Transform* _RankRoot; // 0x88
		::RPG::Client::StaticListView* _RankListView; // 0x90
		::RPG::Client::StaticListView* _TargetListView; // 0x98
		::RPG::Client::LocalizedText* _TargetTitle; // 0xA0
		::RPG::Client::LocalizedText* _BtnGoText; // 0xA8
		::UnityEngine::Transform* _BtnGoDisable; // 0xB0
		::UnityEngine::Transform* _TopTabArea; // 0xB8
		::RPG::Client::LocalizedText* _Tab1TextSelected; // 0xC0
		::RPG::Client::LocalizedText* _Tab2TextSelected; // 0xC8
		::RPG::Client::AnimatorButton* _BtnExit; // 0xD0
		::RPG::Client::AnimatorButton* _BtnGo; // 0xD8
		::RPG::Client::AnimatorButton* _BtnGamepadSwitchAvatar; // 0xE0
		::RPG::Client::AnimatorButton* _BtnGamepadSkillCheck; // 0xE8
		::RPG::Client::UIFollow3DTarget* _SwitchAvatarFollowTarget; // 0xF0
		::RPG::Client::UIFollow3DTarget* _SkillCheckFollowTarget; // 0xF8
		::RPG::Client::B51Racing::MonoB51RacingReadyDriverPanel* _DriverPanel; // 0x100
		::UnityEngine::GameObject* _BGContentPoint; // 0x108
		::UnityEngine::Transform* _CamFollowPoint; // 0x110
		::UnityEngine::Animation* _BGCarAnimation; // 0x118
		::UnityEngine::Transform* _BGCarRoot; // 0x120
		::Cinemachine::CinemachineVirtualCamera* _PageVCam; // 0x128
		::System::Boolean _HasStartedEnteringMatchRaid; // 0x130
		::System::Boolean _targetListViewInitialized; // 0x131
		::System::Boolean _rankListViewInitialized; // 0x132
		::System::Byte _padding0[0x5];
		::System::Collections::Generic::List_1<::PNAKMCAJHHJ*>* _cachedTargets; // 0x138
		::System::Collections::Generic::List_1<::LGKNPHGNNDI*>* _cachedRankEntries; // 0x140
		::BDPODLBIFOH* _SceneToken; // 0x148
		::NOGJOIKFJGE* _ReadyPageCarAppearanceHelper; // 0x150
		::MOHHKCFJKAH* _CameraService; // 0x158
		::GNOCLCNNAPD* _SceneService; // 0x160
		::PJAPDCPOBGC* _CarService; // 0x168
		::System::Single _BaseFov169; // 0x170
		::System::Byte _padding1[0x4];
		::Cinemachine::CinemachineVirtualCamera* _ReadyPageVCam; // 0x178
		static ::RPG::Client::TextID* StaticGet_s_TextRace()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.B51Racing", "MonoB51RacingReadyPage")->GetStaticField(0x13880);
		}

		static ::RPG::Client::TextID* StaticGet_s_TextTrackDescription()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.B51Racing", "MonoB51RacingReadyPage")->GetStaticField(0x13890);
		}

		static ::RPG::Client::TextID* StaticGet_s_TextStartRace()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.B51Racing", "MonoB51RacingReadyPage")->GetStaticField(0x138A0);
		}

		static ::RPG::Client::TextID* StaticGet_s_TextTarget()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.B51Racing", "MonoB51RacingReadyPage")->GetStaticField(0x138B0);
		}

		static ::RPG::Client::TextID* StaticGet_s_TextMap()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.B51Racing", "MonoB51RacingReadyPage")->GetStaticField(0x138C0);
		}

		static ::RPG::Client::TextID* StaticGet_s_TextScoreDetailBtn()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.B51Racing", "MonoB51RacingReadyPage")->GetStaticField(0x138D0);
		}

		static ::RPG::Client::TextID* StaticGet_s_TextMatchLap()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.B51Racing", "MonoB51RacingReadyPage")->GetStaticField(0x138E0);
		}

		static ::RPG::Client::TextID* StaticGet_s_TextScoreRank()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.B51Racing", "MonoB51RacingReadyPage")->GetStaticField(0x138F0);
		}

		static ::RPG::Client::TextID* StaticGet_s_TextMatchIndex()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.B51Racing", "MonoB51RacingReadyPage")->GetStaticField(0x13900);
		}

		// static const ::System::Object TAB_INDEX_MAP; // 0x0
		// static const ::System::Object TAB_INDEX_RANK; // 0x0
		// static const ::System::Object LIST_ITEM_PREFAB_INDEX; // 0x0
		// static const ::System::String* STATE_MAP; // 0x0
		// static const ::System::String* STATE_RANK; // 0x0
		// static const ::System::Object FOV_43; // 0x0
		// static const ::System::Object RATIO_169; // 0x0
		// static const ::System::Object RATIO_229; // 0x0
		// static const ::System::Object RATIO_43; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_CCTOR_OFFSET))();
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONDESTROY_OFFSET))(this);
		}

		::System::Void OnExitClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONEXITCLICK_OFFSET))(this);
		}

		::System::Boolean _OnBackPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONBACKPRESSED_OFFSET))(this);
		}

		::System::Void OnStartRaceClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONSTARTRACECLICK_OFFSET))(this);
		}

		::System::Void _OnStartEnterMatchRaid(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONSTARTENTERMATCHRAID_OFFSET))(this, a1);
		}

		::System::Void OnGamepadSwitchAvatarClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONGAMEPADSWITCHAVATARCLICK_OFFSET))(this);
		}

		::System::Void OnGamepadSkillCheckClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONGAMEPADSKILLCHECKCLICK_OFFSET))(this);
		}

		::System::Void OnTabSelect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONTABSELECT_OFFSET))(this, a1);
		}

		::System::Void OnReturnToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE_ONRETURNTOTOP_OFFSET))(this);
		}

		::System::Void _ApplyStaticTextIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__APPLYSTATICTEXTIDS_OFFSET))(this);
		}

		::System::Void _ApplyTabState(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__APPLYTABSTATE_OFFSET))(this, a1);
		}

		::System::Void _RefreshMapArea(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHMAPAREA_OFFSET))(this, a1);
		}

		::System::Void _RefreshTargetList(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHTARGETLIST_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _OnGetTargetItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONGETTARGETITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshRankList(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHRANKLIST_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _OnGetRankItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONGETRANKITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshDriverPanel(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHDRIVERPANEL_OFFSET))(this, a1);
		}

		::System::Void _RefreshStartButton(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__REFRESHSTARTBUTTON_OFFSET))(this, a1);
		}

		::FKEIEEJIBPB* _GetService()
		{
			return ((::FKEIEEJIBPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETSERVICE_OFFSET))(this);
		}

		::System::Void _SetUpCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__SETUPCAMERA_OFFSET))(this);
		}

		::System::Void _AdaptCameraFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ADAPTCAMERAFOV_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONUISCREENSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void _SetUpReadyPageContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__SETUPREADYPAGECONTENT_OFFSET))(this);
		}

		::System::Void _TryInitDriverPanel(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__TRYINITDRIVERPANEL_OFFSET))(this, a1);
		}

		::System::Void _AcquireSceneToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ACQUIRESCENETOKEN_OFFSET))(this);
		}

		::System::Void _ReleaseTransientToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__RELEASETRANSIENTTOKEN_OFFSET))(this);
		}

		::MOHHKCFJKAH* _GetCameraService()
		{
			return ((::MOHHKCFJKAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETCAMERASERVICE_OFFSET))(this);
		}

		::GNOCLCNNAPD* _GetSceneService()
		{
			return ((::GNOCLCNNAPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETSCENESERVICE_OFFSET))(this);
		}

		::PJAPDCPOBGC* _GetCarService()
		{
			return ((::PJAPDCPOBGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__GETCARSERVICE_OFFSET))(this);
		}

		::System::Void _OnExitClick_b__53_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYPAGE__ONEXITCLICK_B__53_0_OFFSET))(this);
		}

	};
}
