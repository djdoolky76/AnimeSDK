#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFNJKAPPNOF.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BKALMLMEEPL;
class CJNDCNIJBEI;
class FPDCINMDJCE;
class OLLGFBLPHOH;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityLocalLegendFriendLineupRecommendation; }
namespace RPG::Client { class ActivityLocalLegendLevelData; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C7DB400)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7DA2D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7DA420)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET UNITYSDK_OFFSET(0x1C7DACB0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C7DA900)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET UNITYSDK_OFFSET(0x1C7DADA0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET UNITYSDK_OFFSET(0x1C7DAF90)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x1C7DB180)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1C7DA780)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET UNITYSDK_OFFSET(0x1C7DAB90)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1C7DA2B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x1C7DA190)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x1C7DA140)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1C7DA230)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7DA1E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x1C7DA0F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C7DA4E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x1C7DB3B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1C7DA2C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET UNITYSDK_OFFSET(0x1C7DB790)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET UNITYSDK_OFFSET(0x1C7DAAF0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET UNITYSDK_OFFSET(0x1C7DA870)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1C7DB490)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendFriendLineupRecommendation_TypeDefinitionIndex = 62956;

	class ActivityLocalLegendFriendLineupRecommendation : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* _FriendLineupDetailCache; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerBriefDisplayData*>* _FriendBriefDisplayDataDict; // 0x18
		::System::Collections::Generic::List_1<::FPDCINMDJCE*>* _RecommendInfos; // 0x20
		::RPG::Client::ActivityLocalLegendLevelData* _LevelData; // 0x28
		::System::Boolean _CanRefresh_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::Client::ActivityLocalLegendLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LineupRecommendationType get_RecommendType()
		{
			return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET))(this);
		}

		::JFNJKAPPNOF get_FriendRecommendType()
		{
			return ((::JFNJKAPPNOF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
		}

		::System::Int32 get_CountOfLineups()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET))(this);
		}

		::System::Int32 get_MaxTeamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET))(this);
		}

		::System::Void set_CanRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityLocalLegendFriendLineupRecommendation* Create(::RPG::Client::ActivityLocalLegendLevelData* a1)
		{
			return ((::RPG::Client::ActivityLocalLegendFriendLineupRecommendation*(*)(::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* GetLineupPlayerBriefDisplayData(::System::Int32 a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET))(this);
		}

		::System::Int32 GetCountOfStars(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarLevels(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarSkinIDs(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* GetLineupDetailInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET))(this, a1);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET))(this);
		}

		::System::Void _OnGetFriendRecommendLineupScRsp(::BKALMLMEEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKALMLMEEPL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* _GetFriendRecommendLineupDetailScRsp(::OLLGFBLPHOH* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::OLLGFBLPHOH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET))(this, a1);
		}

		::FPDCINMDJCE* _GetRecommendInfo(::System::Int32 a1)
		{
			return ((::FPDCINMDJCE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET))(this, a1);
		}

		::CJNDCNIJBEI* _GetLineupInfo(::System::Int32 a1)
		{
			return ((::CJNDCNIJBEI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET))(this, a1);
		}

	};
}
