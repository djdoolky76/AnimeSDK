#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLLLNKAPKFD.h"
#include "unitysdk/RPG/Client/GridFightStageMonsterSelectType.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/System/Nullable_1.h"
class AINFNFIDGFF;
class BAAGMMIDHDB;
class BEEFLEJAOCN;
class FBFODNFGMKG;
class KEPIEGKPFIJ;
class KGMCLFHAJNJ;
class KOMPNJAMLPM;
class LAAMIAJFOMC;
class LAIKGBIIFIH;
class LHLMPOHKPKG;
class NCKOKDHNJDC;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterBattleStageData; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightMonsterStageData; }
namespace RPG::Client { class GridFightStageNode; }
namespace RPG::Client { class GridFightStageRoute; }
namespace RPG::Client { class IGridFightStageNode; }
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16EA90)
#define RPG_CLIENT_GRIDFIGHTSTAGE_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1E172D30)
#define RPG_CLIENT_GRIDFIGHTSTAGE_EDITELITEBRANCH_OFFSET UNITYSDK_OFFSET(0x1E16E690)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETALLDIFFADDLVFORBRANCHPREVIEW_OFFSET UNITYSDK_OFFSET(0x1E16E1F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETALLDIFFADDLV_OFFSET UNITYSDK_OFFSET(0x1E16E070)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETBASEDIFFADDLV_OFFSET UNITYSDK_OFFSET(0x1E16E100)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETBOSSDATABYCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1E16E3C0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETCHAPTERPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E172BA0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTBOSSDATA_OFFSET UNITYSDK_OFFSET(0x1E16DB30)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTMONSTERDIFFADDLV_OFFSET UNITYSDK_OFFSET(0x1E16E020)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETDIFFSOURCEVALUE_OFFSET UNITYSDK_OFFSET(0x1E16E2F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GETFUNCTIONISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1E1708E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_AFFIXDATALIST_OFFSET UNITYSDK_OFFSET(0x1E173270)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CAMPDATALIST_OFFSET UNITYSDK_OFFSET(0x1E1734F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERANDSECTIONID_OFFSET UNITYSDK_OFFSET(0x1E171F70)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E172980)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1E171F30)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURCAMPID_OFFSET UNITYSDK_OFFSET(0x1E16DD20)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURELITEBRANCHOPTIONPOS_OFFSET UNITYSDK_OFFSET(0x1E16E8E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1E16D9A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1E16E890)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODEINFO_OFFSET UNITYSDK_OFFSET(0x1E172110)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODE_OFFSET UNITYSDK_OFFSET(0x1E16DAD0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_DIFFICULTYMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x1E16E960)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBATTLENODE_OFFSET UNITYSDK_OFFSET(0x1E16E7F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBOSSNODE_OFFSET UNITYSDK_OFFSET(0x1E171FC0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISDIFFDOWN_OFFSET UNITYSDK_OFFSET(0x1E16EA40)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISELITEBRANCHHANDLED_OFFSET UNITYSDK_OFFSET(0x1E16E640)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0x1E172A90)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTBATTENODE_OFFSET UNITYSDK_OFFSET(0x1E172280)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTMONSTERNODE_OFFSET UNITYSDK_OFFSET(0x1E1724B0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_MONSTERSELECTTYPE_OFFSET UNITYSDK_OFFSET(0x1E16E900)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_NORMALMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1E16E920)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_POWERFULMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1E16E940)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1E172720)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1E171F10)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1E171F50)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_SHOWHINT_OFFSET UNITYSDK_OFFSET(0x1E172060)
#define RPG_CLIENT_GRIDFIGHTSTAGE_GET_TOTALSECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E172680)
#define RPG_CLIENT_GRIDFIGHTSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0x1E16EC50)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ISAFFIXREMOVED_OFFSET UNITYSDK_OFFSET(0x1E172C10)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x1E16EE60)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0x1E16F180)
#define RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0x1E16F000)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1E16F300)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1E171F40)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURELITEBRANCHOPTIONPOS_OFFSET UNITYSDK_OFFSET(0x1E16E8F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURNODEINFO_OFFSET UNITYSDK_OFFSET(0x1E172120)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_MONSTERSELECTTYPE_OFFSET UNITYSDK_OFFSET(0x1E16E910)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_NORMALMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1E16E930)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_POWERFULMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1E16E950)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1E171F20)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1E171F60)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNCALLROUTENODES_OFFSET UNITYSDK_OFFSET(0x1E16FED0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_OFFSET UNITYSDK_OFFSET(0x1E16DDC0)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNCENEMYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1E16DE20)
#define RPG_CLIENT_GRIDFIGHTSTAGE_SYNC_OFFSET UNITYSDK_OFFSET(0x1E16F640)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEAFFIX_OFFSET UNITYSDK_OFFSET(0x1E16F780)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEENEMYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1E16DE70)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATENODE_OFFSET UNITYSDK_OFFSET(0x1E16F970)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEROUTENODE_OFFSET UNITYSDK_OFFSET(0x1E16FC80)
#define RPG_CLIENT_GRIDFIGHTSTAGE_UPDATESTT_OFFSET UNITYSDK_OFFSET(0x1E16FB90)
#define RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1E16D9F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1E16E5B0)
#define RPG_CLIENT_GRIDFIGHTSTAGE__GETDIFFSOURCEVALUE_OFFSET UNITYSDK_OFFSET(0x1E16DF70)
#define RPG_CLIENT_GRIDFIGHTSTAGE__REFRESHMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1E16D6A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE__SYNCROUTEINFO_OFFSET UNITYSDK_OFFSET(0x1E16F700)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage_TypeDefinitionIndex = 66993;

	class GridFightStage : public ::Sofa::Core::ObservableObject
	{
	public:
		::KGMCLFHAJNJ* _BossInfo; // 0x18
		::RPG::Client::GridFightMonsterBattleStageData* _NormalMonsterStageData_k__BackingField; // 0x20
		::KOMPNJAMLPM* _EnemyDifficulty; // 0x28
		::RPG::Client::GridFightMonsterBattleStageData* _PowerfulMonsterStageData_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* ModifiedSectionIDs; // 0x38
		::RPG::Client::GridFightStageRoute* Route; // 0x40
		::NCKOKDHNJDC* _CurNodeInfo_k__BackingField; // 0x48
		::BEEFLEJAOCN* _LevelInfo; // 0x50
		::RPG::GameCore::GridFightStageRouteConfigRow* CurNodeConfigRow; // 0x58
		::RPG::Client::GridFightStageMonsterSelectType _MonsterSelectType_k__BackingField; // 0x60
		::System::UInt32 _SectionID_k__BackingField; // 0x64
		::System::UInt32 _ChapterID_k__BackingField; // 0x68
		::System::UInt32 _CurEliteBranchOptionPos_k__BackingField; // 0x6C
		::System::UInt32 _RouteID_k__BackingField; // 0x70
		// static const ::System::Object ELITE_BRANCH_OPTION_POS_LEFT; // 0x0
		// static const ::System::Object ELITE_BRANCH_OPTION_POS_RIGHT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMonsterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__REFRESHMONSTERDATA_OFFSET))(this);
		}

		::System::UInt32 _GetCurMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERLEVEL_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterData* GetCurrentBossData()
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTBOSSDATA_OFFSET))(this);
		}

		::System::Void SyncEliteBranch(::KEPIEGKPFIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEPIEGKPFIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNCELITEBRANCH_OFFSET))(this, a1);
		}

		::System::Void SyncEnemyDifficulty(::KOMPNJAMLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOMPNJAMLPM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNCENEMYDIFFICULTY_OFFSET))(this, a1);
		}

		::System::Void UpdateEnemyDifficulty(::KOMPNJAMLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOMPNJAMLPM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEENEMYDIFFICULTY_OFFSET))(this, a1);
		}

		::System::Int32 _GetDiffSourceValue(::PLLLNKAPKFD a1)
		{
			return ((::System::Int32(*)(::PVOID, ::PLLLNKAPKFD))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__GETDIFFSOURCEVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurrentMonsterDiffAddLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETCURRENTMONSTERDIFFADDLV_OFFSET))(this);
		}

		::System::Int32 GetAllDiffAddLv()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETALLDIFFADDLV_OFFSET))(this);
		}

		::System::UInt32 GetBaseDiffAddLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETBASEDIFFADDLV_OFFSET))(this);
		}

		::System::Int32 GetAllDiffAddLvForBranchPreview(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETALLDIFFADDLVFORBRANCHPREVIEW_OFFSET))(this, a1);
		}

		::System::Int32 GetDiffSourceValue(::PLLLNKAPKFD a1)
		{
			return ((::System::Int32(*)(::PVOID, ::PLLLNKAPKFD))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETDIFFSOURCEVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterData* GetBossDataByChapterID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETBOSSDATABYCHAPTERID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterStageData* _GetCurMonsterStageData(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMonsterStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__GETCURMONSTERSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Void EditEliteBranch(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_EDITELITEBRANCH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBattleNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBATTLENODE_OFFSET))(this);
		}

		::System::UInt32 get_CurMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERLEVEL_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterStageData* get_CurMonsterStageData()
		{
			return ((::RPG::Client::GridFightMonsterStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURMONSTERSTAGEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsEliteBranchHandled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISELITEBRANCHHANDLED_OFFSET))(this);
		}

		::System::UInt32 get_CurEliteBranchOptionPos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURELITEBRANCHOPTIONPOS_OFFSET))(this);
		}

		::System::Void set_CurEliteBranchOptionPos(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURELITEBRANCHOPTIONPOS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightStageMonsterSelectType get_MonsterSelectType()
		{
			return ((::RPG::Client::GridFightStageMonsterSelectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_MONSTERSELECTTYPE_OFFSET))(this);
		}

		::System::Void set_MonsterSelectType(::RPG::Client::GridFightStageMonsterSelectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightStageMonsterSelectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_MONSTERSELECTTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterBattleStageData* get_NormalMonsterStageData()
		{
			return ((::RPG::Client::GridFightMonsterBattleStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_NORMALMONSTERSTAGEDATA_OFFSET))(this);
		}

		::System::Void set_NormalMonsterStageData(::RPG::Client::GridFightMonsterBattleStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterBattleStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_NORMALMONSTERSTAGEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterBattleStageData* get_PowerfulMonsterStageData()
		{
			return ((::RPG::Client::GridFightMonsterBattleStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_POWERFULMONSTERSTAGEDATA_OFFSET))(this);
		}

		::System::Void set_PowerfulMonsterStageData(::RPG::Client::GridFightMonsterBattleStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterBattleStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_POWERFULMONSTERSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_DifficultyModifyValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_DIFFICULTYMODIFYVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsDiffDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISDIFFDOWN_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_INIT_OFFSET))(this, a1);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void OnModifierUpdate(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnModifierRemove(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ONMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::BEEFLEJAOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEFLEJAOCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdateAffix(::LAAMIAJFOMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAAMIAJFOMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEAFFIX_OFFSET))(this, a1);
		}

		::System::Void UpdateNode(::AINFNFIDGFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AINFNFIDGFF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATENODE_OFFSET))(this, a1);
		}

		::System::Void UpdateStt(::LHLMPOHKPKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHLMPOHKPKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATESTT_OFFSET))(this, a1);
		}

		::System::Void UpdateRouteNode(::BAAGMMIDHDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAAGMMIDHDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_UPDATEROUTENODE_OFFSET))(this, a1);
		}

		::System::Void SyncAllRouteNodes(::LAIKGBIIFIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAIKGBIIFIH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SYNCALLROUTENODES_OFFSET))(this, a1);
		}

		::System::Boolean GetFunctionIsUnlock(::RPG::GameCore::GridFightFunctionNodeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightFunctionNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETFUNCTIONISUNLOCK_OFFSET))(this, a1);
		}

		::System::Void _SyncRouteInfo(::BEEFLEJAOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEFLEJAOCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE__SYNCROUTEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_ROUTEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERID_OFFSET))(this);
		}

		::System::Void set_ChapterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_CHAPTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_SECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChapterAndSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERANDSECTIONID_OFFSET))(this);
		}

		::System::Boolean get_IsBossNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISBOSSNODE_OFFSET))(this);
		}

		::System::Boolean get_ShowHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_SHOWHINT_OFFSET))(this);
		}

		::NCKOKDHNJDC* get_CurNodeInfo()
		{
			return ((::NCKOKDHNJDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODEINFO_OFFSET))(this);
		}

		::System::Void set_CurNodeInfo(::NCKOKDHNJDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCKOKDHNJDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_SET_CURNODEINFO_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> get_CurCampID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURCAMPID_OFFSET))(this);
		}

		::RPG::Client::GridFightStageNode* get_CurNode()
		{
			return ((::RPG::Client::GridFightStageNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CURNODE_OFFSET))(this);
		}

		::RPG::Client::IGridFightStageNode* get_LatestBatteNode()
		{
			return ((::RPG::Client::IGridFightStageNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTBATTENODE_OFFSET))(this);
		}

		::RPG::Client::IGridFightStageNode* get_LatestMonsterNode()
		{
			return ((::RPG::Client::IGridFightStageNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_LATESTMONSTERNODE_OFFSET))(this);
		}

		::System::Int32 get_TotalSectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_TOTALSECTIONCOUNT_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_PROGRESS_OFFSET))(this);
		}

		::System::Int32 get_ChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CHAPTERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsTutorialNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_ISTUTORIALNODE_OFFSET))(this);
		}

		::System::Single GetChapterProgress(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GETCHAPTERPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean IsAffixRemoved(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_ISAFFIXREMOVED_OFFSET))(this, a1);
		}

		::System::UInt32 Distance(::RPG::Client::GridFightStageNode* a1, ::RPG::Client::GridFightStageNode* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightStageNode*, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_DISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>* get_AffixDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterAffixConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_AFFIXDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterCampConfig*>* get_CampDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterCampConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE_GET_CAMPDATALIST_OFFSET))(this);
		}

	};
}
