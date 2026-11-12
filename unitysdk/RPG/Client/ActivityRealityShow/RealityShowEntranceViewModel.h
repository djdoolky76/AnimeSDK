#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityRealityShow/RealityShowEntranceViewModel__SelectPriority.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class KLIEPBLDOHF;
class MINAKLCBJMO;
class OBJANKHLNGO;
namespace RPG::Client::ActivityRealityShow { class RealityShowEntranceChallengeItemViewModel; }
namespace RPG::Client::ActivityRealityShow { class RealityShowEntranceRewardPanelViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_BADGEINFOREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEE9B60)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_CHALLENGEDETAILREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEE99E0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_FRIENDRANKREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEE9AA0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_LIMITTIMEREWARDREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEE9C20)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0xCEE9920)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_WINDOWSHOWN_OFFSET UNITYSDK_OFFSET(0xCEE9CE0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE8A60)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEE9E20)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0xCEE9DC0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_CHALLENGES_OFFSET UNITYSDK_OFFSET(0xCEE9DD0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_INITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCEE9E00)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_ISRANKUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCEE9DF0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_ONWINDOWSHOW_OFFSET UNITYSDK_OFFSET(0xCEE9DA0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_OPENFRIENDRANK_OFFSET UNITYSDK_OFFSET(0xCEE9DB0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_REWARDPANEL_OFFSET UNITYSDK_OFFSET(0xCEE9DE0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_BADGEINFOREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEE9BC0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_CHALLENGEDETAILREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEE9A40)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_FRIENDRANKREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEE9B00)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_LIMITTIMEREWARDREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEE9C80)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0xCEE9980)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_WINDOWSHOWN_OFFSET UNITYSDK_OFFSET(0xCEE9D40)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_SET_INITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCEE9E10)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__CALCULATEINITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xCEE92C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__GETPRIORITY_OFFSET UNITYSDK_OFFSET(0xCEEA520)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONACTIVITYCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCEEAA70)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONBADGEINFOREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEEA950)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONCHALLENGEDETAILREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEEA5A0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONLIMITTIMEREWARDREQUESTED_OFFSET UNITYSDK_OFFSET(0xCEEA9B0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONOPENFRIENDRANK_OFFSET UNITYSDK_OFFSET(0xCEEA610)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONWINDOWSHOW_OFFSET UNITYSDK_OFFSET(0xCEEAA10)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowEntranceViewModel_TypeDefinitionIndex = 84915;

	class RealityShowEntranceViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::OBJANKHLNGO* _Messenger; // 0x20
		::Sofa::Core::SimpleCommand* _OpenFriendRank_k__BackingField; // 0x28
		::System::Action_1<::System::UInt32>* ChallengeDetailRequested; // 0x30
		::RPG::Client::ActivityRealityShow::RealityShowEntranceRewardPanelViewModel* _RewardPanel_k__BackingField; // 0x38
		::System::Action* OnActivityClose; // 0x40
		::Sofa::Core::SimpleCommand* _OnWindowShow_k__BackingField; // 0x48
		::System::Action_1<::System::UInt32>* FriendRankRequested; // 0x50
		::System::Action* LimitTimeRewardRequested; // 0x58
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowEntranceChallengeItemViewModel*>* _Challenges_k__BackingField; // 0x60
		::System::Action* BadgeInfoRequested; // 0x68
		::System::Action* WindowShown; // 0x70
		::RPG::Client::TextID _ActivityName_k__BackingField; // 0x78
		::System::UInt32 _InitSelectIndex_k__BackingField; // 0x88
		::System::Boolean _IsDisposed; // 0x8C
		::System::Boolean _IsRankUnlocked_k__BackingField; // 0x8D
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowEntranceChallengeItemViewModel*>* a1, ::RPG::Client::ActivityRealityShow::RealityShowEntranceRewardPanelViewModel* a2, ::System::UInt32 a3, ::System::Boolean a4, ::MINAKLCBJMO* a5, ::OBJANKHLNGO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowEntranceChallengeItemViewModel*>*, ::RPG::Client::ActivityRealityShow::RealityShowEntranceRewardPanelViewModel*, ::System::UInt32, ::System::Boolean, ::MINAKLCBJMO*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void add_OnActivityClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_ONACTIVITYCLOSE_OFFSET))(this, a1);
		}

		::System::Void remove_OnActivityClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_ONACTIVITYCLOSE_OFFSET))(this, a1);
		}

		::System::Void add_ChallengeDetailRequested(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_CHALLENGEDETAILREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_ChallengeDetailRequested(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_CHALLENGEDETAILREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_FriendRankRequested(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_FRIENDRANKREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_FriendRankRequested(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_FRIENDRANKREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_BadgeInfoRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_BADGEINFOREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_BadgeInfoRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_BADGEINFOREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_LimitTimeRewardRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_LIMITTIMEREWARDREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_LimitTimeRewardRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_LIMITTIMEREWARDREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_WindowShown(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_WINDOWSHOWN_OFFSET))(this, a1);
		}

		::System::Void remove_WindowShown(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_WINDOWSHOWN_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnWindowShow()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_ONWINDOWSHOW_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_OpenFriendRank()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_OPENFRIENDRANK_OFFSET))(this);
		}

		::RPG::Client::TextID get_ActivityName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_ACTIVITYNAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowEntranceChallengeItemViewModel*>* get_Challenges()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowEntranceChallengeItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_CHALLENGES_OFFSET))(this);
		}

		::RPG::Client::ActivityRealityShow::RealityShowEntranceRewardPanelViewModel* get_RewardPanel()
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowEntranceRewardPanelViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_REWARDPANEL_OFFSET))(this);
		}

		::System::Boolean get_IsRankUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_ISRANKUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_InitSelectIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_INITSELECTINDEX_OFFSET))(this);
		}

		::System::Void set_InitSelectIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_SET_INITSELECTINDEX_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 _CalculateInitSelectIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__CALCULATEINITSELECTINDEX_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityRealityShow::RealityShowEntranceViewModel__SelectPriority _GetPriority(::RPG::Client::ActivityRealityShow::RealityShowEntranceChallengeItemViewModel* a1)
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowEntranceViewModel__SelectPriority(*)(::RPG::Client::ActivityRealityShow::RealityShowEntranceChallengeItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__GETPRIORITY_OFFSET))(a1);
		}

		::System::Void _OnChallengeDetailRequested(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONCHALLENGEDETAILREQUESTED_OFFSET))(this, a1);
		}

		::System::Void _OnOpenFriendRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONOPENFRIENDRANK_OFFSET))(this);
		}

		::System::Void _OnBadgeInfoRequested()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONBADGEINFOREQUESTED_OFFSET))(this);
		}

		::System::Void _OnLimitTimeRewardRequested()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONLIMITTIMEREWARDREQUESTED_OFFSET))(this);
		}

		::System::Void _OnWindowShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONWINDOWSHOW_OFFSET))(this);
		}

		::System::Void _OnActivityCloseMessage(::KLIEPBLDOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIEPBLDOHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONACTIVITYCLOSEMESSAGE_OFFSET))(this, a1);
		}

	};
}
