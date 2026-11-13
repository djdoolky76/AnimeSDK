#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OfferingRewardUnlockState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class NMHHIBMCJHI;
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client { class OfferingUIData; }
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace RPG::GameCore { class OfferingTypeConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OFFERINGREWARDDATA_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x1AD9AAA0)
#define RPG_CLIENT_OFFERINGREWARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1AD9A410)
#define RPG_CLIENT_OFFERINGREWARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD99D50)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETALLREWARDROW_OFFSET UNITYSDK_OFFSET(0x1AD9B760)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLEVELLIMITBYPHASEID_OFFSET UNITYSDK_OFFSET(0x1AD9BE80)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9BAC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLONGTAILREWARDNEEDNUM_OFFSET UNITYSDK_OFFSET(0x1AD9C870)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMITPASTLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9C1A0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x1AD9C020)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9C950)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETTAKENREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD9A870)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETTOTALITEMCOST_OFFSET UNITYSDK_OFFSET(0x1AD9BC20)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x1AD9C440)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x1AD9C340)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUPGRADEUNLOCKHINTMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9BCC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1AD9B6B0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_CURRENTVERSIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9BE20)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ISAUTOOFFER_OFFSET UNITYSDK_OFFSET(0x1AD9CDA0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ISSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0x1AD9D630)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9D040)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILCANSUBMIT_OFFSET UNITYSDK_OFFSET(0x1AD9AF70)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILLIMIT_OFFSET UNITYSDK_OFFSET(0x1AD9D270)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9B540)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9B3F0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXSUBMITNUM_OFFSET UNITYSDK_OFFSET(0x1AD9D4D0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_NEEDNUM_OFFSET UNITYSDK_OFFSET(0x1AD9B4A0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0x1AD9D060)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1AD9D360)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1AD9AF00)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDITEMID_OFFSET UNITYSDK_OFFSET(0x1AD9D1C0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0x1AD9D320)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_TOTALSUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0x1AD9D340)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1AD9D000)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_UIDATA_OFFSET UNITYSDK_OFFSET(0x1AD9D650)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x1AD9D110)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET__NEXTLEVELCONFIGROW_OFFSET UNITYSDK_OFFSET(0x1AD9AE90)
#define RPG_CLIENT_OFFERINGREWARDDATA_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1AD9A8C0)
#define RPG_CLIENT_OFFERINGREWARDDATA_HASLONGTAILREWARD_OFFSET UNITYSDK_OFFSET(0x1AD9B2E0)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISALLLEVELREWARDGOT_OFFSET UNITYSDK_OFFSET(0x1AD9C8F0)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1AD9A810)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AD9ACC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_REFRESHAUTOOFFERSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9CCB0)
#define RPG_CLIENT_OFFERINGREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1AD9A740)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_ISSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0x1AD9D640)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9D050)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_SUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0x1AD9D330)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_TOTALSUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0x1AD9D350)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_UIDATA_OFFSET UNITYSDK_OFFSET(0x1AD9D660)
#define RPG_CLIENT_OFFERINGREWARDDATA_SHOULDSHOWMAPSHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0x1AD99470)
#define RPG_CLIENT_OFFERINGREWARDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1AD99DB0)
#define RPG_CLIENT_OFFERINGREWARDDATA_TAKEALLAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x1AD9AFD0)
#define RPG_CLIENT_OFFERINGREWARDDATA_TAKEREWARDBYLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9B5F0)
#define RPG_CLIENT_OFFERINGREWARDDATA__CANGETSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9C9F0)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETAUTOOFFERSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9CA60)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETCURRENTVERSIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9CE50)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETNEXTUNLOCKIDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9C240)
#define RPG_CLIENT_OFFERINGREWARDDATA__REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD9A530)
#define RPG_CLIENT_OFFERINGREWARDDATA__REFRESHTAKENREWARDLEVELSET_OFFSET UNITYSDK_OFFSET(0x1AD9A5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingRewardData_TypeDefinitionIndex = 68319;

	class OfferingRewardData : public ::System::Object
	{
	public:
		::RPG::GameCore::OfferingTypeConfigRow* _Row; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AlreadyTakenRewardLevelSet; // 0x18
		::Il2CppArray<::System::UInt32>* _UseSeenGotRewardLevelOfferingIDs; // 0x20
		::RPG::Client::OfferingUIData* _UIData_k__BackingField; // 0x28
		::System::UInt32 _ID; // 0x30
		::System::UInt32 _MaxSubmitNum; // 0x34
		::System::UInt32 _SubmittedNum_k__BackingField; // 0x38
		::System::UInt32 _Level_k__BackingField; // 0x3C
		::System::Boolean _IsUnlockIDOpened; // 0x40
		::System::Boolean _IsShowUpgradeHint_k__BackingField; // 0x41
		::System::Byte _padding0[0x2];
		::System::UInt32 _TotalSubmittedNum_k__BackingField; // 0x44
		::System::UInt32 _CurrentVersionMaxLevel; // 0x48
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::OfferingRewardData* Clone(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_CLONE_OFFSET))(a1);
		}

		::System::Void Sync(::NMHHIBMCJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHHIBMCJHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_REFRESH_OFFSET))(this);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Int32 GetTakenRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETTAKENREWARDCOUNT_OFFSET))(this);
		}

		::System::Boolean ShouldShowMapShortCutHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SHOULDSHOWMAPSHORTCUTHINT_OFFSET))(this);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_CANLEVELUP_OFFSET))(this);
		}

		::System::Boolean HasAnyRewardCanTake(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_HASANYREWARDCANTAKE_OFFSET))(this, a1);
		}

		::System::Boolean TakeAllAvailableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_TAKEALLAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Void TakeRewardByLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_TAKEREWARDBYLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::OfferingLevelConfigRow*>* GetAllRewardRow()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::OfferingLevelConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETALLREWARDROW_OFFSET))(this);
		}

		::System::UInt32 GetLimitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLIMITLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetTotalItemCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETTOTALITEMCOST_OFFSET))(this);
		}

		::System::UInt32 GetUpgradeUnlockHintMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETUPGRADEUNLOCKHINTMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetLevelLimitByPhaseID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLEVELLIMITBYPHASEID_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextLevelLimit(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextLevelLimitPastLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMITPASTLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::OfferingRewardUnlockState GetUnlockState()
		{
			return ((::RPG::Client::OfferingRewardUnlockState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKSTATE_OFFSET))(this);
		}

		::RPG::Client::TextID GetUnlockHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKHINT_OFFSET))(this);
		}

		::System::UInt32 GetLongTailRewardNeedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLONGTAILREWARDNEEDNUM_OFFSET))(this);
		}

		::System::Boolean HasLongTailReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_HASLONGTAILREWARD_OFFSET))(this);
		}

		::System::Boolean IsAllLevelRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISALLLEVELREWARDGOT_OFFSET))(this);
		}

		::System::UInt32 GetSeenGotRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::Void RefreshAutoOfferSeenGotRewardLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_REFRESHAUTOOFFERSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::Boolean _CanGetSeenGotRewardLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__CANGETSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::UInt32 _GetAutoOfferSeenGotRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETAUTOOFFERSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::Void _RefreshLevel(::NMHHIBMCJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHHIBMCJHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__REFRESHLEVEL_OFFSET))(this, a1);
		}

		::System::Void _RefreshTakenRewardLevelSet(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__REFRESHTAKENREWARDLEVELSET_OFFSET))(this, a1);
		}

		::System::UInt32 _GetNextUnlockIDLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETNEXTUNLOCKIDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCurrentVersionMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETCURRENTVERSIONMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_TYPEID_OFFSET))(this);
		}

		::RPG::GameCore::OfferingTypeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::OfferingTypeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_OfferingType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_OFFERINGTYPE_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::UInt32 get_SubmittedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDITEMID_OFFSET))(this);
		}

		::System::UInt32 get_LongTailLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_SubmittedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDNUM_OFFSET))(this);
		}

		::System::Void set_SubmittedNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_SUBMITTEDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalSubmittedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_TOTALSUBMITTEDNUM_OFFSET))(this);
		}

		::System::Void set_TotalSubmittedNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_TOTALSUBMITTEDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_LongTailRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILREWARDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Boolean get_IsAutoOffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ISAUTOOFFER_OFFSET))(this);
		}

		::System::UInt32 get_NeedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_NEEDNUM_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_MaxSubmitNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXSUBMITNUM_OFFSET))(this);
		}

		::System::UInt32 get_CurrentVersionMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_CURRENTVERSIONMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_LongTailCanSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILCANSUBMIT_OFFSET))(this);
		}

		::System::Boolean get_IsShowUpgradeHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ISSHOWUPGRADEHINT_OFFSET))(this);
		}

		::System::Void set_IsShowUpgradeHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_ISSHOWUPGRADEHINT_OFFSET))(this, a1);
		}

		::RPG::Client::OfferingUIData* get_UIData()
		{
			return ((::RPG::Client::OfferingUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_UIDATA_OFFSET))(this);
		}

		::System::Void set_UIData(::RPG::Client::OfferingUIData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingUIData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_UIDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::OfferingLevelConfigRow* get__NextLevelConfigRow()
		{
			return ((::RPG::GameCore::OfferingLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET__NEXTLEVELCONFIGROW_OFFSET))(this);
		}

	};
}
