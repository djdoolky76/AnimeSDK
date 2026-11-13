#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelType.h"
#include "unitysdk/System/Object.h"
class BGAIEEIKOKK;
namespace RPG::Client { class ChenLingFesStageData; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFESSTAGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9E400)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_AWARDLISTID_OFFSET UNITYSDK_OFFSET(0x1CC9EB60)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_HASSERVERHISTORYDATA_OFFSET UNITYSDK_OFFSET(0x1CC9E7F0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1CC9D040)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISENDLESS_OFFSET UNITYSDK_OFFSET(0x1CC9EBA0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1CC9E850)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CC9E9A0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISPREVSTAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1CC9E890)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x1CC9D0D0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISSUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1CC9E8F0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ITEMRULEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1CC9EAE0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_LEVELDAYDURATIONLIST_OFFSET UNITYSDK_OFFSET(0x1CC9EB20)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1CC9EA60)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0x1CC9EA80)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_LEVELTYPE_OFFSET UNITYSDK_OFFSET(0x1CC9EAA0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_PREVSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1CC9E870)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_REQUIREDSCORELIST_OFFSET UNITYSDK_OFFSET(0x1CC9EAC0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0x1CC9E810)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x1CC9E830)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_TOTALSTARNUM_OFFSET UNITYSDK_OFFSET(0x1CC9EBF0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_UNLOCKSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1CC9EB80)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_VISITORRULEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1CC9EB00)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_VISITORTIMEINTERVALLIST_OFFSET UNITYSDK_OFFSET(0x1CC9EB40)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_MARKSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x1CC9D1E0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SETPREVSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1CC9E490)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_AWARDLISTID_OFFSET UNITYSDK_OFFSET(0x1CC9EB70)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_HASSERVERHISTORYDATA_OFFSET UNITYSDK_OFFSET(0x1CC9E800)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1CC9E860)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_ITEMRULEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1CC9EAF0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_LEVELDAYDURATIONLIST_OFFSET UNITYSDK_OFFSET(0x1CC9EB30)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1CC9EA70)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0x1CC9EA90)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_LEVELTYPE_OFFSET UNITYSDK_OFFSET(0x1CC9EAB0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_PREVSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1CC9E880)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_REQUIREDSCORELIST_OFFSET UNITYSDK_OFFSET(0x1CC9EAD0)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_STARNUM_OFFSET UNITYSDK_OFFSET(0x1CC9E820)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x1CC9E840)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_TOTALSTARNUM_OFFSET UNITYSDK_OFFSET(0x1CC9EC00)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_UNLOCKSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1CC9EB90)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_VISITORRULEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1CC9EB10)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_VISITORTIMEINTERVALLIST_OFFSET UNITYSDK_OFFSET(0x1CC9EB50)
#define RPG_CLIENT_CHENLINGFESSTAGEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1CC9B7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingFesStageData_TypeDefinitionIndex = 62850;

	class ChenLingFesStageData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _RequiredScoreList_k__BackingField; // 0x10
		::RPG::Client::ChenLingFesStageData* _PrevStageData_k__BackingField; // 0x18
		::System::String* _LevelName_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _VisitorTimeIntervalList_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _ItemRuleGroupIDList_k__BackingField; // 0x30
		::Il2CppArray<::System::UInt32>* _AwardListID_k__BackingField; // 0x38
		::Il2CppArray<::System::UInt32>* _VisitorRuleGroupIDList_k__BackingField; // 0x40
		::Il2CppArray<::System::UInt32>* _LevelDayDurationList_k__BackingField; // 0x48
		::System::UInt32 _UnlockSubMission_k__BackingField; // 0x50
		::System::UInt32 _StarNum_k__BackingField; // 0x54
		::System::UInt32 _LevelID_k__BackingField; // 0x58
		::RPG::GameCore::LevelType _LevelType_k__BackingField; // 0x5C
		::System::UInt32 _TotalScore_k__BackingField; // 0x60
		::System::Int32 _TotalStarNum_k__BackingField; // 0x64
		::System::Boolean _HasSeenUnlock; // 0x68
		::System::Boolean _HasServerHistoryData_k__BackingField; // 0x69
		::System::Boolean _IsFinished_k__BackingField; // 0x6A
		// static const ::System::Object _EndlessLevelID; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::BGAIEEIKOKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGAIEEIKOKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SetPrevStageData(::RPG::Client::ChenLingFesStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SETPREVSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Void MarkSeenUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_MARKSEENUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_HasServerHistoryData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_HASSERVERHISTORYDATA_OFFSET))(this);
		}

		::System::Void set_HasServerHistoryData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_HASSERVERHISTORYDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_STARNUM_OFFSET))(this);
		}

		::System::Void set_StarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_STARNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFesStageData* get_PrevStageData()
		{
			return ((::RPG::Client::ChenLingFesStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_PREVSTAGEDATA_OFFSET))(this);
		}

		::System::Void set_PrevStageData(::RPG::Client::ChenLingFesStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_PREVSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPrevStageFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISPREVSTAGEFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsSeenUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISSEENUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsSubMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISSUBMISSIONFINISH_OFFSET))(this);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_LEVELID_OFFSET))(this, a1);
		}

		::System::String* get_LevelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_LEVELNAME_OFFSET))(this);
		}

		::System::Void set_LevelName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_LEVELNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelType get_LevelType()
		{
			return ((::RPG::GameCore::LevelType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_LEVELTYPE_OFFSET))(this);
		}

		::System::Void set_LevelType(::RPG::GameCore::LevelType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_LEVELTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_RequiredScoreList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_REQUIREDSCORELIST_OFFSET))(this);
		}

		::System::Void set_RequiredScoreList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_REQUIREDSCORELIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ItemRuleGroupIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ITEMRULEGROUPIDLIST_OFFSET))(this);
		}

		::System::Void set_ItemRuleGroupIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_ITEMRULEGROUPIDLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_VisitorRuleGroupIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_VISITORRULEGROUPIDLIST_OFFSET))(this);
		}

		::System::Void set_VisitorRuleGroupIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_VISITORRULEGROUPIDLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_LevelDayDurationList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_LEVELDAYDURATIONLIST_OFFSET))(this);
		}

		::System::Void set_LevelDayDurationList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_LEVELDAYDURATIONLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_VisitorTimeIntervalList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_VISITORTIMEINTERVALLIST_OFFSET))(this);
		}

		::System::Void set_VisitorTimeIntervalList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_VISITORTIMEINTERVALLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AwardListID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_AWARDLISTID_OFFSET))(this);
		}

		::System::Void set_AwardListID(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_AWARDLISTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockSubMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_UNLOCKSUBMISSION_OFFSET))(this);
		}

		::System::Void set_UnlockSubMission(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_UNLOCKSUBMISSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEndless()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_ISENDLESS_OFFSET))(this);
		}

		::System::Int32 get_TotalStarNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_GET_TOTALSTARNUM_OFFSET))(this);
		}

		::System::Void set_TotalStarNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESSTAGEDATA_SET_TOTALSTARNUM_OFFSET))(this, a1);
		}

	};
}
