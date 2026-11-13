#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGOJLBNJKCN.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class FightFestMainRace; }
namespace RPG::Client { class FightFestScoreRace; }
namespace RPG::Client { class FightFestStageInfoData; }
namespace RPG::GameCore { class FightFestChallengeRow; }
namespace RPG::GameCore { class FightFestMainRaceRow; }
namespace RPG::GameCore { class FightFestScoreRaceRow; }

#define RPG_CLIENT_FIGHTFESTRACEDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3092D0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B308B00)
#define RPG_CLIENT_FIGHTFESTRACEDATA_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B2F7B60)
#define RPG_CLIENT_FIGHTFESTRACEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F9920)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_CHALLENGENAME_OFFSET UNITYSDK_OFFSET(0x1B308C20)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFDES_OFFSET UNITYSDK_OFFSET(0x1B308EA0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFNAME_OFFSET UNITYSDK_OFFSET(0x1B308D60)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1B2FDB00)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_PREVIEWMONSTERLIST_OFFSET UNITYSDK_OFFSET(0x1B308FE0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACEID_OFFSET UNITYSDK_OFFSET(0x1B308BE0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACETYPE_OFFSET UNITYSDK_OFFSET(0x1B308B80)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RECOMMENDNATURE_OFFSET UNITYSDK_OFFSET(0x1B3090C0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDMAINRACE_OFFSET UNITYSDK_OFFSET(0x1B308BA0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDSCORERACE_OFFSET UNITYSDK_OFFSET(0x1B308BC0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_SPECIALAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1B3091A0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_STAGEINFODATA_OFFSET UNITYSDK_OFFSET(0x1B308C00)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_UIENTERBATTLEAREAID_OFFSET UNITYSDK_OFFSET(0x1B2FD480)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDMAINRACE_OFFSET UNITYSDK_OFFSET(0x1B2F9990)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDSCORERACE_OFFSET UNITYSDK_OFFSET(0x1B308B30)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACEID_OFFSET UNITYSDK_OFFSET(0x1B308BF0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACETYPE_OFFSET UNITYSDK_OFFSET(0x1B308B90)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDMAINRACE_OFFSET UNITYSDK_OFFSET(0x1B308BB0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDSCORERACE_OFFSET UNITYSDK_OFFSET(0x1B308BD0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_STAGEINFODATA_OFFSET UNITYSDK_OFFSET(0x1B308C10)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestRaceData_TypeDefinitionIndex = 65625;

	class FightFestRaceData : public ::System::Object
	{
	public:
		::RPG::Client::FightFestStageInfoData* _StageInfoData_k__BackingField; // 0x10
		::RPG::Client::FightFestScoreRace* _RelatedScoreRace_k__BackingField; // 0x18
		::RPG::Client::FightFestMainRace* _RelatedMainRace_k__BackingField; // 0x20
		::OGOJLBNJKCN _RaceType_k__BackingField; // 0x28
		::System::UInt32 _RaceID_k__BackingField; // 0x2C
		static ::System::UInt32* StaticGet__TEACH_RACE_ID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "FightFestRaceData")->GetStaticField(0x14410);
		}

		::System::Void _ctor(::RPG::GameCore::FightFestMainRaceRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestMainRaceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::FightFestScoreRaceRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestScoreRaceRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::RPG::GameCore::FightFestChallengeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestChallengeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_CCTOR_OFFSET))();
		}

		::System::Void SetRelatedMainRace(::RPG::Client::FightFestMainRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestMainRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDMAINRACE_OFFSET))(this, a1);
		}

		::System::Void SetRelatedScoreRace(::RPG::Client::FightFestScoreRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDSCORERACE_OFFSET))(this, a1);
		}

		::OGOJLBNJKCN get_RaceType()
		{
			return ((::OGOJLBNJKCN(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACETYPE_OFFSET))(this);
		}

		::System::Void set_RaceType(::OGOJLBNJKCN a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGOJLBNJKCN))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestMainRace* get_RelatedMainRace()
		{
			return ((::RPG::Client::FightFestMainRace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDMAINRACE_OFFSET))(this);
		}

		::System::Void set_RelatedMainRace(::RPG::Client::FightFestMainRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestMainRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDMAINRACE_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestScoreRace* get_RelatedScoreRace()
		{
			return ((::RPG::Client::FightFestScoreRace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDSCORERACE_OFFSET))(this);
		}

		::System::Void set_RelatedScoreRace(::RPG::Client::FightFestScoreRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDSCORERACE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACEID_OFFSET))(this);
		}

		::System::Void set_RaceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACEID_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestStageInfoData* get_StageInfoData()
		{
			return ((::RPG::Client::FightFestStageInfoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_STAGEINFODATA_OFFSET))(this);
		}

		::System::Void set_StageInfoData(::RPG::Client::FightFestStageInfoData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestStageInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_STAGEINFODATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_EVENTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_CHALLENGENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnvironmentBuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnvironmentBuffDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFDES_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PreviewMonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_PREVIEWMONSTERLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendNature()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RECOMMENDNATURE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SpecialAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_SPECIALAVATARLIST_OFFSET))(this);
		}

		::System::UInt32 get_UIEnterBattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_UIENTERBATTLEAREAID_OFFSET))(this);
		}

	};
}
