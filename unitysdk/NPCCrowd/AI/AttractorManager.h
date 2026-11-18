#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/AI/AttractorCommonConfig.h"
#include "unitysdk/NPCCrowd/Ability/NPCAttractorInteractState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/NPCCrowd/AI/AttractorDefinition.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;
class FECLKOKOLJK;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::AI { class AllAttractorsConfigAssetSO; }
namespace NPCCrowd::AI { class AttractorConfigAssetSO; }
namespace NPCCrowd::AI { class AttractorInstance; }
namespace NPCCrowd::AI { class AttractorRuntime; }
namespace NPCCrowd::AI { class AttractorTemplate; }
namespace NPCCrowd::AI { class AttractorTemplateAssetSO; }
namespace NPCCrowd::AI { class CrowdConditionBase; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORMANAGER_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x131800A0)
#define NPCCROWD_AI_ATTRACTORMANAGER_CLAIMATTRACTORSLOT_OFFSET UNITYSDK_OFFSET(0x131806C0)
#define NPCCROWD_AI_ATTRACTORMANAGER_CLEARATTRACTED_OFFSET UNITYSDK_OFFSET(0x13180E20)
#define NPCCROWD_AI_ATTRACTORMANAGER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1317A620)
#define NPCCROWD_AI_ATTRACTORMANAGER_CREATECROWDENTITYWITHATTRACTOR_1_OFFSET UNITYSDK_OFFSET(0x1317E7D0)
#define NPCCROWD_AI_ATTRACTORMANAGER_CREATECROWDENTITYWITHATTRACTOR_OFFSET UNITYSDK_OFFSET(0x1317E6B0)
#define NPCCROWD_AI_ATTRACTORMANAGER_DEBUGSETALLATTRACTORCONDITIONIGNORE_OFFSET UNITYSDK_OFFSET(0x131810B0)
#define NPCCROWD_AI_ATTRACTORMANAGER_DELAYREFRESHALLCONFLICT_OFFSET UNITYSDK_OFFSET(0x1317D570)
#define NPCCROWD_AI_ATTRACTORMANAGER_DELAYREFRESHSERVERATTRACTORCONFLICT_OFFSET UNITYSDK_OFFSET(0x1317D840)
#define NPCCROWD_AI_ATTRACTORMANAGER_DELAYSETATTRACTORENABLE_OFFSET UNITYSDK_OFFSET(0x13180650)
#define NPCCROWD_AI_ATTRACTORMANAGER_DISABLEENTITYATTRACT_OFFSET UNITYSDK_OFFSET(0x1317E2F0)
#define NPCCROWD_AI_ATTRACTORMANAGER_FORCEATTRACTORSPAWNENTITY_OFFSET UNITYSDK_OFFSET(0x13180AE0)
#define NPCCROWD_AI_ATTRACTORMANAGER_FORCESETATTRACTENTITY_1_OFFSET UNITYSDK_OFFSET(0x13180810)
#define NPCCROWD_AI_ATTRACTORMANAGER_FORCESETATTRACTENTITY_OFFSET UNITYSDK_OFFSET(0x13179FC0)
#define NPCCROWD_AI_ATTRACTORMANAGER_GETATTRACTORRUNTIME_OFFSET UNITYSDK_OFFSET(0x13179E40)
#define NPCCROWD_AI_ATTRACTORMANAGER_GETINSTANCESECTIONID_OFFSET UNITYSDK_OFFSET(0x13179B80)
#define NPCCROWD_AI_ATTRACTORMANAGER_GET_NEEDREFRESHCONFLICT_OFFSET UNITYSDK_OFFSET(0x13179790)
#define NPCCROWD_AI_ATTRACTORMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x131797A0)
#define NPCCROWD_AI_ATTRACTORMANAGER_HANDLEMAINCITYOBJECTAREA_OFFSET UNITYSDK_OFFSET(0x13180EC0)
#define NPCCROWD_AI_ATTRACTORMANAGER_HANDLESERVERDATA_OFFSET UNITYSDK_OFFSET(0x13179BE0)
#define NPCCROWD_AI_ATTRACTORMANAGER_INITHANDLECONFLICT_OFFSET UNITYSDK_OFFSET(0x1317BCA0)
#define NPCCROWD_AI_ATTRACTORMANAGER_INITLINANDCLUSTER_OFFSET UNITYSDK_OFFSET(0x1317B3F0)
#define NPCCROWD_AI_ATTRACTORMANAGER_INITNEARESTDATA_OFFSET UNITYSDK_OFFSET(0x1317C5B0)
#define NPCCROWD_AI_ATTRACTORMANAGER_INITRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x1317AEA0)
#define NPCCROWD_AI_ATTRACTORMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x131798C0)
#define NPCCROWD_AI_ATTRACTORMANAGER_LOADCURSECTIONDATA_OFFSET UNITYSDK_OFFSET(0x1317AAE0)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONATTRACTORSPAWNEDENTITYLOADED_OFFSET UNITYSDK_OFFSET(0x1317F480)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1317A230)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONENTITYDESTROY_OFFSET UNITYSDK_OFFSET(0x13180C80)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONREFRESHDATABIGSCENE_OFFSET UNITYSDK_OFFSET(0x1317A340)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONREFRESHDATA_OFFSET UNITYSDK_OFFSET(0x1317CE40)
#define NPCCROWD_AI_ATTRACTORMANAGER_ONSETATTRACTORENABLE_OFFSET UNITYSDK_OFFSET(0x13180230)
#define NPCCROWD_AI_ATTRACTORMANAGER_POSTREFRESHDATABIGSCENE_OFFSET UNITYSDK_OFFSET(0x1317C560)
#define NPCCROWD_AI_ATTRACTORMANAGER_REFRESHALLCONFLICT_OFFSET UNITYSDK_OFFSET(0x1317D520)
#define NPCCROWD_AI_ATTRACTORMANAGER_REFRESHSERVERATTRACTORCONFLICT_OFFSET UNITYSDK_OFFSET(0x13179F50)
#define NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x13179AF0)
#define NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_1_OFFSET UNITYSDK_OFFSET(0x1317FC60)
#define NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_2_OFFSET UNITYSDK_OFFSET(0x1317D0C0)
#define NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_OFFSET UNITYSDK_OFFSET(0x1317FA70)
#define NPCCROWD_AI_ATTRACTORMANAGER_SETATTRACTORENABLE_OFFSET UNITYSDK_OFFSET(0x1317BB70)
#define NPCCROWD_AI_ATTRACTORMANAGER_SETATTRACTORINITENABLE_OFFSET UNITYSDK_OFFSET(0x13180520)
#define NPCCROWD_AI_ATTRACTORMANAGER_SETENTITYBEATTRACTED_OFFSET UNITYSDK_OFFSET(0x131809D0)
#define NPCCROWD_AI_ATTRACTORMANAGER_SETENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1317E4C0)
#define NPCCROWD_AI_ATTRACTORMANAGER_SPAWNDEFAULTNPC_OFFSET UNITYSDK_OFFSET(0x1317CBE0)
#define NPCCROWD_AI_ATTRACTORMANAGER_UNREGISTERATTRACTOR_OFFSET UNITYSDK_OFFSET(0x1317F720)
#define NPCCROWD_AI_ATTRACTORMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x131818C0)
#define NPCCROWD_AI_ATTRACTORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x131812A0)
#define NPCCROWD_AI_ATTRACTORMANAGER__DELAYREFRESHSERVERATTRACTORCONFLICT_B__45_2_OFFSET UNITYSDK_OFFSET(0x13181990)
#define NPCCROWD_AI_ATTRACTORMANAGER__LOADCURSECTIONDATA_B__36_0_OFFSET UNITYSDK_OFFSET(0x13181910)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorManager_TypeDefinitionIndex = 48536;

	class AttractorManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AttractorTemplateConfigAssetSOPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AttractorManager_TypeDefinitionIndex)->GetStaticField(0x425D0);
		}
		static ::System::String** StaticGet_AttractorConfigAssetSOPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AttractorManager_TypeDefinitionIndex)->GetStaticField(0x425D8);
		}
		::Foundation::AssetRequestHandle _baseHandle; // 0x10
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::Int32, ::NPCCrowd::AI::AttractorRuntime*>>* entityBeAttractedSpawn; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* serverConflictResult; // 0x40
		::NPCCrowd::AI::AllAttractorsConfigAssetSO* _baseConfig; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* serverAttractorHandlers; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AttractorRuntime*>* attractorRuntimes; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* delayEnableDict; // 0x60
		::Foundation::AssetRequestHandle _templateHandle; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* defaultMainAttractorHandler; // 0x88
		::System::Collections::Generic::List_1<::System::Int32>* debugIgnoreConditionList; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* entityBeAttracted; // 0x98
		::System::Collections::Generic::List_1<::System::Int32>* curMainCityObjectAreaList; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AttractorTemplate*>* attractorConfigs; // 0xA8
		::Foundation::AssetRequestHandle _configHandle; // 0xB0
		::NPCCrowd::AI::AttractorConfigAssetSO* _attractorConfig; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* attractorIns2NearestPathData; // 0xD8
		::System::Collections::Generic::List_1<::System::Int32>* attractorHandler; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* linkValidDict; // 0xE8
		::NPCCrowd::AI::AttractorTemplateAssetSO* _templateConfig; // 0xF0
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorInstance*>* curInstances; // 0xF8
		::NPCCrowd::AI::AttractorCommonConfig CommonConfig; // 0x100
		::System::Boolean delayRefreshServerConflict; // 0x10C
		::System::Boolean delayRefreshConflict; // 0x10D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean get_needRefreshConflict()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_GET_NEEDREFRESHCONFLICT_OFFSET))(this);
		}

		static ::NPCCrowd::AI::AttractorManager* Get()
		{
			return ((::NPCCrowd::AI::AttractorManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INIT_OFFSET))(this);
		}

		static ::System::Int32 GetInstanceSectionID(::System::Int32 instanceID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_GETINSTANCESECTIONID_OFFSET))(instanceID);
		}

		static ::System::Void HandleServerData(::FECLKOKOLJK* attractorData, ::System::Boolean handleTag)
		{
			return ((::System::Void(*)(::FECLKOKOLJK*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_HANDLESERVERDATA_OFFSET))(attractorData, handleTag);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRefreshDataBigScene(::System::Int32 sceneID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONREFRESHDATABIGSCENE_OFFSET))(this, sceneID, enable);
		}

		::System::Void PostRefreshDataBigScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_POSTREFRESHDATABIGSCENE_OFFSET))(this);
		}

		::System::Void OnRefreshData(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONREFRESHDATA_OFFSET))(this, sectionID);
		}

		::System::Void LoadCurSectionData(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_LOADCURSECTIONDATA_OFFSET))(this, sectionID);
		}

		::System::Void InitRuntimeData(::System::Collections::Generic::List_1<::System::Int32>* allIDs, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* id2Handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INITRUNTIMEDATA_OFFSET))(this, allIDs, id2Handler);
		}

		::System::Void InitNearestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INITNEARESTDATA_OFFSET))(this);
		}

		::System::Void InitLinAndCluster(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INITLINANDCLUSTER_OFFSET))(this, sectionID);
		}

		::System::Void InitHandleConflict(::System::Int32 sectionID, ::System::Collections::Generic::List_1<::System::Int32>* allIDs, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* id2Handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_INITHANDLECONFLICT_OFFSET))(this, sectionID, allIDs, id2Handler);
		}

		::System::Void SpawnDefaultNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SPAWNDEFAULTNPC_OFFSET))(this);
		}

		::System::Void RefreshAllConflict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REFRESHALLCONFLICT_OFFSET))(this);
		}

		::System::Void DelayRefreshAllConflict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DELAYREFRESHALLCONFLICT_OFFSET))(this);
		}

		::System::Void RefreshServerAttractorConflict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REFRESHSERVERATTRACTORCONFLICT_OFFSET))(this);
		}

		::System::Void DelayRefreshServerAttractorConflict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DELAYREFRESHSERVERATTRACTORCONFLICT_OFFSET))(this);
		}

		static ::System::Void DisableEntityAttract(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DISABLEENTITYATTRACT_OFFSET))(entity);
		}

		static ::System::Void SetEntityTransform(::MoleMole::Battle::Entity* entity, ::NPCCrowd::AI::AttractorRuntime* attractorInstance)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SETENTITYTRANSFORM_OFFSET))(entity, attractorInstance);
		}

		::System::Void CreateCrowdEntityWithAttractor(::System::Int32 attractorHandler, ::COCJHGGDBCA*& npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::COCJHGGDBCA*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CREATECROWDENTITYWITHATTRACTOR_OFFSET))(this, attractorHandler, npcComp);
		}

		::System::Void CreateCrowdEntityWithAttractor_1(::NPCCrowd::AI::AttractorRuntime* attractorRuntime, ::COCJHGGDBCA*& npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*, ::COCJHGGDBCA*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CREATECROWDENTITYWITHATTRACTOR_1_OFFSET))(this, attractorRuntime, npcComp);
		}

		::System::Void OnAttractorSpawnedEntityLoaded(::MoleMole::Battle::Entity* entity, ::System::Int32 attractorHandler, ::NPCCrowd::AI::AttractorRuntime* attractorInstance)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONATTRACTORSPAWNEDENTITYLOADED_OFFSET))(this, entity, attractorHandler, attractorInstance);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CLEARDATA_OFFSET))(this);
		}

		::System::Void RegisterAttractorConfig(::NPCCrowd::AI::AttractorTemplate* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorTemplate*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTORCONFIG_OFFSET))(this, config);
		}

		::System::Int32 RegisterAttractor(::System::Int32 attractorTemplateID, ::UnityEngine::Vector3 attractorPosition, ::UnityEngine::Quaternion attractorRotation)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_OFFSET))(this, attractorTemplateID, attractorPosition, attractorRotation);
		}

		::System::Int32 RegisterAttractor_1(::NPCCrowd::AI::AttractorDefinition attractorConfig, ::UnityEngine::Vector3 attractorPosition, ::UnityEngine::Quaternion attractorRotation, ::System::Int32 attractorHandler)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::AttractorDefinition, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_1_OFFSET))(this, attractorConfig, attractorPosition, attractorRotation, attractorHandler);
		}

		::System::Int32 RegisterAttractor_2(::NPCCrowd::AI::AttractorTemplate* template_, ::NPCCrowd::AI::AttractorDefinition attractorConfig, ::UnityEngine::Vector3 attractorPosition, ::UnityEngine::Quaternion attractorRotation, ::System::Int32 attractorHandler)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::AttractorTemplate*, ::NPCCrowd::AI::AttractorDefinition, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_REGISTERATTRACTOR_2_OFFSET))(this, template_, attractorConfig, attractorPosition, attractorRotation, attractorHandler);
		}

		static ::System::Boolean CheckCondition(::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>* poolConditions)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CHECKCONDITION_OFFSET))(poolConditions);
		}

		::System::Boolean UnregisterAttractor(::System::Int32 handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_UNREGISTERATTRACTOR_OFFSET))(this, handler);
		}

		::System::Void SetAttractorEnable(::System::Int32 handler, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SETATTRACTORENABLE_OFFSET))(this, handler, enable);
		}

		::System::Void SetAttractorInitEnable(::System::Int32 handler, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SETATTRACTORINITENABLE_OFFSET))(this, handler, enable);
		}

		::System::Void OnSetAttractorEnable(::NPCCrowd::AI::AttractorRuntime* attractor)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONSETATTRACTORENABLE_OFFSET))(this, attractor);
		}

		::System::Void DelaySetAttractorEnable(::System::Int32 handler, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DELAYSETATTRACTORENABLE_OFFSET))(this, handler, enable);
		}

		::System::Boolean ClaimAttractorSlot(::System::Int32 handler, ::System::UInt32 entityID, ::System::Boolean force)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CLAIMATTRACTORSLOT_OFFSET))(this, handler, entityID, force);
		}

		::System::Boolean GetAttractorRuntime(::System::Int32 handler, ::NPCCrowd::AI::AttractorRuntime*& attractor)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::AttractorRuntime*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_GETATTRACTORRUNTIME_OFFSET))(this, handler, attractor);
		}

		::System::Void ForceSetAttractEntity(::System::Int32 handler, ::MoleMole::Battle::Entity* entity, ::System::Boolean serverControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_FORCESETATTRACTENTITY_OFFSET))(this, handler, entity, serverControl);
		}

		::System::Boolean ForceSetAttractEntity_1(::System::Int32 handler, ::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAttractorControlFragment& attractorFrag, ::NPCCrowd::Ability::NPCAttractorInteractState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Ability::FNPCAttractorControlFragment&, ::NPCCrowd::Ability::NPCAttractorInteractState))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_FORCESETATTRACTENTITY_1_OFFSET))(this, handler, entityID, attractorFrag, state);
		}

		::System::Boolean ForceAttractorSpawnEntity(::System::Int32 handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_FORCEATTRACTORSPAWNENTITY_OFFSET))(this, handler);
		}

		::System::Void OnEntityDestroy(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_ONENTITYDESTROY_OFFSET))(this, ability);
		}

		::System::Void SetEntityBeAttracted(::System::UInt32 entityID, ::System::Int32 attractorHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_SETENTITYBEATTRACTED_OFFSET))(this, entityID, attractorHandler);
		}

		::System::Void ClearAttracted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_CLEARATTRACTED_OFFSET))(this);
		}

		::System::Void HandleMainCityObjectArea(::System::String* key, ::System::Boolean register_)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_HANDLEMAINCITYOBJECTAREA_OFFSET))(this, key, register_);
		}

		::System::Void DebugSetAllAttractorConditionIgnore(::System::Boolean ignore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER_DEBUGSETALLATTRACTORCONDITIONIGNORE_OFFSET))(this, ignore);
		}

		::System::Int32 _LoadCurSectionData_b__36_0(::NPCCrowd::AI::AttractorInstance* a, ::NPCCrowd::AI::AttractorInstance* b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::AttractorInstance*, ::NPCCrowd::AI::AttractorInstance*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER__LOADCURSECTIONDATA_B__36_0_OFFSET))(this, a, b);
		}

		::System::Int32 _DelayRefreshServerAttractorConflict_b__45_2(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER__DELAYREFRESHSERVERATTRACTORCONFLICT_B__45_2_OFFSET))(this, a, b);
		}
	};
}
