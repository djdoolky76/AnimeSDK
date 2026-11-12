#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityFinalityBattle/Entrance/FinalityBattleEntranceViewModel__LevelRank.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class BIOAHMPNJCH;
class COPMGEHDGNP;
class CPKHHHPKFBN;
class DMHHMEOEDAI;
class EBGGEOGBOGN;
class HNJNCGPBEJB;
class IAKOBPGILAG;
class KBCKKEDGIKN;
class LNGHFLMPCFN;
class OBJANKHLNGO;
class OKIBHNGFOLI;
namespace RPG::Client::ActivityFinalityBattle::Entrance { class FinalityBattleEntranceBattleItemViewModel; }
namespace RPG::Client::ActivityFinalityBattle::Entrance { class FinalityBattleEntranceRewardPanelViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_ADD_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0xCD31720)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCD30950)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_BATTLES_OFFSET UNITYSDK_OFFSET(0xCD317E0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_INITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCD318E0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_ONWINDOWSHOW_OFFSET UNITYSDK_OFFSET(0xCD31700)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_REWARDPANEL_OFFSET UNITYSDK_OFFSET(0xCD31900)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_UIDISPOSE_OFFSET UNITYSDK_OFFSET(0xCD316E0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xCD30A60)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_REMOVE_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0xCD31780)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_SET_INITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCD318F0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_SET_ONWINDOWSHOW_OFFSET UNITYSDK_OFFSET(0xCD31710)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_SET_REWARDPANEL_OFFSET UNITYSDK_OFFSET(0xCD31910)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_SET_UIDISPOSE_OFFSET UNITYSDK_OFFSET(0xCD316F0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__CALCULATEINITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCD310F0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__GETRANKOFBATTLEITEM_OFFSET UNITYSDK_OFFSET(0xCD314F0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__ONACTIVITYCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCD31580)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__ONUIDISPOSE_OFFSET UNITYSDK_OFFSET(0xCD315F0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__ONWINDOWSHOW_OFFSET UNITYSDK_OFFSET(0xCD31650)

namespace RPG::Client::ActivityFinalityBattle::Entrance
{
	inline static constexpr unsigned int FinalityBattleEntranceViewModel_TypeDefinitionIndex = 84953;

	class FinalityBattleEntranceViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceBattleItemViewModel*>* _Battles; // 0x20
		::OKIBHNGFOLI* _ActivityService; // 0x28
		::Sofa::Core::SimpleCommand* _OnWindowShow_k__BackingField; // 0x30
		::LNGHFLMPCFN* _BadgeService; // 0x38
		::HNJNCGPBEJB* _LevelService; // 0x40
		::DMHHMEOEDAI* _RecordService; // 0x48
		::OBJANKHLNGO* _Messenger; // 0x50
		::COPMGEHDGNP* _LevelRepository; // 0x58
		::System::Action* OnActivityClose; // 0x60
		::Sofa::Core::SimpleCommand* _UIDispose_k__BackingField; // 0x68
		::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceRewardPanelViewModel* _RewardPanel_k__BackingField; // 0x70
		::EBGGEOGBOGN* _RecordRepository; // 0x78
		::BIOAHMPNJCH* _WindowService; // 0x80
		::IAKOBPGILAG* _RewardService; // 0x88
		::System::UInt32 _InitSelectIndex_k__BackingField; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 _CalculateInitSelectIndex(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::CPKHHHPKFBN*>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::CPKHHHPKFBN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__CALCULATEINITSELECTINDEX_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceViewModel__LevelRank _GetRankOfBattleItem(::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceBattleItemViewModel* a1)
		{
			return ((::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceViewModel__LevelRank(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceBattleItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__GETRANKOFBATTLEITEM_OFFSET))(this, a1);
		}

		::System::Void _OnActivityCloseMessage(::KBCKKEDGIKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBCKKEDGIKN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__ONACTIVITYCLOSEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnUIDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__ONUIDISPOSE_OFFSET))(this);
		}

		::System::Void _OnWindowShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL__ONWINDOWSHOW_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_UIDispose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_UIDISPOSE_OFFSET))(this);
		}

		::System::Void set_UIDispose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_SET_UIDISPOSE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnWindowShow()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_ONWINDOWSHOW_OFFSET))(this);
		}

		::System::Void set_OnWindowShow(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_SET_ONWINDOWSHOW_OFFSET))(this, a1);
		}

		::System::Void add_OnActivityClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_ADD_ONACTIVITYCLOSE_OFFSET))(this, a1);
		}

		::System::Void remove_OnActivityClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_REMOVE_ONACTIVITYCLOSE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceBattleItemViewModel*>* get_Battles()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceBattleItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_BATTLES_OFFSET))(this);
		}

		::System::UInt32 get_InitSelectIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_INITSELECTINDEX_OFFSET))(this);
		}

		::System::Void set_InitSelectIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_SET_INITSELECTINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceRewardPanelViewModel* get_RewardPanel()
		{
			return ((::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceRewardPanelViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_GET_REWARDPANEL_OFFSET))(this);
		}

		::System::Void set_RewardPanel(::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceRewardPanelViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Entrance::FinalityBattleEntranceRewardPanelViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_ENTRANCE_FINALITYBATTLEENTRANCEVIEWMODEL_SET_REWARDPANEL_OFFSET))(this, a1);
		}

	};
}
