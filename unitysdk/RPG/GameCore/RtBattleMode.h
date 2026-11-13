#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADGFFEDNPPO.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/RtBattlePhase.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/EDFNHOHENHI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
class ANDEHGAKOHE;
class ANGGDDJJBKO;
class CBCPEACIJIE;
class DEEJKBIMHAA;
class EDCEPLBIKIN;
class ENDPGDJBBDJ;
class FDNCLPGAKOA;
class GJEMBJDCAPG;
class HBIMGDOPJMI;
class IFOLICKHDHC;
class INHCJHBALFC;
class JEFCCHAPOLA;
class JHFCIOJIONP;
class KPMFMFCBPIG;
class LEHBJLFHDAD;
class MJNGFEGNCOA;
class NMNGHKMHDOK;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtBattleStageConfig; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { template <typename T1, typename T2> class BaseFrameSynchor_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_RTBATTLEMODE_BUILDCHARACTERROWDATA_OFFSET UNITYSDK_OFFSET(0x19291E90)
#define RPG_GAMECORE_RTBATTLEMODE_CCTOR_OFFSET UNITYSDK_OFFSET(0x19299920)
#define RPG_GAMECORE_RTBATTLEMODE_CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x19292080)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEDYINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x192911B0)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x19293870)
#define RPG_GAMECORE_RTBATTLEMODE_CREATEGRID_OFFSET UNITYSDK_OFFSET(0x19291A40)
#define RPG_GAMECORE_RTBATTLEMODE_CREATELEVELENTITY_OFFSET UNITYSDK_OFFSET(0x19290400)
#define RPG_GAMECORE_RTBATTLEMODE_CREATETEAMENTITY_OFFSET UNITYSDK_OFFSET(0x19290900)
#define RPG_GAMECORE_RTBATTLEMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x19299840)
#define RPG_GAMECORE_RTBATTLEMODE_EDITORAUTORELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1928EEA0)
#define RPG_GAMECORE_RTBATTLEMODE_FINDEMPTYGRIDWITHEVALUATOR_OFFSET UNITYSDK_OFFSET(0x19296BB0)
#define RPG_GAMECORE_RTBATTLEMODE_FINISHCHECKANDPROCESS_OFFSET UNITYSDK_OFFSET(0x19299590)
#define RPG_GAMECORE_RTBATTLEMODE_GETAVATARPROMOTIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1928FE60)
#define RPG_GAMECORE_RTBATTLEMODE_GETAVATARSPECIALEQUIPDATA_OFFSET UNITYSDK_OFFSET(0x19294330)
#define RPG_GAMECORE_RTBATTLEMODE_GETCHARACTERDIEINFO_OFFSET UNITYSDK_OFFSET(0x19291220)
#define RPG_GAMECORE_RTBATTLEMODE_GETDAMAGERATIOFORTEAMPOWER_OFFSET UNITYSDK_OFFSET(0x1928FBF0)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTDIRANGLE_OFFSET UNITYSDK_OFFSET(0x19290D40)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x192910B0)
#define RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINT_OFFSET UNITYSDK_OFFSET(0x19290C50)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BATTLEPHASE_OFFSET UNITYSDK_OFFSET(0x19299800)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BOSSGRID_OFFSET UNITYSDK_OFFSET(0x19297630)
#define RPG_GAMECORE_RTBATTLEMODE_GET_BOSSMONSTER_OFFSET UNITYSDK_OFFSET(0x19297640)
#define RPG_GAMECORE_RTBATTLEMODE_GET_CHARACTERSPECIALEQUIPDATADICT_OFFSET UNITYSDK_OFFSET(0x19295820)
#define RPG_GAMECORE_RTBATTLEMODE_GET_FINISHPARAM_OFFSET UNITYSDK_OFFSET(0x192997D0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_FRAMESYNCHOR_OFFSET UNITYSDK_OFFSET(0x192997F0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_GAMEWORLD_OFFSET UNITYSDK_OFFSET(0x192997E0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_INITPARAM_OFFSET UNITYSDK_OFFSET(0x19299790)
#define RPG_GAMECORE_RTBATTLEMODE_GET_ISMODEPAUSED_OFFSET UNITYSDK_OFFSET(0x19299810)
#define RPG_GAMECORE_RTBATTLEMODE_GET_LOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x19299830)
#define RPG_GAMECORE_RTBATTLEMODE_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x19298040)
#define RPG_GAMECORE_RTBATTLEMODE_GET_NORMALEQUIPPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x19295810)
#define RPG_GAMECORE_RTBATTLEMODE_GET_PLAYERS_OFFSET UNITYSDK_OFFSET(0x192997C0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_SPAWNEDWAVECOUNT_OFFSET UNITYSDK_OFFSET(0x19297780)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STAGECONFIG_OFFSET UNITYSDK_OFFSET(0x192997B0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STAGEROW_OFFSET UNITYSDK_OFFSET(0x192997A0)
#define RPG_GAMECORE_RTBATTLEMODE_GET_STATISTICSDATA_OFFSET UNITYSDK_OFFSET(0x19297850)
#define RPG_GAMECORE_RTBATTLEMODE_HASNEXTWAVE_OFFSET UNITYSDK_OFFSET(0x19297210)
#define RPG_GAMECORE_RTBATTLEMODE_INITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x1928F2E0)
#define RPG_GAMECORE_RTBATTLEMODE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19299710)
#define RPG_GAMECORE_RTBATTLEMODE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x19299450)
#define RPG_GAMECORE_RTBATTLEMODE_ONINIT_OFFSET UNITYSDK_OFFSET(0x19298EE0)
#define RPG_GAMECORE_RTBATTLEMODE_ONLOAD_OFFSET UNITYSDK_OFFSET(0x19299330)
#define RPG_GAMECORE_RTBATTLEMODE_ONPOSTSTEP_OFFSET UNITYSDK_OFFSET(0x19299500)
#define RPG_GAMECORE_RTBATTLEMODE_ONPREINIT_OFFSET UNITYSDK_OFFSET(0x19298050)
#define RPG_GAMECORE_RTBATTLEMODE_ONPRESTEP_OFFSET UNITYSDK_OFFSET(0x19299490)
#define RPG_GAMECORE_RTBATTLEMODE_ONSTART_OFFSET UNITYSDK_OFFSET(0x192993C0)
#define RPG_GAMECORE_RTBATTLEMODE_ONSTOP_OFFSET UNITYSDK_OFFSET(0x19299410)
#define RPG_GAMECORE_RTBATTLEMODE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x192990A0)
#define RPG_GAMECORE_RTBATTLEMODE_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0x19299380)
#define RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAGHASH_OFFSET UNITYSDK_OFFSET(0x19296AD0)
#define RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAG_OFFSET UNITYSDK_OFFSET(0x19296900)
#define RPG_GAMECORE_RTBATTLEMODE_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1928EEE0)
#define RPG_GAMECORE_RTBATTLEMODE_SETAVATARSPECIALEQUIPDATA_OFFSET UNITYSDK_OFFSET(0x19295620)
#define RPG_GAMECORE_RTBATTLEMODE_SETUPEQUIPDATA_OFFSET UNITYSDK_OFFSET(0x192907A0)
#define RPG_GAMECORE_RTBATTLEMODE_SET_ISMODEPAUSED_OFFSET UNITYSDK_OFFSET(0x19299820)
#define RPG_GAMECORE_RTBATTLEMODE_SPAWNNEXTWAVE_OFFSET UNITYSDK_OFFSET(0x19297280)
#define RPG_GAMECORE_RTBATTLEMODE_SYNCNORMALEQUIP_OFFSET UNITYSDK_OFFSET(0x19294AB0)
#define RPG_GAMECORE_RTBATTLEMODE_SYNCSPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0x19294E50)
#define RPG_GAMECORE_RTBATTLEMODE_TICK_OFFSET UNITYSDK_OFFSET(0x19299600)
#define RPG_GAMECORE_RTBATTLEMODE_UNINITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x1928FAA0)
#define RPG_GAMECORE_RTBATTLEMODE__BEGINSTATISTICS_OFFSET UNITYSDK_OFFSET(0x19297790)
#define RPG_GAMECORE_RTBATTLEMODE__COMPUTENORMALEQUIPPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x19293D80)
#define RPG_GAMECORE_RTBATTLEMODE__ENDSTATISTICS_OFFSET UNITYSDK_OFFSET(0x192977F0)
#define RPG_GAMECORE_RTBATTLEMODE__INITAMPHOREUSBUFF_OFFSET UNITYSDK_OFFSET(0x1928E980)
#define RPG_GAMECORE_RTBATTLEMODE__INITAVATARCONFIGDIC_OFFSET UNITYSDK_OFFSET(0x1928F650)
#define RPG_GAMECORE_RTBATTLEMODE__INITBUFF_OFFSET UNITYSDK_OFFSET(0x1928E930)
#define RPG_GAMECORE_RTBATTLEMODE__INITEQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0x19293BF0)
#define RPG_GAMECORE_RTBATTLEMODE__INITGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x19298F70)
#define RPG_GAMECORE_RTBATTLEMODE__INITLEVELENTITY_OFFSET UNITYSDK_OFFSET(0x192917F0)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEABILITY_OFFSET UNITYSDK_OFFSET(0x19295E60)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEBACKGROUNDUNIT_OFFSET UNITYSDK_OFFSET(0x192960D0)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEGRID_OFFSET UNITYSDK_OFFSET(0x19295900)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x19295F90)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGEUNIT_OFFSET UNITYSDK_OFFSET(0x19296270)
#define RPG_GAMECORE_RTBATTLEMODE__INITSTAGE_OFFSET UNITYSDK_OFFSET(0x19295830)
#define RPG_GAMECORE_RTBATTLEMODE__INITTEAMCHARACTERS_OFFSET UNITYSDK_OFFSET(0x19297860)
#define RPG_GAMECORE_RTBATTLEMODE__INITTEAM_OFFSET UNITYSDK_OFFSET(0x19296080)
#define RPG_GAMECORE_RTBATTLEMODE__INITTECHTREEDATA_OFFSET UNITYSDK_OFFSET(0x19296400)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYBEFOREDYING_OFFSET UNITYSDK_OFFSET(0x19291300)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYDIED_OFFSET UNITYSDK_OFFSET(0x192916F0)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0x19291740)
#define RPG_GAMECORE_RTBATTLEMODE__ONENTITYWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x192917A0)
#define RPG_GAMECORE_RTBATTLEMODE__SETUPDAMAGECONFIG_OFFSET UNITYSDK_OFFSET(0x19298C80)
#define RPG_GAMECORE_RTBATTLEMODE__SETUPENTITYLISTEN_OFFSET UNITYSDK_OFFSET(0x1928FF80)
#define RPG_GAMECORE_RTBATTLEMODE__STARTSTAGELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x19296850)
#define RPG_GAMECORE_RTBATTLEMODE__SYNCPROPERTYGROUP_OFFSET UNITYSDK_OFFSET(0x19294D90)
#define RPG_GAMECORE_RTBATTLEMODE__UNINITGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x192992C0)
#define RPG_GAMECORE_RTBATTLEMODE__UNSETUPENTITYLISTEN_OFFSET UNITYSDK_OFFSET(0x192901C0)
#define RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_1_OFFSET UNITYSDK_OFFSET(0x19294460)
#define RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_OFFSET UNITYSDK_OFFSET(0x19295460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleMode_TypeDefinitionIndex = 55433;

