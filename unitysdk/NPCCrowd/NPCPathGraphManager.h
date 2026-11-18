#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/NPCCrowd/AI/PathGraphShadowOverrideConfig.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager_PathFollowSortKey.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager_PopulationLimitCheckData.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager___c__DisplayClass54_0.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager___c__DisplayClass55_0.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;
class LEDINJOBHCA;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace MonoNotRelateGameLogic { class DynamicCarPlateAssetCfg; }
namespace NPCCrowd::AI { class PathGraphAssetSO; }
namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointRuntime; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphNodeRuntime; }
namespace NPCCrowd::AI { class PathGraphRuntime; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupRuntime; }
namespace NPCCrowd::AI { class PathGraphSplineNodeRuntime_BlockState; }
namespace NPCCrowd::AI { class PathGraphStateRuntime; }
namespace NPCCrowd::AI { class PathSectionAssetSO; }
namespace NPCCrowd::AI { class PathSectionAssetSO_SectionPathData; }
namespace NPCCrowd::AI { class PathStateAssetSO; }
namespace NPCCrowd::AI { class SpawnPointConfig; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCPATHGRAPHMANAGER_APPLYGRAPHRENDERERHIDDEN_OFFSET UNITYSDK_OFFSET(0x15FADC60)
#define NPCCROWD_NPCPATHGRAPHMANAGER_APPLYGRAPHVISIBILITYTONPC_OFFSET UNITYSDK_OFFSET(0x15FAD9A0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_APPLYPENDINGPOPULATIONWEIGHTDISTRIBUTIONREFRESH_OFFSET UNITYSDK_OFFSET(0x15FA9050)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ASSERTNODEENTITYWRITEALLOWED_OFFSET UNITYSDK_OFFSET(0x15FAB3D0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ASSERTNODEPOPULATIONWRITEALLOWED_OFFSET UNITYSDK_OFFSET(0x15FA8DE0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_BEGINSPAWNPOINTJOBREADPHASE_OFFSET UNITYSDK_OFFSET(0x15FAB210)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CHANGEABILITYNODE_1_OFFSET UNITYSDK_OFFSET(0x15FAFC50)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CHANGEABILITYNODE_OFFSET UNITYSDK_OFFSET(0x15FAFBC0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CHECKPATHFOLLOWQUEUE_OFFSET UNITYSDK_OFFSET(0x15FAFB50)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARCARPLATE_OFFSET UNITYSDK_OFFSET(0x15FA7BA0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARGRAPHNPCHIDDENSTATE_OFFSET UNITYSDK_OFFSET(0x15FAE0A0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARGRAPHNPCHIDDEN_OFFSET UNITYSDK_OFFSET(0x15FADE50)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARGRAPHVISIBILITYSTATE_1_OFFSET UNITYSDK_OFFSET(0x15FA8B40)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARGRAPHVISIBILITYSTATE_OFFSET UNITYSDK_OFFSET(0x15FABCF0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHFOLLOWSORTKEYS_OFFSET UNITYSDK_OFFSET(0x15FA8E20)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPHSTATE_1_OFFSET UNITYSDK_OFFSET(0x15FA77E0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0x15FB3320)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPH_1_OFFSET UNITYSDK_OFFSET(0x15FA7290)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPH_OFFSET UNITYSDK_OFFSET(0x15FA8AB0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_COLLECTNODELOADMAXFACTORS_OFFSET UNITYSDK_OFFSET(0x15FAA360)
#define NPCCROWD_NPCPATHGRAPHMANAGER_COLLECTNODEPOPULATIONWEIGHTS_OFFSET UNITYSDK_OFFSET(0x15FAA080)
#define NPCCROWD_NPCPATHGRAPHMANAGER_COMPAREPATHFOLLOWSORTKEY_OFFSET UNITYSDK_OFFSET(0x15FAF680)
#define NPCCROWD_NPCPATHGRAPHMANAGER_COMPLETEGRAPHNPCHIDE_OFFSET UNITYSDK_OFFSET(0x15FAD250)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ENABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x15FAB9B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ENDSPAWNPOINTJOBREADPHASE_OFFSET UNITYSDK_OFFSET(0x15FAB380)
#define NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATHDYNAMIC_OFFSET UNITYSDK_OFFSET(0x15FB3B30)
#define NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATH_OFFSET UNITYSDK_OFFSET(0x15FB3960)
#define NPCCROWD_NPCPATHGRAPHMANAGER_FINDSECTIONPATHDATA_OFFSET UNITYSDK_OFFSET(0x15FA6970)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETALLNODEPOINT_OFFSET UNITYSDK_OFFSET(0x15FB4360)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETALLSPLINENODE_OFFSET UNITYSDK_OFFSET(0x15FB3E80)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0x15FB2990)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0x15FB2A60)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTPATHS_OFFSET UNITYSDK_OFFSET(0x15FAE3D0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0x15FB2920)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0x15FB28C0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPHSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0x15FB2AD0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x15FAE430)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETLANEENTITIESCOUNT_OFFSET UNITYSDK_OFFSET(0x15FB17A0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEBLACKTAGQUERY_OFFSET UNITYSDK_OFFSET(0x15FB2370)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIESCOUNT_OFFSET UNITYSDK_OFFSET(0x15FB1220)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIESFORSPAWNPOINTJOB_OFFSET UNITYSDK_OFFSET(0x15FB0BE0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIES_OFFSET UNITYSDK_OFFSET(0x15FB07D0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODELANEWEIGHT_OFFSET UNITYSDK_OFFSET(0x15FB26C0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEPOPULATIONDATA_OFFSET UNITYSDK_OFFSET(0x15FAB560)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODE_OFFSET UNITYSDK_OFFSET(0x15FAE640)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETPOPULATIONIDFORNODETRACKING_OFFSET UNITYSDK_OFFSET(0x15FAED00)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETPOPULATIONLIMITCHECKDATAFORSPAWNPOINTJOB_OFFSET UNITYSDK_OFFSET(0x15FAB1A0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETPOPULATIONLIMITCHECKDATALOCKFREE_OFFSET UNITYSDK_OFFSET(0x15FAAFE0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETPOPULATIONLIMITCHECKDATA_OFFSET UNITYSDK_OFFSET(0x15FAAEC0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0x15FB2A00)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETSPAWNPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x15FAB500)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GET_CARPLATECFG_OFFSET UNITYSDK_OFFSET(0x15FA7CA0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GET_GRAPHSO_OFFSET UNITYSDK_OFFSET(0x15FA7C30)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x15FA65C0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GM_SWITCHTRAFFICSTATE_OFFSET UNITYSDK_OFFSET(0x15FB3D20)
#define NPCCROWD_NPCPATHGRAPHMANAGER_HIDEGRAPHNPCS_OFFSET UNITYSDK_OFFSET(0x15FAC670)
#define NPCCROWD_NPCPATHGRAPHMANAGER_HIDEGRAPHNPC_OFFSET UNITYSDK_OFFSET(0x15FACFA0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_INITCARPLATE_OFFSET UNITYSDK_OFFSET(0x15FA7EE0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_INITPATHGRAPH_OFFSET UNITYSDK_OFFSET(0x15FA83F0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ISCURRENTGRAPHVERSION_OFFSET UNITYSDK_OFFSET(0x15FA7C40)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ISGRAPHVISIBLE_OFFSET UNITYSDK_OFFSET(0x15FABF70)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ISPOPULATIONWEIGHTLIMITENABLED_OFFSET UNITYSDK_OFFSET(0x15FAB410)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONCROWDENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x15FADFF0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15FA7050)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONPATHBLOCKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x15FB3E10)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x15FA6AC0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONTRAFFICCHANGE_OFFSET UNITYSDK_OFFSET(0x15FB3CD0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANECOUNTVALID_1_OFFSET UNITYSDK_OFFSET(0x15FB1DA0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANECOUNTVALID_OFFSET UNITYSDK_OFFSET(0x15FB1B90)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANETAGVALID_OFFSET UNITYSDK_OFFSET(0x15FB1FD0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0x15FB30B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITSPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0x15FB3870)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FB38D0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x15FA6830)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PRESERVEPOPULATIONCOUNTS_OFFSET UNITYSDK_OFFSET(0x15FAA650)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REAPPLYGRAPHVISIBILITYTONPC_OFFSET UNITYSDK_OFFSET(0x15FADDB0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPATHGRAPH_OFFSET UNITYSDK_OFFSET(0x15FA8920)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPOPULATIONWEIGHTDISTRIBUTIONLOCKED_OFFSET UNITYSDK_OFFSET(0x15FA9140)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPOPULATIONWEIGHTDISTRIBUTION_OFFSET UNITYSDK_OFFSET(0x15FA8F70)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REGISTERABILITYIDXINNODELOCKED_OFFSET UNITYSDK_OFFSET(0x15FAEE80)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REGISTERABILITYIDXINNODE_OFFSET UNITYSDK_OFFSET(0x15FAEB70)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REMOVEGRAPHVISIBILITYNPCRECORD_OFFSET UNITYSDK_OFFSET(0x15FAD670)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REMOVEPATHFOLLOWSORTKEY_OFFSET UNITYSDK_OFFSET(0x15FAF580)
#define NPCCROWD_NPCPATHGRAPHMANAGER_RESTOREGRAPHNPCS_OFFSET UNITYSDK_OFFSET(0x15FABFE0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETENABLEDGRAPH_OFFSET UNITYSDK_OFFSET(0x15FAB820)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETGRAPHNPCHIDDEN_OFFSET UNITYSDK_OFFSET(0x15FAD8C0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETGRAPHVISIBILITY_OFFSET UNITYSDK_OFFSET(0x15FABE60)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_1_OFFSET UNITYSDK_OFFSET(0x15FAE8A0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_OFFSET UNITYSDK_OFFSET(0x15FAE830)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_1_OFFSET UNITYSDK_OFFSET(0x15FAEA70)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_OFFSET UNITYSDK_OFFSET(0x15FAEA00)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0x15FB2B30)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x15FA6740)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETGRAPHSHADOWOVERRIDE_OFFSET UNITYSDK_OFFSET(0x15FAE5B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETPOPULATIONID_OFFSET UNITYSDK_OFFSET(0x15FB0530)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETPREVIOUSENTITYINNODE_OFFSET UNITYSDK_OFFSET(0x15FB0F10)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYLOADSECTIONCARPLATEDATA_OFFSET UNITYSDK_OFFSET(0x15FA7CB0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYLOADSECTIONPATHDATA_OFFSET UNITYSDK_OFFSET(0x15FA7F70)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UNREGISTERABILITYIDXINNODELOCKED_OFFSET UNITYSDK_OFFSET(0x15FAFF90)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UNREGISTERABILITYIDXINNODE_OFFSET UNITYSDK_OFFSET(0x15FB03C0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UPDATECROSSINGFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0x15FB33B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UPDATENODEPOPULATIONCOUNTIFENABLED_OFFSET UNITYSDK_OFFSET(0x15FAF230)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UPDATENODEPOPULATIONCOUNTLOCKED_OFFSET UNITYSDK_OFFSET(0x15FB01A0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UPDATEPATHFOLLOWSORTKEY_OFFSET UNITYSDK_OFFSET(0x15FAF3A0)
#define NPCCROWD_NPCPATHGRAPHMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FB4EE0)
#define NPCCROWD_NPCPATHGRAPHMANAGER__COLLECTNODELOADMAXFACTORS_G__ADDGROUP_54_0_OFFSET UNITYSDK_OFFSET(0x15FAAA20)
#define NPCCROWD_NPCPATHGRAPHMANAGER__COLLECTNODEPOPULATIONWEIGHTS_G__ADDGROUP_55_0_OFFSET UNITYSDK_OFFSET(0x15FAAAE0)
#define NPCCROWD_NPCPATHGRAPHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB4C10)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15FB4F20)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x15FB4FB0)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FB5040)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x15FB50E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPathGraphManager_TypeDefinitionIndex = 71329;

