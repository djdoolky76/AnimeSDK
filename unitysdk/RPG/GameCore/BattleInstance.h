#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKBCEFGFJCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HILEDNNCGMF.h"
class CHHGFHIPHAE;
class DEEJKBIMHAA;
class JMHDGNNIFCA;
class KLDACPIHCCN;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }

#define RPG_GAMECORE_BATTLEINSTANCE_BATTLELEVELSTART_OFFSET UNITYSDK_OFFSET(0xE5C4E70)
#define RPG_GAMECORE_BATTLEINSTANCE_CCTOR_OFFSET UNITYSDK_OFFSET(0xE5C63B0)
#define RPG_GAMECORE_BATTLEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xE5C2FF0)
#define RPG_GAMECORE_BATTLEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5C4C10)
#define RPG_GAMECORE_BATTLEINSTANCE_ENABLEFULLYAGENTBATTLE_OFFSET UNITYSDK_OFFSET(0xE5C6360)
#define RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_1_OFFSET UNITYSDK_OFFSET(0xE5C5750)
#define RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xE5C5080)
#define RPG_GAMECORE_BATTLEINSTANCE_GETCURWAVEPARAM_OFFSET UNITYSDK_OFFSET(0xE5C5980)
#define RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUP2FROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xE5BD320)
#define RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUPFROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xE5BD280)
#define RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELFROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xE5BD1D0)
#define RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELGROUPFROMCURWAVE_OFFSET UNITYSDK_OFFSET(0xE5BD120)
#define RPG_GAMECORE_BATTLEINSTANCE_GETNEXTWAVEPARAM_OFFSET UNITYSDK_OFFSET(0xE5C5B30)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAGROUPID_OFFSET UNITYSDK_OFFSET(0xE5C5D60)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xE5C5D80)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELINEUPDATAREF_OFFSET UNITYSDK_OFFSET(0xE5C5CA0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xE5C5CC0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEUNIFIEDAREAID_OFFSET UNITYSDK_OFFSET(0xE5C5DA0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_COMPLEXSKILLAICONSIDERULTRA_OFFSET UNITYSDK_OFFSET(0xE5C58D0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xE5C5D40)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ENCRYPTTIME_OFFSET UNITYSDK_OFFSET(0xE5C5DC0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xE5C5D20)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_GAMEWORLDREF_OFFSET UNITYSDK_OFFSET(0xE5C5C80)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLEDIRECTKILL_OFFSET UNITYSDK_OFFSET(0xE5C6300)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLESERVERSIMULATOR_OFFSET UNITYSDK_OFFSET(0xE5C62E0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISFULLYAGENTBATTLE_OFFSET UNITYSDK_OFFSET(0xE5C6350)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_ISTEAMFORMATIONEXPANSION_OFFSET UNITYSDK_OFFSET(0xE5C5DE0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_LOGEXPORT_OFFSET UNITYSDK_OFFSET(0xE5C6330)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_LOGICRANDOMSEED_OFFSET UNITYSDK_OFFSET(0xE5C5CE0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xE5C5D00)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_PRIMITIVEBATTLELINEUPDATAREF_OFFSET UNITYSDK_OFFSET(0xE5C5CB0)
#define RPG_GAMECORE_BATTLEINSTANCE_GET_TURNBASEDGAMEMODEREF_OFFSET UNITYSDK_OFFSET(0xE5C5C90)
#define RPG_GAMECORE_BATTLEINSTANCE_ISAUTOBATTLEATSTART_OFFSET UNITYSDK_OFFSET(0xE5C4880)
#define RPG_GAMECORE_BATTLEINSTANCE_ISFINISH_OFFSET UNITYSDK_OFFSET(0xE5C4F30)
#define RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xE5C4A70)
#define RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDVIEWMODE_OFFSET UNITYSDK_OFFSET(0xE5C4B40)
#define RPG_GAMECORE_BATTLEINSTANCE_ISTURNCHECKNECESSARY_OFFSET UNITYSDK_OFFSET(0xE5C5930)
#define RPG_GAMECORE_BATTLEINSTANCE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE5C5010)
#define RPG_GAMECORE_BATTLEINSTANCE_SETCOMPLEXSKILLAICONSIDERULTRAINBATTLE_OFFSET UNITYSDK_OFFSET(0xE5C5810)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAGROUPID_OFFSET UNITYSDK_OFFSET(0xE5C5D70)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xE5C5D90)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLELOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xE5C5CD0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEUNIFIEDAREAID_OFFSET UNITYSDK_OFFSET(0xE5C5DB0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_COMPLEXSKILLAICONSIDERULTRA_OFFSET UNITYSDK_OFFSET(0xE5C6320)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xE5C5D50)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ENCRYPTTIME_OFFSET UNITYSDK_OFFSET(0xE5C5DD0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xE5C5D30)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLEDIRECTKILL_OFFSET UNITYSDK_OFFSET(0xE5C6310)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLESERVERSIMULATOR_OFFSET UNITYSDK_OFFSET(0xE5C62F0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_ISTEAMFORMATIONEXPANSION_OFFSET UNITYSDK_OFFSET(0xE5C5DF0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_LOGEXPORT_OFFSET UNITYSDK_OFFSET(0xE5C6340)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_LOGICRANDOMSEED_OFFSET UNITYSDK_OFFSET(0xE5C5CF0)
#define RPG_GAMECORE_BATTLEINSTANCE_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xE5C5D10)
#define RPG_GAMECORE_BATTLEINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xE5C4F90)
#define RPG_GAMECORE_BATTLEINSTANCE__ADDSPECIALAVATARFROMSTAGE_OFFSET UNITYSDK_OFFSET(0xE5C43D0)
#define RPG_GAMECORE_BATTLEINSTANCE__GETNEWLINEUPINDEX_OFFSET UNITYSDK_OFFSET(0xE5C6180)
#define RPG_GAMECORE_BATTLEINSTANCE__INITSPECIALAVATARLINEUP_OFFSET UNITYSDK_OFFSET(0xE5C4490)
#define RPG_GAMECORE_BATTLEINSTANCE__REMOVEBANNEDAVATARFROMSTAGE_OFFSET UNITYSDK_OFFSET(0xE5C41C0)
#define RPG_GAMECORE_BATTLEINSTANCE__UPDATEMAZEBUFFOWNERINDEXONLINEUPCHANGE_OFFSET UNITYSDK_OFFSET(0xE5C5E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleInstance_TypeDefinitionIndex = 56038;

	class BattleInstance : public ::System::Object
	{
	public:
		::DEEJKBIMHAA* _BattleLogicRandom_k__BackingField; // 0x10
		::RPG::GameCore::GameWorld* _GameWorld; // 0x18
		::RPG::GameCore::BattleLineupData* _BattleLineupData; // 0x20
		::RPG::GameCore::BattleLineupData* _BattleLineupDataPrimitive; // 0x28
		::RPG::GameCore::TurnBasedGameMode* _TurnBasedGameMode; // 0x30
		::KLDACPIHCCN* _LogExport_k__BackingField; // 0x38
		::System::UInt32 ClientIFixVersion; // 0x40
		::System::UInt32 _BattleAreaID_k__BackingField; // 0x44
		::System::UInt32 BattleID; // 0x48
		::System::UInt32 _BattleAreaGroupID_k__BackingField; // 0x4C
		::System::UInt32 _FloorID_k__BackingField; // 0x50
		::System::UInt32 _PlaneID_k__BackingField; // 0x54
		::System::Int32 _LogicRandomSeed_k__BackingField; // 0x58
		::System::Int32 SnapshotHashTurnCount; // 0x5C
		::System::UInt32 _BattleUnifiedAreaID_k__BackingField; // 0x60
		::System::UInt32 _DimensionID_k__BackingField; // 0x64
		::System::Boolean AutoBattleAtStart; // 0x68
		::System::Boolean _IsBattleServerSimulator_k__BackingField; // 0x69
		::System::Boolean _ComplexSkillAIConsiderUltra; // 0x6A
		::System::Byte _padding0[0x1];
		::AKBCEFGFJCJ BattleCheckResult; // 0x6C
		::System::Boolean _EncryptTime_k__BackingField; // 0x70
		::System::Boolean _IsTeamFormationExpansion_k__BackingField; // 0x71
		::System::Boolean _IsFullyAgentBattle; // 0x72
		::System::Boolean _IsBattleDirectKill_k__BackingField; // 0x73
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TurnBasedGameModeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "BattleInstance")->GetStaticField(0x57480);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__GameWorldMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "BattleInstance")->GetStaticField(0x57488);
		}

		// static const ::System::Object _MaxCheckTurnCount; // 0x0
		::System::Void _ctor(::HILEDNNCGMF a1, ::RPG::GameCore::BattleLineupData* a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::HILEDNNCGMF, ::RPG::GameCore::BattleLineupData*, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_CCTOR_OFFSET))();
		}

		::System::Boolean IsStageForbidAutoBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDAUTOBATTLE_OFFSET))(this);
		}

		::System::Boolean IsStageForbidViewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISSTAGEFORBIDVIEWMODE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void BattleLevelStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_BATTLELEVELSTART_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISFINISH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void GenerateTurnSnapshot(::JMHDGNNIFCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMHDGNNIFCA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_OFFSET))(this, a1);
		}

		::JMHDGNNIFCA* GenerateTurnSnapshot_1()
		{
			return ((::JMHDGNNIFCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GENERATETURNSNAPSHOT_1_OFFSET))(this);
		}

		::System::Void SetComplexSkillAIConsiderUltraInBattle(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SETCOMPLEXSKILLAICONSIDERULTRAINBATTLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTurnCheckNecessary(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISTURNCHECKNECESSARY_OFFSET))(this, a1);
		}

		::CHHGFHIPHAE* GetCurWaveParam()
		{
			return ((::CHHGFHIPHAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETCURWAVEPARAM_OFFSET))(this);
		}

		::CHHGFHIPHAE* GetNextWaveParam()
		{
			return ((::CHHGFHIPHAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETNEXTWAVEPARAM_OFFSET))(this);
		}

		::System::UInt32 GetHardLevelFromCurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELFROMCURWAVE_OFFSET))(this);
		}

		::System::UInt32 GetHardLevelGroupFromCurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETHARDLEVELGROUPFROMCURWAVE_OFFSET))(this);
		}

		::System::UInt32 GetEliteGroupFromCurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUPFROMCURWAVE_OFFSET))(this);
		}

		::System::UInt32 GetEliteGroup2FromCurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GETELITEGROUP2FROMCURWAVE_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* get_GameWorldRef()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_GAMEWORLDREF_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedGameMode* get_TurnBasedGameModeRef()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_TURNBASEDGAMEMODEREF_OFFSET))(this);
		}

		::RPG::GameCore::BattleLineupData* get_BattleLineupDataRef()
		{
			return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELINEUPDATAREF_OFFSET))(this);
		}

		::RPG::GameCore::BattleLineupData* get_PrimitiveBattleLineupDataRef()
		{
			return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_PRIMITIVEBATTLELINEUPDATAREF_OFFSET))(this);
		}

		::DEEJKBIMHAA* get_BattleLogicRandom()
		{
			return ((::DEEJKBIMHAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLELOGICRANDOM_OFFSET))(this);
		}

		::System::Void set_BattleLogicRandom(::DEEJKBIMHAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEEJKBIMHAA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLELOGICRANDOM_OFFSET))(this, a1);
		}

		::System::Int32 get_LogicRandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_LOGICRANDOMSEED_OFFSET))(this);
		}

		::System::Void set_LogicRandomSeed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_LOGICRANDOMSEED_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_PLANEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::Void set_DimensionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_DIMENSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleAreaGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAGROUPID_OFFSET))(this);
		}

		::System::Void set_BattleAreaGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEAREAID_OFFSET))(this);
		}

		::System::Void set_BattleAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleUnifiedAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_BATTLEUNIFIEDAREAID_OFFSET))(this);
		}

		::System::Void set_BattleUnifiedAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_BATTLEUNIFIEDAREAID_OFFSET))(this, a1);
		}

		::System::Boolean get_EncryptTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ENCRYPTTIME_OFFSET))(this);
		}

		::System::Void set_EncryptTime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ENCRYPTTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTeamFormationExpansion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISTEAMFORMATIONEXPANSION_OFFSET))(this);
		}

		::System::Void set_IsTeamFormationExpansion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ISTEAMFORMATIONEXPANSION_OFFSET))(this, a1);
		}

		::System::Void _RemoveBannedAvatarFromStage(::RPG::GameCore::BattleLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__REMOVEBANNEDAVATARFROMSTAGE_OFFSET))(this, a1);
		}

		::System::Void _UpdateMazeBuffOwnerIndexOnLineupChange(::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* a1, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__UPDATEMAZEBUFFOWNERINDEXONLINEUPCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 _GetNewLineupIndex(::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* a1, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__GETNEWLINEUPINDEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddSpecialAvatarFromStage(::RPG::GameCore::BattleLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__ADDSPECIALAVATARFROMSTAGE_OFFSET))(this, a1);
		}

		::System::Void _InitSpecialAvatarLineup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE__INITSPECIALAVATARLINEUP_OFFSET))(this);
		}

		::System::Boolean IsAutoBattleAtStart(::HILEDNNCGMF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HILEDNNCGMF))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ISAUTOBATTLEATSTART_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBattleServerSimulator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLESERVERSIMULATOR_OFFSET))(this);
		}

		::System::Void set_IsBattleServerSimulator(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLESERVERSIMULATOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBattleDirectKill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISBATTLEDIRECTKILL_OFFSET))(this);
		}

		::System::Void set_IsBattleDirectKill(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_ISBATTLEDIRECTKILL_OFFSET))(this, a1);
		}

		::System::Boolean get_ComplexSkillAIConsiderUltra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_COMPLEXSKILLAICONSIDERULTRA_OFFSET))(this);
		}

		::System::Void set_ComplexSkillAIConsiderUltra(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_COMPLEXSKILLAICONSIDERULTRA_OFFSET))(this, a1);
		}

		::KLDACPIHCCN* get_LogExport()
		{
			return ((::KLDACPIHCCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_LOGEXPORT_OFFSET))(this);
		}

		::System::Void set_LogExport(::KLDACPIHCCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLDACPIHCCN*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_SET_LOGEXPORT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFullyAgentBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_GET_ISFULLYAGENTBATTLE_OFFSET))(this);
		}

		::System::Void EnableFullyAgentBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE_ENABLEFULLYAGENTBATTLE_OFFSET))(this, a1);
		}

	};
}
