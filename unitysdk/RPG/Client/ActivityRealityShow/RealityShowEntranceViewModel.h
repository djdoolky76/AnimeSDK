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

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_BADGEINFOREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAC780)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_CHALLENGEDETAILREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAC600)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_FRIENDRANKREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAC6C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_LIMITTIMEREWARDREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAC840)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0x1DCAC540)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_ADD_WINDOWSHOWN_OFFSET UNITYSDK_OFFSET(0x1DCAC900)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAB680)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DCACA40)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0x1DCAC9E0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_CHALLENGES_OFFSET UNITYSDK_OFFSET(0x1DCAC9F0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_INITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1DCACA20)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_ISRANKUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1DCACA10)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_ONWINDOWSHOW_OFFSET UNITYSDK_OFFSET(0x1DCAC9C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_OPENFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x1DCAC9D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_GET_REWARDPANEL_OFFSET UNITYSDK_OFFSET(0x1DCACA00)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_BADGEINFOREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAC7E0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_CHALLENGEDETAILREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAC660)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_FRIENDRANKREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAC720)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_LIMITTIMEREWARDREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAC8A0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_ONACTIVITYCLOSE_OFFSET UNITYSDK_OFFSET(0x1DCAC5A0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_REMOVE_WINDOWSHOWN_OFFSET UNITYSDK_OFFSET(0x1DCAC960)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL_SET_INITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1DCACA30)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__CALCULATEINITSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1DCABEE0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1DCAD140)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONACTIVITYCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DCAD690)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONBADGEINFOREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAD570)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONCHALLENGEDETAILREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAD1C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONLIMITTIMEREWARDREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DCAD5D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONOPENFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x1DCAD230)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWENTRANCEVIEWMODEL__ONWINDOWSHOW_OFFSET UNITYSDK_OFFSET(0x1DCAD630)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowEntranceViewModel_TypeDefinitionIndex = 84914;

	class RealityShowEntranceViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Action* LimitTimeRewardRequested; // 0x20
		::System::Action* BadgeInfoRequested; // 0x28
		::System::Action_1<::System::UInt32>* FriendRankRequested; // 0x30
		::System::Action* OnActivityClose; // 0x38
		::System::Action* WindowShown; // 0x40
		::System::Action_1<::System::UInt32>* ChallengeDetailRequested; // 0x48
		::Sofa::Core::SimpleCommand* _OnWindowShow_k__BackingField; // 0x50
		::Sofa::Core::SimpleCommand* _OpenFriendRank_k__BackingField; // 0x58
		::RPG::Client::ActivityRealityShow::RealityShowEntranceRewardPanelViewModel* _RewardPanel_k__BackingField; // 0x60
		::OBJANKHLNGO* _Messenger; // 0x68
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowEntranceChallengeItemViewModel*>* _Challenges_k__BackingField; // 0x70
		::System::UInt32 _InitSelectIndex_k__BackingField; // 0x78
		::System::Boolean _IsDisposed; // 0x7C
		::System::Boolean _IsRankUnlocked_k__BackingField; // 0x7D
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID _ActivityName_k__BackingField; // 0x80
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
