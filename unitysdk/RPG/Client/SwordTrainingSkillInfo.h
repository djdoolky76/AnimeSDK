#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingSameRankSkill.h"
#include "unitysdk/System/Object.h"
class BCPMPHNADMN;
class KLBOFEDGNLL;
namespace RPG::Client { class SwordTrainingSkillData; }
namespace RPG::Client { class SwordTrainingSkillTypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSKILLINFO_CREATESKILLTREESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1C58E460)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C58FBC0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C58DB80)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_FETCHSAMERANKSKILLLIST_OFFSET UNITYSDK_OFFSET(0x1C58F220)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETCOLLECTSKILLID_OFFSET UNITYSDK_OFFSET(0x1C58FA30)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETLEARNEDSKILLLIST_OFFSET UNITYSDK_OFFSET(0x1C58AF60)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1C58C550)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLPROPERTYMODIFER_OFFSET UNITYSDK_OFFSET(0x1C58E260)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1C58DC50)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETUNLOCKSKILLTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1C58DD50)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_HASSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0x1C58EB60)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C58D130)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_ISNEWSKILLMETCONDITION_OFFSET UNITYSDK_OFFSET(0x1C58ECB0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_ISRANKHASSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0x1C58E990)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_ISSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0x1C58E6C0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_SETCOLLECTSKILLID_OFFSET UNITYSDK_OFFSET(0x1C58E100)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCLEARNSKILL_OFFSET UNITYSDK_OFFSET(0x1C58E150)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1C58DEB0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x1C58D1A0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATAPRESKILL_OFFSET UNITYSDK_OFFSET(0x1C58D690)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLTYPEDATALIST_OFFSET UNITYSDK_OFFSET(0x1C58D3F0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__ONINITFINISH_OFFSET UNITYSDK_OFFSET(0x1C58D640)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillInfo_TypeDefinitionIndex = 63384;

	class SwordTrainingSkillInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillTypeData*>* SkillTypeDataList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* _LearnedSkillDataList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* SkillDataList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSameRankSkill>* _SameRankSkillList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* _ConditionFinishSkillDataList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* _PrevConditionMetSkillDataList; // 0x38
		::System::UInt32 _CollectSkillID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_INIT_OFFSET))(this);
		}

		::System::Void _OnInitFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__ONINITFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingSkillData* GetSkillData(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingSkillData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingSkillTypeData* GetSkillTypeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingSkillTypeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLTYPEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillTypeData*>* GetUnlockSkillTypeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillTypeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETUNLOCKSKILLTYPEDATA_OFFSET))(this);
		}

		::System::Void SyncSkillData(::BCPMPHNADMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCPMPHNADMN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCSKILLDATA_OFFSET))(this, a1);
		}

		::System::Void SyncLearnSkill(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCLEARNSKILL_OFFSET))(this, a1);
		}

		::KLBOFEDGNLL* GetSkillPropertyModifer()
		{
			return ((::KLBOFEDGNLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLPROPERTYMODIFER_OFFSET))(this);
		}

		::System::Void CreateSkillTreeSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_CREATESKILLTREESEQUENCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* GetLearnedSkillList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETLEARNEDSKILLLIST_OFFSET))(this);
		}

		::System::Boolean IsSkillCanLearn(::RPG::Client::SwordTrainingSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_ISSKILLCANLEARN_OFFSET))(this, a1);
		}

		::System::Boolean IsRankHasSkillCanLearn(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_ISRANKHASSKILLCANLEARN_OFFSET))(this, a1);
		}

		::System::Boolean HasSkillCanLearn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_HASSKILLCANLEARN_OFFSET))(this);
		}

		::System::Boolean IsNewSkillMetCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_ISNEWSKILLMETCONDITION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSameRankSkill>* FetchSameRankSkillList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSameRankSkill>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_FETCHSAMERANKSKILLLIST_OFFSET))(this);
		}

		::System::UInt32 GetCollectSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETCOLLECTSKILLID_OFFSET))(this);
		}

		::System::Void SetCollectSkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_SETCOLLECTSKILLID_OFFSET))(this, a1);
		}

		::System::Void _InitSkillDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATALIST_OFFSET))(this);
		}

		::System::Void _InitSkillTypeDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLTYPEDATALIST_OFFSET))(this);
		}

		::System::Void _InitSkillDataPreSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATAPRESKILL_OFFSET))(this);
		}

	};
}
