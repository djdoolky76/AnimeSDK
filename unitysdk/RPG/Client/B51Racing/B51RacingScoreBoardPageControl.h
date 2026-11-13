#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class MonoRankingAnim; }
namespace RPG::Client::B51Racing { class B51RacingScoreBoardPageViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA70EE0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1CA6FC40)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x1CA6FAE0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0x1CA6F7D0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__HANDLEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1CA709C0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ISRANKCHANGED_OFFSET UNITYSDK_OFFSET(0x1CA70DA0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CA6F8C0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONGETRANKITEM_OFFSET UNITYSDK_OFFSET(0x1CA701A0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CA6F5A0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x1CA6FB80)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__PLAYRANKCHANGEANIM_OFFSET UNITYSDK_OFFSET(0x1CA70CA0)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__PREPARERANKCHANGE_OFFSET UNITYSDK_OFFSET(0x1CA6FF60)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__REFRESHBTNRESTARTTEXT_OFFSET UNITYSDK_OFFSET(0x1CA6FD20)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__REFRESHRANKLIST_OFFSET UNITYSDK_OFFSET(0x1CA70110)
#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__TRYPLAYCYCLEWINANIM_OFFSET UNITYSDK_OFFSET(0x1CA70E10)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingScoreBoardPageControl_TypeDefinitionIndex = 84749;

	class B51RacingScoreBoardPageControl : public ::Sofa::BaseSofaControl
	{
	public:
		::SuperScrollView::LoopListView2* _RankListView; // 0x40
		::RPG::Client::MonoRankingAnim* _RankingAnim; // 0x48
		::RPG::Client::LocalizedText* _NameText; // 0x50
		::UnityEngine::Animation* _CycleEndWinAnimation; // 0x58
		::RPG::Client::MonoAnimationTrigger* _FadeInAnimTrigger; // 0x60
		::RPG::Client::LocalizedText* _BtnRestartText; // 0x68
		// static const ::System::Object RANK_ITEM_PREFAB_INDEX; // 0x0
		// static const ::System::String* ANIM_FADE_IN_WIN; // 0x0
		// static const ::System::String* ANIM_EVENT_PLAY_RANK_CHANGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _RefreshRankList(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__REFRESHRANKLIST_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* _OnGetRankItem(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ONGETRANKITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshBtnRestartText(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__REFRESHBTNRESTARTTEXT_OFFSET))(this, a1);
		}

		::System::Void _HandleAnimationEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__HANDLEANIMATIONEVENT_OFFSET))(this, a1);
		}

		::System::Void _PrepareRankChange(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__PREPARERANKCHANGE_OFFSET))(this, a1);
		}

		::System::Void _PlayRankChangeAnim(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__PLAYRANKCHANGEANIM_OFFSET))(this, a1);
		}

		::System::Void _TryPlayCycleWinAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__TRYPLAYCYCLEWINANIM_OFFSET))(this);
		}

		static ::System::Boolean _IsRankChanged(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGECONTROL__ISRANKCHANGED_OFFSET))(a1);
		}

	};
}