	class NPCPathGraphManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::String** StaticGet_SectionDataPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCPathGraphManager_TypeDefinitionIndex)->GetStaticField(0x4EEA0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__sectionAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCPathGraphManager_TypeDefinitionIndex)->GetStaticField(0x4EEA8);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__nodeEntitiesTemp()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCPathGraphManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::String* GraphVisibilityRenderTag; // 0x0
		::System::Object* _nodeEntityLock; // 0x18
		::NPCCrowd::AI::PathSectionAssetSO* _sectionAssetSo; // 0x20
		::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg* _carPlateCfg; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _graphEntityIDsCache; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathGraphRuntime*>* _disabledGraphRuntimeDict; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _nodePopulationData; // 0x40
		::Foundation::AssetRequestHandle _carPlateHandle; // 0x48
		::NPCCrowd::AI::PathStateAssetSO* _stateSo; // 0x68
		::Foundation::AssetRequestHandle _stateHandle; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>*>* _node2EntityIDs; // 0x90
		::Foundation::AssetRequestHandle _graphHandle; // 0x98
		::System::Object* _nodePopulationLock; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _graphVisibilityNpcIDs; // 0xC0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _hiddenGraphIDs; // 0xC8
		::System::Object* _pathFollowSortKeyLock; // 0xD0
		::NPCCrowd::AI::PathGraphStateRuntime* _stateRuntime; // 0xD8
		::NPCCrowd::AI::PathGraphAssetSO* _graphSo; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathGraphRuntime*>* _graphRuntimeDict; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _pathFollowSortKeys; // 0xF0
		::System::Collections::Generic::List_1<::System::Object*>* _cachedSectionPathGraphs; // 0xF8
		::System::Int32 _graphVersionID; // 0x100
		::System::Int32 _graphSectionID; // 0x104
		::System::Int32 _carPlateSectionID; // 0x108
		::System::Int32 _spawnPointJobReadPhase; // 0x10C
		::System::Boolean _populationWeightDistributionRefreshPending; // 0x110
		::System::Boolean _usePopulationWeightLimit; // 0x111
		::System::Byte _padding0[0x2];
		::System::Int32 _stateID; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::NPCPathGraphManager* Get()
		{
			return ((::NPCCrowd::NPCPathGraphManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::NPCCrowd::AI::PathSectionAssetSO_SectionPathData* FindSectionPathData(::System::Int32 sectionID)
		{
			return ((::NPCCrowd::AI::PathSectionAssetSO_SectionPathData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_FINDSECTIONPATHDATA_OFFSET))(this, sectionID);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONDESTROY_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphAssetSO* get_GraphSo()
		{
			return ((::NPCCrowd::AI::PathGraphAssetSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GET_GRAPHSO_OFFSET))(this);
		}

		::System::Boolean IsCurrentGraphVersion(::System::Int32 version)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ISCURRENTGRAPHVERSION_OFFSET))(this, version);
		}

		::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg* get_CarPlateCfg()
		{
			return ((::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GET_CARPLATECFG_OFFSET))(this);
		}

		::System::Void TryLoadSectionCarPlateData(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_TRYLOADSECTIONCARPLATEDATA_OFFSET))(this, sectionID);
		}

		::System::Int32 TryLoadSectionPathData(::System::Int32 sectionID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_TRYLOADSECTIONPATHDATA_OFFSET))(this, sectionID);
		}

		::System::Void InitPathGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_INITPATHGRAPH_OFFSET))(this);
		}

		::System::Void RefreshPathGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPATHGRAPH_OFFSET))(this);
		}

		::System::Void ClearPathGraph(::System::Int32 version)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPH_OFFSET))(this, version);
		}

		::System::Void ClearPathGraph_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPH_1_OFFSET))(this);
		}

		::System::Void RefreshPopulationWeightDistribution()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPOPULATIONWEIGHTDISTRIBUTION_OFFSET))(this);
		}

		::System::Void ApplyPendingPopulationWeightDistributionRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_APPLYPENDINGPOPULATIONWEIGHTDISTRIBUTIONREFRESH_OFFSET))(this);
		}

		::System::Void RefreshPopulationWeightDistributionLocked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPOPULATIONWEIGHTDISTRIBUTIONLOCKED_OFFSET))(this);
		}

		static ::System::Void PreservePopulationCounts(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* oldData, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* newData)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PRESERVEPOPULATIONCOUNTS_OFFSET))(oldData, newData);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* CollectNodeLoadMaxFactors(::NPCCrowd::AI::SpawnPointConfig* spawnPoints)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID, ::NPCCrowd::AI::SpawnPointConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_COLLECTNODELOADMAXFACTORS_OFFSET))(this, spawnPoints);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* CollectNodePopulationWeights(::NPCCrowd::AI::SpawnPointConfig* spawnPoints)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*(*)(::PVOID, ::NPCCrowd::AI::SpawnPointConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_COLLECTNODEPOPULATIONWEIGHTS_OFFSET))(this, spawnPoints);
		}

		::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData GetPopulationLimitCheckData(::System::Int32 populationNode, ::System::Int32 populationId, ::System::Int32 loadNode)
		{
			return ((::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETPOPULATIONLIMITCHECKDATA_OFFSET))(this, populationNode, populationId, loadNode);
		}

		::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData GetPopulationLimitCheckDataForSpawnPointJob(::System::Int32 populationNode, ::System::Int32 populationId, ::System::Int32 loadNode)
		{
			return ((::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETPOPULATIONLIMITCHECKDATAFORSPAWNPOINTJOB_OFFSET))(this, populationNode, populationId, loadNode);
		}

		::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData GetPopulationLimitCheckDataLockFree(::System::Int32 populationNode, ::System::Int32 populationId, ::System::Int32 loadNode)
		{
			return ((::NPCCrowd::NPCPathGraphManager_PopulationLimitCheckData(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETPOPULATIONLIMITCHECKDATALOCKFREE_OFFSET))(this, populationNode, populationId, loadNode);
		}

		::System::Void BeginSpawnPointJobReadPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_BEGINSPAWNPOINTJOBREADPHASE_OFFSET))(this);
		}

		::System::Void EndSpawnPointJobReadPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ENDSPAWNPOINTJOBREADPHASE_OFFSET))(this);
		}

		::System::Void AssertNodeEntityWriteAllowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ASSERTNODEENTITYWRITEALLOWED_OFFSET))(this);
		}

		::System::Void AssertNodePopulationWriteAllowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ASSERTNODEPOPULATIONWRITEALLOWED_OFFSET))(this);
		}

		::System::Boolean IsPopulationWeightLimitEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ISPOPULATIONWEIGHTLIMITENABLED_OFFSET))(this);
		}

		::NPCCrowd::AI::SpawnPointConfig* GetSpawnPointConfig()
		{
			return ((::NPCCrowd::AI::SpawnPointConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETSPAWNPOINTCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GetNodePopulationData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEPOPULATIONDATA_OFFSET))(this);
		}

		::System::Void SetEnabledGraph(::System::Collections::Generic::List_1<::System::Int32>* enabledGraph)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETENABLEDGRAPH_OFFSET))(this, enabledGraph);
		}

		::System::Void EnableGraph(::System::Int32 graphID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ENABLEGRAPH_OFFSET))(this, graphID, enable);
		}

		::System::Void SetGraphVisibility(::System::Int32 graphID, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETGRAPHVISIBILITY_OFFSET))(this, graphID, visible);
		}

		::System::Boolean IsGraphVisible(::System::Int32 graphID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ISGRAPHVISIBLE_OFFSET))(this, graphID);
		}

		::System::Void HideGraphNpcs(::System::Int32 graphID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_HIDEGRAPHNPCS_OFFSET))(this, graphID);
		}

		::System::Void HideGraphNpc(::System::Int32 graphID, ::COCJHGGDBCA* npcComp, ::System::Collections::Generic::HashSet_1<::System::UInt32>* npcIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::COCJHGGDBCA*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_HIDEGRAPHNPC_OFFSET))(this, graphID, npcComp, npcIDs);
		}

		::System::Void CompleteGraphNpcHide(::System::Int32 graphID, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_COMPLETEGRAPHNPCHIDE_OFFSET))(this, graphID, entityID);
		}

		::System::Void ApplyGraphVisibilityToNpc(::System::Int32 graphID, ::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_APPLYGRAPHVISIBILITYTONPC_OFFSET))(this, graphID, npcComp);
		}

		static ::System::Void SetGraphNpcHidden(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETGRAPHNPCHIDDEN_OFFSET))(npcComp);
		}

		::System::Void ReapplyGraphVisibilityToNpc(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REAPPLYGRAPHVISIBILITYTONPC_OFFSET))(this, npcComp);
		}

		static ::System::Void ApplyGraphRendererHidden(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_APPLYGRAPHRENDERERHIDDEN_OFFSET))(npcComp);
		}

		static ::System::Void ClearGraphNpcHidden(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARGRAPHNPCHIDDEN_OFFSET))(npcComp);
		}

		::System::Void RestoreGraphNpcs(::System::Int32 graphID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_RESTOREGRAPHNPCS_OFFSET))(this, graphID);
		}

		::System::Void OnCrowdEntityRemove(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONCROWDENTITYREMOVE_OFFSET))(this, npcComp);
		}

		::System::Boolean RemoveGraphVisibilityNpcRecord(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REMOVEGRAPHVISIBILITYNPCRECORD_OFFSET))(this, entityID);
		}

		::System::Void ClearGraphVisibilityState(::System::Int32 graphID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARGRAPHVISIBILITYSTATE_OFFSET))(this, graphID);
		}

		::System::Void ClearGraphVisibilityState_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARGRAPHVISIBILITYSTATE_1_OFFSET))(this);
		}

		static ::System::Void ClearGraphNpcHiddenState(::System::Collections::Generic::HashSet_1<::System::UInt32>* npcIDs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARGRAPHNPCHIDDENSTATE_OFFSET))(npcIDs);
		}

		::System::Void GetFeaturePointPaths(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>*& featurePointPaths)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTPATHS_OFFSET))(this, featurePointPaths);
		}

		::NPCCrowd::AI::PathGraphRuntime* GetGraph(::System::Int32 graphID)
		{
			return ((::NPCCrowd::AI::PathGraphRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPH_OFFSET))(this, graphID);
		}

		::System::Boolean TryGetGraphShadowOverride(::System::Int32 graphID, ::NPCCrowd::AI::PathGraphShadowOverrideConfig& shadowOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::PathGraphShadowOverrideConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETGRAPHSHADOWOVERRIDE_OFFSET))(this, graphID, shadowOverride);
		}

		::NPCCrowd::AI::PathGraphNodeRuntime* GetNode(::System::Int32 nodeID)
		{
			return ((::NPCCrowd::AI::PathGraphNodeRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODE_OFFSET))(this, nodeID);
		}

		::System::Void SetNodeData(::System::Int32 nodeID, ::LEDINJOBHCA* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::LEDINJOBHCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_OFFSET))(this, nodeID, config);
		}

		::System::Void SetNodeData_1(::NPCCrowd::AI::PathGraphNodeRuntime* node, ::LEDINJOBHCA* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphNodeRuntime*, ::LEDINJOBHCA*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_1_OFFSET))(this, node, config);
		}

		::System::Void SetNodeEnable(::System::Int32 nodeID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_OFFSET))(this, nodeID, enable);
		}

		::System::Void SetNodeEnable_1(::NPCCrowd::AI::PathGraphNodeRuntime* node, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphNodeRuntime*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_1_OFFSET))(this, node, enable);
		}

		::System::Void RegisterAbilityIdxInNode(::System::Int32 node, ::System::Int32 laneIdx, ::System::UInt32 entityID, ::System::Boolean sort)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REGISTERABILITYIDXINNODE_OFFSET))(this, node, laneIdx, entityID, sort);
		}

		::System::Void UpdatePathFollowSortKey(::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_UPDATEPATHFOLLOWSORTKEY_OFFSET))(this, entityID, pathFollow);
		}

		::System::Void RemovePathFollowSortKey(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REMOVEPATHFOLLOWSORTKEY_OFFSET))(this, entityID);
		}

		::System::Int32 ComparePathFollowSortKey(::System::UInt32 entityA, ::System::UInt32 entityB)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_COMPAREPATHFOLLOWSORTKEY_OFFSET))(this, entityA, entityB);
		}

		static ::System::Boolean CheckPathFollowQueue(::NPCCrowd::NPCPathGraphManager_PathFollowSortKey& p1, ::NPCCrowd::NPCPathGraphManager_PathFollowSortKey& p2)
		{
			return ((::System::Boolean(*)(::NPCCrowd::NPCPathGraphManager_PathFollowSortKey&, ::NPCCrowd::NPCPathGraphManager_PathFollowSortKey&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CHECKPATHFOLLOWQUEUE_OFFSET))(p1, p2);
		}

		::System::Void ClearPathFollowSortKeys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHFOLLOWSORTKEYS_OFFSET))(this);
		}

		::System::Void ChangeAbilityNode(::System::Int32 oldNode, ::System::Int32 newNode, ::System::Int32 laneIdx, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CHANGEABILITYNODE_OFFSET))(this, oldNode, newNode, laneIdx, entityID);
		}

		::System::Void ChangeAbilityNode_1(::System::Int32 oldNode, ::System::Int32 newNode, ::System::Int32 laneIdx, ::System::UInt32 entityID, ::System::Int32 populationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CHANGEABILITYNODE_1_OFFSET))(this, oldNode, newNode, laneIdx, entityID, populationId);
		}

		::System::Boolean RegisterAbilityIdxInNodeLocked(::System::Int32 node, ::System::Int32 laneIdx, ::System::UInt32 entityID, ::System::Boolean sort)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REGISTERABILITYIDXINNODELOCKED_OFFSET))(this, node, laneIdx, entityID, sort);
		}

		::System::Void UnRegisterAbilityIdxInNode(::System::Int32 node, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_UNREGISTERABILITYIDXINNODE_OFFSET))(this, node, entityID);
		}

		::System::Boolean UnRegisterAbilityIdxInNodeLocked(::System::Int32 node, ::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_UNREGISTERABILITYIDXINNODELOCKED_OFFSET))(this, node, entityID);
		}

		::System::Int32 GetPopulationIdForNodeTracking(::System::UInt32 entityID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETPOPULATIONIDFORNODETRACKING_OFFSET))(this, entityID);
		}

		::System::Void UpdateNodePopulationCountIfEnabled(::System::Int32 node, ::System::Int32 populationId, ::System::Int32 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_UPDATENODEPOPULATIONCOUNTIFENABLED_OFFSET))(this, node, populationId, delta);
		}

		::System::Void UpdateNodePopulationCountLocked(::System::Int32 node, ::System::Int32 populationId, ::System::Int32 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_UPDATENODEPOPULATIONCOUNTLOCKED_OFFSET))(this, node, populationId, delta);
		}

		::System::Boolean TryGetPopulationId(::System::UInt32 entityID, ::System::Int32& populationId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETPOPULATIONID_OFFSET))(this, entityID, populationId);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNodeEntities(::System::Int32 node)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIES_OFFSET))(this, node);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNodeEntitiesForSpawnPointJob(::System::Int32 node)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIESFORSPAWNPOINTJOB_OFFSET))(this, node);
		}

		::System::Boolean TryGetPreviousEntityInNode(::System::Int32 node, ::System::Int32 laneIdx, ::System::UInt32 entityID, ::System::UInt32& previousEntity, ::System::Boolean& hasPrevious)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETPREVIOUSENTITYINNODE_OFFSET))(this, node, laneIdx, entityID, previousEntity, hasPrevious);
		}

		::System::Int32 GetNodeEntitiesCount(::System::Int32 node, ::System::Boolean needLock)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIESCOUNT_OFFSET))(this, node, needLock);
		}

		::System::Int32 GetLaneEntitiesCount(::System::Int32 node, ::System::Int32 laneIdx, ::System::Boolean needLock)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETLANEENTITIESCOUNT_OFFSET))(this, node, laneIdx, needLock);
		}

		::System::Boolean PathLaneCountValid(::System::Int32 node, ::System::Int32 laneIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANECOUNTVALID_OFFSET))(this, node, laneIdx);
		}

		::System::Boolean PathLaneCountValid_1(::System::Int32 node, ::System::Int32 laneIdx, ::System::Boolean usePopulationWeightLimit, ::System::Int32 nodeLoadMax, ::System::Boolean useSpawnPointJobLockFreeRead)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANECOUNTVALID_1_OFFSET))(this, node, laneIdx, usePopulationWeightLimit, nodeLoadMax, useSpawnPointJobLockFreeRead);
		}

		::System::Boolean PathLaneTagValid(::System::Int32 node, ::Foundation::Unreal::FGameplayTagContainer tags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANETAGVALID_OFFSET))(this, node, tags);
		}

		::System::Boolean GetNodeBlackTagQuery(::System::Int32 node, ::Foundation::Unreal::FGameplayTagQuery*& query)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagQuery*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEBLACKTAGQUERY_OFFSET))(this, node, query);
		}

		::System::Single GetNodeLaneWeight(::System::Int32 node, ::System::Int32 laneIdx)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODELANEWEIGHT_OFFSET))(this, node, laneIdx);
		}

		::NPCCrowd::AI::PathGraphFeaturePointRuntime* GetFeaturePoint(::System::Int32 pointID)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINT_OFFSET))(this, pointID);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>* GetFeaturePoints(::System::ValueTuple_2<::System::Int32, ::System::Int32> pointID)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTS_OFFSET))(this, pointID);
		}

		::NPCCrowd::AI::PathGraphFeaturePointRuntime* GetExportFeaturePoint(::System::String* key)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointRuntime*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTFEATUREPOINT_OFFSET))(this, key);
		}

		::NPCCrowd::AI::PathGraphSpawnGroupRuntime* GetSpawnGroup(::System::Int32 groupID)
		{
			return ((::NPCCrowd::AI::PathGraphSpawnGroupRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETSPAWNGROUP_OFFSET))(this, groupID);
		}

		::NPCCrowd::AI::PathGraphSpawnGroupRuntime* GetExportSpawnGroup(::System::String* key)
		{
			return ((::NPCCrowd::AI::PathGraphSpawnGroupRuntime*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTSPAWNGROUP_OFFSET))(this, key);
		}

		::System::Int32 GetGraphSpawnedNpcCount(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPHSPAWNEDNPCCOUNT_OFFSET))(this, graphID);
		}

		::System::Void SetPathGraphState(::System::Int32 stateID, ::System::Boolean doPost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETPATHGRAPHSTATE_OFFSET))(this, stateID, doPost);
		}

		::System::Void ClearPathGraphState(::System::Int32 version)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPHSTATE_OFFSET))(this, version);
		}

		::System::Void ClearPathGraphState_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPHSTATE_1_OFFSET))(this);
		}

		::System::Void PostInitPathGraphState(::System::Boolean spawnInitNPC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITPATHGRAPHSTATE_OFFSET))(this, spawnInitNPC);
		}

		::System::Void PostInitSpawnGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITSPAWNGROUPS_OFFSET))(this);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* FindPath(::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig)
		{
			return ((::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*(*)(::PVOID, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATH_OFFSET))(this, pathConfig);
		}

		::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* FindPathDynamic(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>* pointList)
		{
			return ((::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATHDYNAMIC_OFFSET))(this, pointList);
		}

		::System::Void OnTrafficChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONTRAFFICCHANGE_OFFSET))(this, args);
		}

		::System::Void UpdateCrossingFeaturePoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_UPDATECROSSINGFEATUREPOINTS_OFFSET))(this);
		}

		::System::Void GM_SwitchTrafficState(::System::Int32 featurePointID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GM_SWITCHTRAFFICSTATE_OFFSET))(this, featurePointID);
		}

		::System::Void OnPathBlockStateChanged(::System::Int32 pathID, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONPATHBLOCKSTATECHANGED_OFFSET))(this, pathID, state);
		}

		::System::Void GetAllSplineNode(::System::Collections::Generic::List_1<::System::Int32>*& nodes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETALLSPLINENODE_OFFSET))(this, nodes);
		}

		::System::Void GetAllNodePoint(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& endPoints, ::System::Collections::Generic::List_1<::System::Int32>*& nodes, ::System::Boolean excludeStair, ::System::Boolean excludeSkyWay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETALLNODEPOINT_OFFSET))(this, endPoints, nodes, excludeStair, excludeSkyWay);
		}

		::System::Void InitCarPlate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_INITCARPLATE_OFFSET))(this);
		}

		::System::Void ClearCarPlate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARCARPLATE_OFFSET))(this);
		}

		::System::Void _CollectNodeLoadMaxFactors_g__AddGroup_54_0(::NPCCrowd::AI::SpawnPointGroup* group, ::NPCCrowd::NPCPathGraphManager___c__DisplayClass54_0& param_1)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPointGroup*, ::NPCCrowd::NPCPathGraphManager___c__DisplayClass54_0&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER__COLLECTNODELOADMAXFACTORS_G__ADDGROUP_54_0_OFFSET))(this, group, param_1);
		}

		::System::Void _CollectNodePopulationWeights_g__AddGroup_55_0(::NPCCrowd::AI::SpawnPointGroup* group, ::NPCCrowd::NPCPathGraphManager___c__DisplayClass55_0& param_1)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPointGroup*, ::NPCCrowd::NPCPathGraphManager___c__DisplayClass55_0&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER__COLLECTNODEPOPULATIONWEIGHTS_G__ADDGROUP_55_0_OFFSET))(this, group, param_1);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PreLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___BASE_PRELATEUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