	class RtBattleMode : public ::ADGFFEDNPPO
	{
	public:
		::RPG::GameCore::BaseFrameSynchor_2<::INHCJHBALFC*, ::KPMFMFCBPIG*>* _FrameSynchor; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _GridByTagDict; // 0x40
		::System::Collections::Generic::List_1<::LEHBJLFHDAD*>* _CharacterDieInfoList; // 0x48
		::RPG::GameCore::GameWorld* _GameWorld; // 0x50
		::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* _NormalEquipPropertyList; // 0x58
		::ANDEHGAKOHE* _InitParam; // 0x60
		::MJNGFEGNCOA* _RtTickContext; // 0x68
		::CBCPEACIJIE* _LocalPlayer; // 0x70
		::Il2CppArray<::JEFCCHAPOLA*>* _NormalEquipList; // 0x78
		::DEEJKBIMHAA* _BattleLogicRandom; // 0x80
		::RPG::GameCore::ILBattleStageConfigRow* _StageRow; // 0x88
		::RPG::GameCore::GameEntity* _BossGrid; // 0x90
		::ENDPGDJBBDJ* _StatisticsData; // 0x98
		::System::Collections::Generic::List_1<::CBCPEACIJIE*>* _Players; // 0xA0
		::RPG::GameCore::RtBattleStageConfig* _StageConfig; // 0xA8
		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::JEFCCHAPOLA*>* _CharacterSpecialEquipDataDict; // 0xB0
		::System::Boolean _IsModePaused_k__BackingField; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Int32 _SpawnedWaveCount; // 0xBC
		::RPG::GameCore::RtBattlePhase _BattlePhase; // 0xC0
		static ::System::String** StaticGet_TargetOperationConfigPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "RtBattleMode")->GetStaticField(0x29EA0);
		}

		static ::System::String** StaticGet_TargetAliasConfigPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "RtBattleMode")->GetStaticField(0x29EA8);
		}

		static ::System::String** StaticGet_SpeicalEquipID_Key()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "RtBattleMode")->GetStaticField(0x29EB0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DamageTag_SpecialEquipment()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "RtBattleMode")->GetStaticField(0x29EB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__AvatarPromotionIDDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "RtBattleMode")->GetStaticField(0x29EC0);
		}

		// static const ::System::String* TeamEquipPropertyGroupName; // 0x0
		// static const ::System::String* AvatarSpecialEquipPropertyGroupName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CCTOR_OFFSET))();
		}

		::System::Void _InitBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITBUFF_OFFSET))(this);
		}

		::System::Void _InitAmphoreusBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITAMPHOREUSBUFF_OFFSET))(this);
		}

		static ::System::Void EditorAutoReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_EDITORAUTORELOADCONFIG_OFFSET))();
		}

		static ::System::Void ReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_RELOADCONFIG_OFFSET))();
		}

		::System::Void InitGlobalConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_INITGLOBALCONFIG_OFFSET))(this);
		}

		::System::Void UninitGlobalConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_UNINITGLOBALCONFIG_OFFSET))(this);
		}

		static ::System::Void GetDamageRatioForTeamPower(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt64, ::System::UInt64, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETDAMAGERATIOFORTEAMPOWER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAvatarPromotionIDList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETAVATARPROMOTIONIDLIST_OFFSET))(a1);
		}

		static ::System::Void _InitAvatarConfigDic()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITAVATARCONFIGDIC_OFFSET))();
		}

		::System::Void _SetupEntityListen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__SETUPENTITYLISTEN_OFFSET))(this);
		}

		::System::Void _UnsetupEntityListen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UNSETUPENTITYLISTEN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateLevelEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATELEVELENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateTeamEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATETEAMENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::IVec2 GetTeamBornPoint(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetTeamBornPointDirAngle(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTDIRANGLE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetTeamBornPointEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETTEAMBORNPOINTENTITY_OFFSET))(this, a1);
		}

		::JHFCIOJIONP* CreateDyingInstance()
		{
			return ((::JHFCIOJIONP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATEDYINGINSTANCE_OFFSET))(this);
		}

		::System::Boolean GetCharacterDieInfo(::System::UInt32 a1, ::LEHBJLFHDAD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::LEHBJLFHDAD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETCHARACTERDIEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEntityBeforeDying(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYBEFOREDYING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnEntityDied(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYDIED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEntityRevive(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2, ::NMNGHKMHDOK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::NMNGHKMHDOK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYREVIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnEntityWillDestroy(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ONENTITYWILLDESTROY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitLevelEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITLEVELENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateGrid(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::IVec2 a2, ::Il2CppArray<::System::String*>* a3, ::System::Int32 a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::EntityManager*, ::RPG::GameCore::IVec2, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATEGRID_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::IFOLICKHDHC* BuildCharacterRowData(::EDFNHOHENHI a1, ::RPG::GameCore::ILBattleStageConfigRow* a2, ::ANGGDDJJBKO* a3)
		{
			return ((::IFOLICKHDHC*(*)(::EDFNHOHENHI, ::RPG::GameCore::ILBattleStageConfigRow*, ::ANGGDDJJBKO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_BUILDCHARACTERROWDATA_OFFSET))(a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* CreateCharacter(::EDFNHOHENHI a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::EDFNHOHENHI, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATECHARACTER_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* CreateEntity(::RPG::GameCore::EntityType a1, ::EDCEPLBIKIN* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::EntityType, ::EDCEPLBIKIN*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_CREATEENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitEquipmentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITEQUIPMENTDATA_OFFSET))(this);
		}

		::System::Void SetupEquipData(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SETUPEQUIPDATA_OFFSET))(this, a1);
		}

		::System::Void SyncNormalEquip(::Il2CppArray<::JEFCCHAPOLA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::JEFCCHAPOLA*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SYNCNORMALEQUIP_OFFSET))(this, a1);
		}

		::System::Void SyncSpecialEquip(::Il2CppArray<::GJEMBJDCAPG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::GJEMBJDCAPG*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SYNCSPECIALEQUIP_OFFSET))(this, a1);
		}

		::JEFCCHAPOLA* GetAvatarSpecialEquipData(::System::UInt32 a1)
		{
			return ((::JEFCCHAPOLA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GETAVATARSPECIALEQUIPDATA_OFFSET))(this, a1);
		}

		::System::Void SetAvatarSpecialEquipData(::System::UInt32 a1, ::JEFCCHAPOLA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JEFCCHAPOLA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SETAVATARSPECIALEQUIPDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSpecialEquipForAvatar(::System::UInt32 a1, ::JEFCCHAPOLA* a2, ::JEFCCHAPOLA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JEFCCHAPOLA*, ::JEFCCHAPOLA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateSpecialEquipForAvatar_1(::RPG::GameCore::GameEntity* a1, ::JEFCCHAPOLA* a2, ::JEFCCHAPOLA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::JEFCCHAPOLA*, ::JEFCCHAPOLA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UPDATESPECIALEQUIPFORAVATAR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SyncPropertyGroup(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__SYNCPROPERTYGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ComputeNormalEquipPropertyList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__COMPUTENORMALEQUIPPROPERTYLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* get_NormalEquipPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_NORMALEQUIPPROPERTYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::JEFCCHAPOLA*>* get_CharacterSpecialEquipDataDict()
		{
			return ((::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::JEFCCHAPOLA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_CHARACTERSPECIALEQUIPDATADICT_OFFSET))(this);
		}

		::System::Void _InitStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGE_OFFSET))(this);
		}

		::System::Void _InitStageAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGEABILITY_OFFSET))(this);
		}

		::System::Void _InitStageLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGELEVELGRAPH_OFFSET))(this);
		}

		::System::Void _StartStageLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__STARTSTAGELEVELGRAPH_OFFSET))(this);
		}

		::System::Void _InitStageGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGEGRID_OFFSET))(this);
		}

		::System::Void _InitStageUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGEUNIT_OFFSET))(this);
		}

		::System::Void _InitStageBackgroundUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITSTAGEBACKGROUNDUNIT_OFFSET))(this);
		}

		::System::Void QueryGridByTag(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAG_OFFSET))(this, a1, a2);
		}

		::System::Void QueryGridByTagHash(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_QUERYGRIDBYTAGHASH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* FindEmptyGridWithEvaluator(::RPG::GameCore::ValueEvaluatorConfig* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_FINDEMPTYGRIDWITHEVALUATOR_OFFSET))(this, a1);
		}

		::System::Boolean HasNextWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_HASNEXTWAVE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* SpawnNextWave()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SPAWNNEXTWAVE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_BossGrid()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_BOSSGRID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_BossMonster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_BOSSMONSTER_OFFSET))(this);
		}

		::System::Int32 get_SpawnedWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_SPAWNEDWAVECOUNT_OFFSET))(this);
		}

		::System::Void _BeginStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__BEGINSTATISTICS_OFFSET))(this);
		}

		::System::Void _EndStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__ENDSTATISTICS_OFFSET))(this);
		}

		::ENDPGDJBBDJ* get_StatisticsData()
		{
			return ((::ENDPGDJBBDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_STATISTICSDATA_OFFSET))(this);
		}

		::System::Void _InitTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITTEAM_OFFSET))(this);
		}

		::System::Void _InitTeamCharacters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITTEAMCHARACTERS_OFFSET))(this);
		}

		::System::Void _InitTechTreeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITTECHTREEDATA_OFFSET))(this);
		}

		::RPG::GameCore::BattleModeType get_ModeType()
		{
			return ((::RPG::GameCore::BattleModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_MODETYPE_OFFSET))(this);
		}

		::System::Void OnPreInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONPREINIT_OFFSET))(this);
		}

		::System::Void _SetupDamageConfig(::HBIMGDOPJMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBIMGDOPJMI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__SETUPDAMAGECONFIG_OFFSET))(this, a1);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONUNINIT_OFFSET))(this);
		}

		::System::Void _InitGameWorld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__INITGAMEWORLD_OFFSET))(this);
		}

		::System::Void _UninitGameworld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE__UNINITGAMEWORLD_OFFSET))(this);
		}

		::System::Void OnLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONLOAD_OFFSET))(this);
		}

		::System::Void OnUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONUNLOAD_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONSTART_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONSTOP_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONFINISH_OFFSET))(this);
		}

		::System::Void OnPreStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONPRESTEP_OFFSET))(this);
		}

		::System::Void OnPostStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_ONPOSTSTEP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean FinishCheckAndProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_FINISHCHECKANDPROCESS_OFFSET))(this);
		}

		::ANDEHGAKOHE* get_InitParam()
		{
			return ((::ANDEHGAKOHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_INITPARAM_OFFSET))(this);
		}

		::RPG::GameCore::ILBattleStageConfigRow* get_StageRow()
		{
			return ((::RPG::GameCore::ILBattleStageConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_STAGEROW_OFFSET))(this);
		}

		::RPG::GameCore::RtBattleStageConfig* get_StageConfig()
		{
			return ((::RPG::GameCore::RtBattleStageConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_STAGECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::CBCPEACIJIE*>* get_Players()
		{
			return ((::System::Collections::Generic::List_1<::CBCPEACIJIE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_PLAYERS_OFFSET))(this);
		}

		::FDNCLPGAKOA* get_FinishParam()
		{
			return ((::FDNCLPGAKOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_FINISHPARAM_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* get_GameWorld()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_GAMEWORLD_OFFSET))(this);
		}

		::RPG::GameCore::BaseFrameSynchor_2<::INHCJHBALFC*, ::KPMFMFCBPIG*>* get_FrameSynchor()
		{
			return ((::RPG::GameCore::BaseFrameSynchor_2<::INHCJHBALFC*, ::KPMFMFCBPIG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_FRAMESYNCHOR_OFFSET))(this);
		}

		::RPG::GameCore::RtBattlePhase get_BattlePhase()
		{
			return ((::RPG::GameCore::RtBattlePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_BATTLEPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsModePaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_ISMODEPAUSED_OFFSET))(this);
		}

		::System::Void set_IsModePaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_SET_ISMODEPAUSED_OFFSET))(this, a1);
		}

		::CBCPEACIJIE* get_LocalPlayer()
		{
			return ((::CBCPEACIJIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE_GET_LOCALPLAYER_OFFSET))(this);
		}

	};
}
