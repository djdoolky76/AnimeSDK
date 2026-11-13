#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class JOEHFJMCKLA;
class KDOPLFDBBGD;
class MJCMGOEMKCC;
class NEIHDJONAKB;
class OBJANKHLNGO;
class PEKFHPMIPDD;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::ActivityRealityShow { class RealityShowChallengeStartViewModel; }
namespace RPG::Client::ActivityRealityShow { class RealityShowLineupViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_ADD_ONLINEUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCB6480)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_ADD_ONWINDOWCLOSE_OFFSET UNITYSDK_OFFSET(0x1DCB6540)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB6160)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DCB6870)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0x1DCB6680)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1DCB6600)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_CHALLENGESTART_OFFSET UNITYSDK_OFFSET(0x1DCB6840)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x1DCB6860)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_CURRENTAVATARS_OFFSET UNITYSDK_OFFSET(0x1DCB6820)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_LINEUP_OFFSET UNITYSDK_OFFSET(0x1DCB6830)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_OBTAINEDAVATARS_OFFSET UNITYSDK_OFFSET(0x1DCB67A0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_SETLINEUP_OFFSET UNITYSDK_OFFSET(0x1DCB6850)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_SLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCB6700)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1DCB6690)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_TRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x1DCB6750)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_REMOVE_ONLINEUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCB64E0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_REMOVE_ONWINDOWCLOSE_OFFSET UNITYSDK_OFFSET(0x1DCB65A0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL__ONCLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x1DCB69F0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL__ONLINEUPCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DCB6A60)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL__ONSETLINEUP_OFFSET UNITYSDK_OFFSET(0x1DCB68E0)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowTeamEditViewModel_TypeDefinitionIndex = 84929;

	class RealityShowTeamEditViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* _CurrentAvatars_k__BackingField; // 0x20
		::Sofa::Core::SimpleCommand* _CloseWindow_k__BackingField; // 0x28
		::OBJANKHLNGO* _Messenger; // 0x30
		::RPG::Client::ActivityRealityShow::RealityShowLineupViewModel* _Lineup_k__BackingField; // 0x38
		::RPG::Client::ActivityRealityShow::RealityShowChallengeStartViewModel* _ChallengeStart_k__BackingField; // 0x40
		::KDOPLFDBBGD* _ChallengeService; // 0x48
		::PEKFHPMIPDD* _SetLineup_k__BackingField; // 0x50
		::System::Action* OnLineupChanged; // 0x58
		::System::Action* OnWindowClose; // 0x60
		::MJCMGOEMKCC* _Challenge; // 0x68
		::JOEHFJMCKLA* _AvatarSet; // 0x70
		::System::Boolean _IsWindowClosed; // 0x78
		::System::Boolean _IsDisposed; // 0x79
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID _ActivityName_k__BackingField; // 0x80
		::System::Void _ctor(::MJCMGOEMKCC* a1, ::RPG::Client::ActivityRealityShow::RealityShowLineupViewModel* a2, ::RPG::Client::ActivityRealityShow::RealityShowChallengeStartViewModel* a3, ::RPG::Client::TextID a4, ::KDOPLFDBBGD* a5, ::OBJANKHLNGO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::MJCMGOEMKCC*, ::RPG::Client::ActivityRealityShow::RealityShowLineupViewModel*, ::RPG::Client::ActivityRealityShow::RealityShowChallengeStartViewModel*, ::RPG::Client::TextID, ::KDOPLFDBBGD*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void add_OnLineupChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_ADD_ONLINEUPCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnLineupChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_REMOVE_ONLINEUPCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnWindowClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_ADD_ONWINDOWCLOSE_OFFSET))(this, a1);
		}

		::System::Void remove_OnWindowClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_REMOVE_ONWINDOWCLOSE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_CHALLENGEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_ActivityName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_ACTIVITYNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::System::UInt32 get_SlotCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_SLOTCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* get_TrialAvatars()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_TRIALAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* get_ObtainedAvatars()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_OBTAINEDAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* get_CurrentAvatars()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_CURRENTAVATARS_OFFSET))(this);
		}

		::RPG::Client::ActivityRealityShow::RealityShowLineupViewModel* get_Lineup()
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowLineupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_LINEUP_OFFSET))(this);
		}

		::RPG::Client::ActivityRealityShow::RealityShowChallengeStartViewModel* get_ChallengeStart()
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowChallengeStartViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_CHALLENGESTART_OFFSET))(this);
		}

		::PEKFHPMIPDD* get_SetLineup()
		{
			return ((::PEKFHPMIPDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_SETLINEUP_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_CloseWindow()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_GET_CLOSEWINDOW_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnSetLineup(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL__ONSETLINEUP_OFFSET))(this, a1);
		}

		::System::Void _OnCloseWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL__ONCLOSEWINDOW_OFFSET))(this);
		}

		::System::Void _OnLineupChangedMessage(::NEIHDJONAKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEIHDJONAKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWTEAMEDITVIEWMODEL__ONLINEUPCHANGEDMESSAGE_OFFSET))(this, a1);
		}

	};
}
