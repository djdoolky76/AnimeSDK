#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/NPCCrowd/NPCPerformanceManager_EControlPhase.h"
#include "unitysdk/cfg/SceneSizeType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EGOJNNIFDJJ;
class GKMJINDLJMI;
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace NPCCrowd { class NPCAreaScoreTracker; }
namespace NPCCrowd { class NPCCullEventLogger; }
namespace NPCCrowd { class NPCCullScheduler; }
namespace NPCCrowd { class NPCDensityController; }
namespace NPCCrowd { class NPCDevicePerformanceConfigSO; }
namespace NPCCrowd { class NPCPerformanceConfigSO; }
namespace NPCCrowd { class NPCPerformanceScoreTable; }
namespace NPCCrowd { class NPCQuotaManager; }
namespace NPCCrowd { class NPCRegistry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define NPCCROWD_NPCPERFORMANCEMANAGER_ABORTPOLLINGCYCLE_OFFSET UNITYSDK_OFFSET(0x114D89D0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_ADVANCECONTROLPHASE_OFFSET UNITYSDK_OFFSET(0x114D8540)
#define NPCCROWD_NPCPERFORMANCEMANAGER_APPLYSEVEREOVERBUDGETSPAWNCONTROL_OFFSET UNITYSDK_OFFSET(0x114DA070)
#define NPCCROWD_NPCPERFORMANCEMANAGER_BEGINPOLLINGCYCLE_OFFSET UNITYSDK_OFFSET(0x114D8CE0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_EXITSEVEREOVERBUDGETSTATE_OFFSET UNITYSDK_OFFSET(0x114D66F0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_FORCECULLONE_OFFSET UNITYSDK_OFFSET(0x114D6AD0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_FORCECULLTOCOMPLIANCEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x114D6B30)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GETCACHEDORFINDMEMBERCOMPONENT_OFFSET UNITYSDK_OFFSET(0x114D9CD0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GETEFFECTIVEPOLLINGGROUPSPERFRAME_OFFSET UNITYSDK_OFFSET(0x114D8F20)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GETNPCCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x114DA250)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GETPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x114D6FA0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GETPOPULATIONRATIO_OFFSET UNITYSDK_OFFSET(0x114DA580)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_AREASCORETRACKER_OFFSET UNITYSDK_OFFSET(0x114D5D60)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x114D5DA0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_CULLEVENTLOGGER_OFFSET UNITYSDK_OFFSET(0x114D5D80)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_CULLSCHEDULER_OFFSET UNITYSDK_OFFSET(0x114D5D00)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_DENSITYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x114D5D20)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x114D6020)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_LASTMEMBERRESOLVEATTEMPTS_OFFSET UNITYSDK_OFFSET(0x114D5E00)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_LASTMEMBERRESOLVEHITRATE_OFFSET UNITYSDK_OFFSET(0x114D5E40)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_LASTMEMBERRESOLVEHITS_OFFSET UNITYSDK_OFFSET(0x114D5E20)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x114D7030)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_QUOTAMANAGER_OFFSET UNITYSDK_OFFSET(0x114D5CE0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_REGISTRY_OFFSET UNITYSDK_OFFSET(0x114D5CC0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_RUNTIMEENABLED_OFFSET UNITYSDK_OFFSET(0x114D5EA0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_RUNTIMEFLOORENABLED_OFFSET UNITYSDK_OFFSET(0x114D5F60)
#define NPCCROWD_NPCPERFORMANCEMANAGER_GET_SCORETABLE_OFFSET UNITYSDK_OFFSET(0x114D5D40)
#define NPCCROWD_NPCPERFORMANCEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x114D7580)
#define NPCCROWD_NPCPERFORMANCEMANAGER_LOADSCOREDATA_OFFSET UNITYSDK_OFFSET(0x114D79F0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x114D9E10)
#define NPCCROWD_NPCPERFORMANCEMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x114D73A0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_PROCESSPOLLINGGROUP_OFFSET UNITYSDK_OFFSET(0x114D9010)
#define NPCCROWD_NPCPERFORMANCEMANAGER_PRUNEBUILDERCACHE_OFFSET UNITYSDK_OFFSET(0x114D9930)
#define NPCCROWD_NPCPERFORMANCEMANAGER_REFRESHRUNTIMEFLOORENABLED_OFFSET UNITYSDK_OFFSET(0x114D87B0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_RESETPOLLINGCYCLE_OFFSET UNITYSDK_OFFSET(0x114D9C30)
#define NPCCROWD_NPCPERFORMANCEMANAGER_RESTOREALLBACKSTAGENPCS_OFFSET UNITYSDK_OFFSET(0x114D67E0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SETENABLED_OFFSET UNITYSDK_OFFSET(0x114D62B0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_AREASCORETRACKER_OFFSET UNITYSDK_OFFSET(0x114D5D70)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_CULLEVENTLOGGER_OFFSET UNITYSDK_OFFSET(0x114D5D90)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_CULLSCHEDULER_OFFSET UNITYSDK_OFFSET(0x114D5D10)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_DENSITYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x114D5D30)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_LASTMEMBERRESOLVEATTEMPTS_OFFSET UNITYSDK_OFFSET(0x114D5E10)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_LASTMEMBERRESOLVEHITS_OFFSET UNITYSDK_OFFSET(0x114D5E30)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_QUOTAMANAGER_OFFSET UNITYSDK_OFFSET(0x114D5CF0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_REGISTRY_OFFSET UNITYSDK_OFFSET(0x114D5CD0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_RUNTIMEENABLED_OFFSET UNITYSDK_OFFSET(0x114D5F00)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_RUNTIMEFLOORENABLED_OFFSET UNITYSDK_OFFSET(0x114D5FC0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SET_SCORETABLE_OFFSET UNITYSDK_OFFSET(0x114D5D50)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SHOULDDISABLEMONORENDERENTITYFORCROWD_OFFSET UNITYSDK_OFFSET(0x114D71B0)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x114D7360)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SYNCPERFORMANCESTATEBYPOLLING_OFFSET UNITYSDK_OFFSET(0x114D8060)
#define NPCCROWD_NPCPERFORMANCEMANAGER_SYNCREALTIMECROWDCOUNTFORSCORE_OFFSET UNITYSDK_OFFSET(0x114D6E70)
#define NPCCROWD_NPCPERFORMANCEMANAGER_UPDATESEVEREOVERBUDGETCONTROL_OFFSET UNITYSDK_OFFSET(0x114D8590)
#define NPCCROWD_NPCPERFORMANCEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x114D7CB0)
#define NPCCROWD_NPCPERFORMANCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x114DAA30)
#define NPCCROWD_NPCPERFORMANCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x114DA890)
#define NPCCROWD_NPCPERFORMANCEMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x114DAA90)
#define NPCCROWD_NPCPERFORMANCEMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x114DAB20)
#define NPCCROWD_NPCPERFORMANCEMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x114DABB0)
#define NPCCROWD_NPCPERFORMANCEMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x114DAC40)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPerformanceManager_TypeDefinitionIndex = 67153;

	class NPCPerformanceManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::String** StaticGet_NewConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x49510);
		}
		static ::UnityEngine::TextAsset** StaticGet__scoreDataAsset()
		{
			return (::UnityEngine::TextAsset**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x49518);
		}
		static ::System::String** StaticGet_ScoreDataPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x49520);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__newConfigAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x49528);
		}
		static ::System::String** StaticGet_LegacyConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x49548);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__scoreDataAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x49550);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__legacyConfigAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x49570);
		}
		static ::NPCCrowd::NPCPerformanceConfigSO** StaticGet__newConfigSO()
		{
			return (::NPCCrowd::NPCPerformanceConfigSO**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x49590);
		}
		static ::NPCCrowd::NPCDevicePerformanceConfigSO** StaticGet__legacyConfigSO()
		{
			return (::NPCCrowd::NPCDevicePerformanceConfigSO**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x49598);
		}
		static ::System::Boolean* StaticGet__RuntimeEnabled_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x111C0);
		}
		static ::System::Boolean* StaticGet__RuntimeFloorEnabled_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceManager_TypeDefinitionIndex)->GetStaticField(0x111C1);
		}
		::System::Collections::Generic::HashSet_1<::Foundation::ViewObject::ViewObjectHandle>* _builderSeenHandles; // 0x18
		::NPCCrowd::NPCCullEventLogger* _CullEventLogger_k__BackingField; // 0x20
		::NPCCrowd::NPCCullScheduler* _CullScheduler_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* _builderPruneBuffer; // 0x30
		::NPCCrowd::NPCAreaScoreTracker* _AreaScoreTracker_k__BackingField; // 0x38
		::NPCCrowd::NPCPerformanceScoreTable* _ScoreTable_k__BackingField; // 0x40
		::NPCCrowd::NPCQuotaManager* _QuotaManager_k__BackingField; // 0x48
		::NPCCrowd::NPCRegistry* _Registry_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _pollingGroupList; // 0x58
		::System::Collections::Generic::Dictionary_2<::Foundation::ViewObject::ViewObjectHandle, ::GKMJINDLJMI*>* _builderCache; // 0x60
		::NPCCrowd::NPCDensityController* _DensityController_k__BackingField; // 0x68
		::NPCCrowd::NPCPerformanceManager_EControlPhase _controlPhase; // 0x70
		::System::Single _pollingAccumServerNPCVOScore; // 0x74
		::System::Int32 _pollingGroupIndex; // 0x78
		::System::Single _savedNPCLimitRatio; // 0x7C
		::System::Single _pollingAccumGadgetScore; // 0x80
		::System::Int32 _LastMemberResolveAttempts_k__BackingField; // 0x84
		::System::Int32 _memberResolveHitsThisFrame; // 0x88
		::System::Int32 _pollingAccumGadgetCount; // 0x8C
		::System::Single _savedGlobalSpawnInterval; // 0x90
		::System::Int32 _memberResolveAttemptsThisFrame; // 0x94
		::System::Int32 _pollingAccumServerNPCCount; // 0x98
		::System::Single _severeOverBudgetEnterTime; // 0x9C
		::System::Boolean _severeSpawnOverrideApplied; // 0xA0
		::System::Boolean _bPollingCycleActive; // 0xA1
		::System::Byte _padding0[0x2];
		::System::Int32 _LastMemberResolveHits_k__BackingField; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER__CCTOR_OFFSET))();
		}

		::NPCCrowd::NPCRegistry* get_Registry()
		{
			return ((::NPCCrowd::NPCRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_REGISTRY_OFFSET))(this);
		}

		::System::Void set_Registry(::NPCCrowd::NPCRegistry* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCRegistry*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_REGISTRY_OFFSET))(this, value);
		}

		::NPCCrowd::NPCQuotaManager* get_QuotaManager()
		{
			return ((::NPCCrowd::NPCQuotaManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_QUOTAMANAGER_OFFSET))(this);
		}

		::System::Void set_QuotaManager(::NPCCrowd::NPCQuotaManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCQuotaManager*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_QUOTAMANAGER_OFFSET))(this, value);
		}

		::NPCCrowd::NPCCullScheduler* get_CullScheduler()
		{
			return ((::NPCCrowd::NPCCullScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_CULLSCHEDULER_OFFSET))(this);
		}

		::System::Void set_CullScheduler(::NPCCrowd::NPCCullScheduler* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCullScheduler*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_CULLSCHEDULER_OFFSET))(this, value);
		}

		::NPCCrowd::NPCDensityController* get_DensityController()
		{
			return ((::NPCCrowd::NPCDensityController*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_DENSITYCONTROLLER_OFFSET))(this);
		}

		::System::Void set_DensityController(::NPCCrowd::NPCDensityController* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCDensityController*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_DENSITYCONTROLLER_OFFSET))(this, value);
		}

		::NPCCrowd::NPCPerformanceScoreTable* get_ScoreTable()
		{
			return ((::NPCCrowd::NPCPerformanceScoreTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_SCORETABLE_OFFSET))(this);
		}

		::System::Void set_ScoreTable(::NPCCrowd::NPCPerformanceScoreTable* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCPerformanceScoreTable*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_SCORETABLE_OFFSET))(this, value);
		}

		::NPCCrowd::NPCAreaScoreTracker* get_AreaScoreTracker()
		{
			return ((::NPCCrowd::NPCAreaScoreTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_AREASCORETRACKER_OFFSET))(this);
		}

		::System::Void set_AreaScoreTracker(::NPCCrowd::NPCAreaScoreTracker* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCAreaScoreTracker*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_AREASCORETRACKER_OFFSET))(this, value);
		}

		::NPCCrowd::NPCCullEventLogger* get_CullEventLogger()
		{
			return ((::NPCCrowd::NPCCullEventLogger*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_CULLEVENTLOGGER_OFFSET))(this);
		}

		::System::Void set_CullEventLogger(::NPCCrowd::NPCCullEventLogger* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCullEventLogger*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_CULLEVENTLOGGER_OFFSET))(this, value);
		}

		::NPCCrowd::NPCPerformanceConfigSO* get_Config()
		{
			return ((::NPCCrowd::NPCPerformanceConfigSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_CONFIG_OFFSET))(this);
		}

		::System::Int32 get_LastMemberResolveAttempts()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_LASTMEMBERRESOLVEATTEMPTS_OFFSET))(this);
		}

		::System::Void set_LastMemberResolveAttempts(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_LASTMEMBERRESOLVEATTEMPTS_OFFSET))(this, value);
		}

		::System::Int32 get_LastMemberResolveHits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_LASTMEMBERRESOLVEHITS_OFFSET))(this);
		}

		::System::Void set_LastMemberResolveHits(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_LASTMEMBERRESOLVEHITS_OFFSET))(this, value);
		}

		::System::Single get_LastMemberResolveHitRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_LASTMEMBERRESOLVEHITRATE_OFFSET))(this);
		}

		static ::System::Boolean get_RuntimeEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_RUNTIMEENABLED_OFFSET))();
		}

		static ::System::Void set_RuntimeEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_RUNTIMEENABLED_OFFSET))(value);
		}

		static ::System::Boolean get_RuntimeFloorEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_RUNTIMEFLOORENABLED_OFFSET))();
		}

		static ::System::Void set_RuntimeFloorEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SET_RUNTIMEFLOORENABLED_OFFSET))(value);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_ISENABLED_OFFSET))(this);
		}

		::System::Void SetEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SETENABLED_OFFSET))(this, enabled);
		}

		::System::Void RestoreAllBackStageNPCs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_RESTOREALLBACKSTAGENPCS_OFFSET))(this);
		}

		::System::Boolean ForceCullOne()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_FORCECULLONE_OFFSET))(this);
		}

		::System::Boolean ForceCullToComplianceImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_FORCECULLTOCOMPLIANCEIMMEDIATELY_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetPlayerPosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GETPLAYERPOSITION_OFFSET))();
		}

		::System::Void SyncRealtimeCrowdCountForScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SYNCREALTIMECROWDCOUNTFORSCORE_OFFSET))(this);
		}

		static ::NPCCrowd::NPCPerformanceManager* Get()
		{
			return ((::NPCCrowd::NPCPerformanceManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GET_OFFSET))();
		}

		static ::System::Boolean ShouldDisableMonoRenderEntityForCrowd(::ENPCAvatarGender gender)
		{
			return ((::System::Boolean(*)(::ENPCAvatarGender))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SHOULDDISABLEMONORENDERENTITYFORCROWD_OFFSET))(gender);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void RefreshRuntimeFloorEnabled(::System::Int32 floorID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_REFRESHRUNTIMEFLOORENABLED_OFFSET))(floorID);
		}

		::System::Void AdvanceControlPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_ADVANCECONTROLPHASE_OFFSET))(this);
		}

		::System::Void SyncPerformanceStateByPolling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_SYNCPERFORMANCESTATEBYPOLLING_OFFSET))(this);
		}

		::System::Void BeginPollingCycle(::Foundation::ViewObject::ViewObjectManager* vom)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_BEGINPOLLINGCYCLE_OFFSET))(this, vom);
		}

		::System::Void ProcessPollingGroup(::Foundation::ViewObject::ViewObjectManager* vom, ::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_PROCESSPOLLINGGROUP_OFFSET))(this, vom, groupId);
		}

		::EGOJNNIFDJJ* GetCachedOrFindMemberComponent(::Foundation::ViewObject::ViewObjectHandle memberHandle)
		{
			return ((::EGOJNNIFDJJ*(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GETCACHEDORFINDMEMBERCOMPONENT_OFFSET))(this, memberHandle);
		}

		::System::Void PruneBuilderCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_PRUNEBUILDERCACHE_OFFSET))(this);
		}

		::System::Void AbortPollingCycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_ABORTPOLLINGCYCLE_OFFSET))(this);
		}

		::System::Void ResetPollingCycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_RESETPOLLINGCYCLE_OFFSET))(this);
		}

		::System::Int32 GetEffectivePollingGroupsPerFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GETEFFECTIVEPOLLINGGROUPSPERFRAME_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateSevereOverBudgetControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_UPDATESEVEREOVERBUDGETCONTROL_OFFSET))(this);
		}

		::System::Void ApplySevereOverBudgetSpawnControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_APPLYSEVEREOVERBUDGETSPAWNCONTROL_OFFSET))(this);
		}

		::System::Void ExitSevereOverBudgetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_EXITSEVEREOVERBUDGETSTATE_OFFSET))(this);
		}

		::System::Void LoadScoreData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_LOADSCOREDATA_OFFSET))(this);
		}

		::System::Boolean GetNPCCountLimit(::cfg::SceneSizeType sectionType, ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel omitLevel, ::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::cfg::SceneSizeType, ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GETNPCCOUNTLIMIT_OFFSET))(this, sectionType, omitLevel, count);
		}

		::System::Boolean GetPopulationRatio(::cfg::SceneSizeType sectionType, ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel omitLevel, ::System::Single& ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::cfg::SceneSizeType, ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER_GETPOPULATIONRATIO_OFFSET))(this, sectionType, omitLevel, ratio);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
