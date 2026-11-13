#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
class GHNMFCHEGGK;
namespace RPG::Client { class AetherDivideChallengeData; }
namespace RPG::Client { class AetherDivideGymData; }
namespace RPG::Client { class AetherDivideTeamData; }
namespace RPG::Client { class AetherDivideTrainerData; }
namespace RPG::Client { class AetherOutfitData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class AetherDivideOverflowChunkRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDEMODULE_CHECKTRAINERLEVELANDSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B2C8DC0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CEBB0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2CF540)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETCHALLENGELISTUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x1B2D0150)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETCURAETHERDIVIDEMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1B2CFDB0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETDISPLAYMONSTERDATASBYSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B2C9ED0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETDISPLAYMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1B2CFC10)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETMAINAETHERSPIRITTYPEDICTBYNPCMONSTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1B2CF890)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETMONSTERAVERAGELEVELBYSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B2CFCE0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GETOVERFLOWCHUNKROW_OFFSET UNITYSDK_OFFSET(0x1B2CFC70)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_AETHERDIVIDETEAMDATA_OFFSET UNITYSDK_OFFSET(0x1B2D0A60)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_AETHEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x1B2D0A40)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1B2D0A20)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_COMMONSPIRITEXPITEMID_OFFSET UNITYSDK_OFFSET(0x1B2D0A80)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_GYMDATA_OFFSET UNITYSDK_OFFSET(0x1B2D0A00)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_ISALLMISSIONCLEAR_OFFSET UNITYSDK_OFFSET(0x1B2CB190)
#define RPG_CLIENT_AETHERDIVIDEMODULE_GET_TRAINERDATA_OFFSET UNITYSDK_OFFSET(0x1B2D09E0)
#define RPG_CLIENT_AETHERDIVIDEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B2CF180)
#define RPG_CLIENT_AETHERDIVIDEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B2CF840)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_AETHERDIVIDETEAMDATA_OFFSET UNITYSDK_OFFSET(0x1B2D0A70)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_AETHEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x1B2D0A50)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1B2D0A30)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_COMMONSPIRITEXPITEMID_OFFSET UNITYSDK_OFFSET(0x1B2D0A90)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_GYMDATA_OFFSET UNITYSDK_OFFSET(0x1B2D0A10)
#define RPG_CLIENT_AETHERDIVIDEMODULE_SET_TRAINERDATA_OFFSET UNITYSDK_OFFSET(0x1B2D09F0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B2D0320)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B2D0AA0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEFINISHCHALLENGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2D1FA0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDELINEUPSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2D3280)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEREFRESHENDLESSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2D2190)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEREFRESHENDLESSSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D2100)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDETAKECHALLENGEREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D2220)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESKILLITEMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2D2EF0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESPIRITEXPUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D2950)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESPIRITINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2D23B0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDETAINERINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2D1C40)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDEQUIPSKILLCORESCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D2BB0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDGETAETHERDIVIDEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D1440)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDLEAVEAETHERDIVIDESCENESCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D1D50)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDTAKEOFFSKILLCORESCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D2DC0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONGETAETHERDIVIDECHALLENGEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D1DE0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONMAINMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B2D06C0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONMAPCREATED_OFFSET UNITYSDK_OFFSET(0x1B2D0580)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONMISSIONSYNC_OFFSET UNITYSDK_OFFSET(0x1B2D0720)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0x1B2D0990)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONSETAETHERDIVIDELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D3000)
#define RPG_CLIENT_AETHERDIVIDEMODULE__ONSWITCHAETHERDIVIDELINEUPSLOTSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2D3160)
#define RPG_CLIENT_AETHERDIVIDEMODULE__REFRESHGYMDATA_OFFSET UNITYSDK_OFFSET(0x1B2D07B0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__SYNCINVENTORY_OFFSET UNITYSDK_OFFSET(0x1B2D15E0)
#define RPG_CLIENT_AETHERDIVIDEMODULE__TRYGETNEXTAETHERDIVIDEMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1B2CFE10)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideModule_TypeDefinitionIndex = 63631;

	class AetherDivideModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::AetherOutfitData* _AetherOutfitData_k__BackingField; // 0x10
		::RPG::Client::AetherDivideTeamData* _AetherDivideTeamData_k__BackingField; // 0x18
		::RPG::Client::MainMissionData* _CurAetherDivideMainMissionData; // 0x20
		::RPG::Client::AetherDivideTrainerData* _TrainerData_k__BackingField; // 0x28
		::RPG::Client::AetherDivideChallengeData* _ChallengeData_k__BackingField; // 0x30
		::RPG::Client::AetherDivideGymData* _GymData_k__BackingField; // 0x38
		::System::UInt32 _AetherDivideMainMissionChapterID; // 0x40
		::System::UInt32 _MISSION_CLEAR_UNLOCK_ID; // 0x44
		::System::Boolean _IsAllMissionClear; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 _CommonSpiritExpItemID_k__BackingField; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_CTOR_OFFSET))(this);
		}

		::System::Boolean CheckTrainerLevelAndSchedule(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_CHECKTRAINERLEVELANDSCHEDULE_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::UInt32>* GetMainAetherSpiritTypeDictByNpcMonsterRuntimeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETMAINAETHERSPIRITTYPEDICTBYNPCMONSTERRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetDisplayMonsterDatasByStageID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETDISPLAYMONSTERDATASBYSTAGEID_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AetherDivideOverflowChunkRow* GetOverflowChunkRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideOverflowChunkRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETOVERFLOWCHUNKROW_OFFSET))(this, a1);
		}

		::System::UInt32 GetDisplayMonsterLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETDISPLAYMONSTERLEVEL_OFFSET))(this, a1);
		}

		::System::Single GetMonsterAverageLevelByStageID(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETMONSTERAVERAGELEVELBYSTAGEID_OFFSET))(this, a1);
		}

		::RPG::Client::MainMissionData* GetCurAetherDivideMainMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETCURAETHERDIVIDEMAINMISSIONDATA_OFFSET))(this);
		}

		::System::String* GetChallengeListUnlockHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GETCHALLENGELISTUNLOCKHINT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMapCreated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONMAPCREATED_OFFSET))(this, a1);
		}

		::System::Void _OnMainMissionDataReady(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONMAINMISSIONDATAREADY_OFFSET))(this, a1);
		}

		::System::Void _OnMissionSync(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONMISSIONSYNC_OFFSET))(this, a1);
		}

		::System::Void _OnQuestUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONQUESTUPDATED_OFFSET))(this, a1);
		}

		::System::Void _RefreshGymData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__REFRESHGYMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MainMissionData* _TryGetNextAetherDivideMainMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__TRYGETNEXTAETHERDIVIDEMAINMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::AetherDivideTrainerData* get_TrainerData()
		{
			return ((::RPG::Client::AetherDivideTrainerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_TRAINERDATA_OFFSET))(this);
		}

		::System::Void set_TrainerData(::RPG::Client::AetherDivideTrainerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideTrainerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_TRAINERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideGymData* get_GymData()
		{
			return ((::RPG::Client::AetherDivideGymData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_GYMDATA_OFFSET))(this);
		}

		::System::Void set_GymData(::RPG::Client::AetherDivideGymData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideGymData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_GYMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideChallengeData* get_ChallengeData()
		{
			return ((::RPG::Client::AetherDivideChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Void set_ChallengeData(::RPG::Client::AetherDivideChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_CHALLENGEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::AetherOutfitData* get_AetherOutfitData()
		{
			return ((::RPG::Client::AetherOutfitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_AETHEROUTFITDATA_OFFSET))(this);
		}

		::System::Void set_AetherOutfitData(::RPG::Client::AetherOutfitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherOutfitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_AETHEROUTFITDATA_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideTeamData* get_AetherDivideTeamData()
		{
			return ((::RPG::Client::AetherDivideTeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_AETHERDIVIDETEAMDATA_OFFSET))(this);
		}

		::System::Void set_AetherDivideTeamData(::RPG::Client::AetherDivideTeamData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_AETHERDIVIDETEAMDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_CommonSpiritExpItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_COMMONSPIRITEXPITEMID_OFFSET))(this);
		}

		::System::Void set_CommonSpiritExpItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_SET_COMMONSPIRITEXPITEMID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllMissionClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE_GET_ISALLMISSIONCLEAR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetAetherDivideInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDGETAETHERDIVIDEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdAetherDivideTainerInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDETAINERINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLeaveAetherDivideSceneScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDLEAVEAETHERDIVIDESCENESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetAetherDivideChallengeInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONGETAETHERDIVIDECHALLENGEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAetherDivideFinishChallengeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEFINISHCHALLENGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAetherDivideRefreshEndlessScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEREFRESHENDLESSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAetherDivideRefreshEndlessScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDEREFRESHENDLESSSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAetherDivideTakeChallengeRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDETAKECHALLENGEREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdAetherDivideSpiritInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESPIRITINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdAetherDivideSpiritExpUpScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESPIRITEXPUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEquipSkillCoreScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDEQUIPSKILLCORESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeOffSkillCoreScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDTAKEOFFSKILLCORESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdAetherDivideSkillItemScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONCMDAETHERDIVIDESKILLITEMSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncInventory(::GHNMFCHEGGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHNMFCHEGGK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__SYNCINVENTORY_OFFSET))(this, a1);
		}

		::System::Void _OnSetAetherDivideLineUpScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONSETAETHERDIVIDELINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSwitchAetherDivideLineUpSlotScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONSWITCHAETHERDIVIDELINEUPSLOTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAetherDivideLineupScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEMODULE__ONAETHERDIVIDELINEUPSCNOTIFY_OFFSET))(this, a1, a2);
		}

	};
}
