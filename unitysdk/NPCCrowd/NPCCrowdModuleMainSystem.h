#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleMainSystem_EModulePreloadPhase.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace NPCCrowd { class NPCCrowdModuleManagerBase; }
namespace NPCCrowd { class NPCCrowdModuleSubSystemBase; }
namespace NPCCrowd { class NPCCrowdNativeDataManager; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFD32C40)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_DISABLEMODULE_OFFSET UNITYSDK_OFFSET(0xFD32FE0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLEMODULE_OFFSET UNITYSDK_OFFSET(0xFD32F60)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLESYSTEM_OFFSET UNITYSDK_OFFSET(0xFD35B10)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_END_OFFSET UNITYSDK_OFFSET(0xFD33090)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GETISPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xFD31BB0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_BISLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xFD30450)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_ENABLEASYNCFLUSHGPUREADBACKBONEDATA_OFFSET UNITYSDK_OFFSET(0xFD30390)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0xFD16E00)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFD34950)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LOADALLCONFIGDATAASYNC_OFFSET UNITYSDK_OFFSET(0xFD31000)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFD35790)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0xFD33620)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKPAUSE_OFFSET UNITYSDK_OFFSET(0xFD356F0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKRESUME_OFFSET UNITYSDK_OFFSET(0xFD35740)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPOSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0xFD35370)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHEDCHECK_OFFSET UNITYSDK_OFFSET(0xFD31A10)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xFD31DD0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0xFD33920)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFD35000)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0xFD343B0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xFD31090)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0xFD30F10)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETSTREAMINGABILITYTICKENABLE_OFFSET UNITYSDK_OFFSET(0xFD32BC0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETTICKPAUSESTATE_OFFSET UNITYSDK_OFFSET(0xFD32620)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SET_ENABLEASYNCFLUSHGPUREADBACKBONEDATA_OFFSET UNITYSDK_OFFSET(0xFD303F0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_START_OFFSET UNITYSDK_OFFSET(0xFD32030)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xFD33E50)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD35B90)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFD304B0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFD35BB0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFD35C40)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFD35CD0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFD35D60)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_START_OFFSET UNITYSDK_OFFSET(0xFD35DF0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xFD35E80)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_TypeDefinitionIndex = 66621;

	class NPCCrowdModuleMainSystem : public ::OAOOLPCNHKA
	{
	public:
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_waitedAssetsRequest()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0x2FB00);
		}
		static ::NPCCrowd::NPCCrowdModuleMainSystem** StaticGet__self()
		{
			return (::NPCCrowd::NPCCrowdModuleMainSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0x2FB08);
		}
		static ::System::Action** StaticGet_loadAssetsFinishedAction()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0x2FB10);
		}
		static ::NPCCrowd::NPCCrowdModuleMainSystem_EModulePreloadPhase* StaticGet_preloadPhase()
		{
			return (::NPCCrowd::NPCCrowdModuleMainSystem_EModulePreloadPhase*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xA3A0);
		}
		static ::System::Boolean* StaticGet_PauseNpcCrowdFlag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xA3A4);
		}
		static ::System::Boolean* StaticGet_EnableLODSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xA3A5);
		}
		static ::System::Boolean* StaticGet__EnableAsyncFlushGPUReadBackBoneData_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xA3A6);
		}
		static ::System::Boolean* StaticGet_DisableSubsystemInStreamingGame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xA3A7);
		}
		static ::System::Boolean* StaticGet_enableSkipTickWhenNoNPC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xA3A8);
		}
		::NPCCrowd::NPCCrowdModuleSubSystemBase* lodSubSystem; // 0x20
		::NPCCrowd::NPCCrowdModuleSubSystemBase* debuggerAvatarSubSystem; // 0x28
		::NPCCrowd::NPCCrowdModuleManagerBase* accessoryAnimatorManager; // 0x30
		::NPCCrowd::NPCCrowdModuleManagerBase* debuggerManager; // 0x38
		::NPCCrowd::NPCCrowdModuleManagerBase* distanceManager; // 0x40
		::NPCCrowd::NPCCrowdModuleManagerBase* frameKeyManager; // 0x48
		::NPCCrowd::NPCCrowdModuleSubSystemBase* animationSubSystem; // 0x50
		::Nap::NapECS::EcsWorld* ecsWorld; // 0x58
		::NPCCrowd::NPCCrowdModuleSubSystemBase* gpTaskContainerSubSystem; // 0x60
		::NPCCrowd::NPCCrowdModuleManagerBase* avatarMeshManager; // 0x68
		::NPCCrowd::NPCCrowdModuleManagerBase* pathGraphManager; // 0x70
		::NPCCrowd::NPCCrowdModuleManagerBase* performanceManager; // 0x78
		::NPCCrowd::NPCCrowdModuleManagerBase* accessoryMeshManager; // 0x80
		::NPCCrowd::NPCCrowdModuleManagerBase* abilityManager; // 0x88
		::NPCCrowd::NPCCrowdModuleManagerBase* crowdAvatarManager; // 0x90
		::NPCCrowd::NPCCrowdModuleManagerBase* interactTargetManager; // 0x98
		::NPCCrowd::NPCCrowdModuleManagerBase* physicsManager; // 0xA0
		::NPCCrowd::NPCCrowdModuleManagerBase* unionAnimatorManager; // 0xA8
		::NPCCrowd::NPCCrowdModuleManagerBase* cpuAnimatorManager; // 0xB0
		::Nap::NapECS::EcsFilter* npcFilter; // 0xB8
		::NPCCrowd::NPCCrowdModuleManagerBase* spawnManager; // 0xC0
		::NPCCrowd::NPCCrowdModuleManagerBase* emotionManager; // 0xC8
		::NPCCrowd::NPCCrowdNativeDataManager* nativeDataManager; // 0xD0
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdModuleSubSystemBase*>* allSubSystem; // 0xD8
		::NPCCrowd::NPCCrowdModuleManagerBase* avatarDitherManager; // 0xE0
		::NPCCrowd::NPCCrowdModuleManagerBase* reactionManager; // 0xE8
		::NPCCrowd::NPCCrowdModuleManagerBase* montageManager; // 0xF0
		::NPCCrowd::NPCCrowdModuleSubSystemBase* visibleSubSystem; // 0xF8
		::NPCCrowd::NPCCrowdModuleManagerBase* accessoryManager; // 0x100
		::NPCCrowd::NPCCrowdModuleSubSystemBase* avatarSubSystem; // 0x108
		::NPCCrowd::NPCCrowdModuleSubSystemBase* physicsSubSystem; // 0x110
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdModuleManagerBase*>* allManager; // 0x118
		::NPCCrowd::NPCCrowdModuleManagerBase* crowdAnimationManager; // 0x120
		::NPCCrowd::NPCCrowdModuleManagerBase* timelineManager; // 0x128
		::NPCCrowd::NPCCrowdModuleManagerBase* actionManager; // 0x130
		::NPCCrowd::NPCCrowdModuleManagerBase* lodManager; // 0x138
		::System::Boolean _start; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableAsyncFlushGPUReadBackBoneData()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_ENABLEASYNCFLUSHGPUREADBACKBONEDATA_OFFSET))();
		}

		static ::System::Void set_EnableAsyncFlushGPUReadBackBoneData(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SET_ENABLEASYNCFLUSHGPUREADBACKBONEDATA_OFFSET))(value);
		}

		static ::System::Boolean get_bIsLoadedAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_BISLOADEDASSETS_OFFSET))();
		}

		static ::NPCCrowd::NPCCrowdModuleMainSystem* Get()
		{
			return ((::NPCCrowd::NPCCrowdModuleMainSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_OFFSET))();
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}

		static ::System::Collections::IEnumerator* LoadAllConfigDataAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LOADALLCONFIGDATAASYNC_OFFSET))(progressSpan, moveOneStepCallback);
		}

		static ::System::Void PreloadAssets(::System::Action* onLoadFinished)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_PRELOADASSETS_OFFSET))(onLoadFinished);
		}

		static ::System::Void OnPreloadFinishedCheck(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle arq)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHEDCHECK_OFFSET))(asset, arq);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_START_OFFSET))(this);
		}

		::System::Void SetTickPauseState(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETTICKPAUSESTATE_OFFSET))(this, pause);
		}

		static ::System::Void SetStreamingAbilityTickEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETSTREAMINGABILITYTICKENABLE_OFFSET))(enable);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void EnableModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLEMODULE_OFFSET))();
		}

		::System::Void DisableModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_DISABLEMODULE_OFFSET))(this);
		}

		::System::Void OnEarlyUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONEARLYUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void PostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnPostSimulationUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPOSTSIMULATIONUPDATE_OFFSET))(this);
		}

		::System::Void OnNPCCrowdTickPause(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKPAUSE_OFFSET))(this, args);
		}

		::System::Void OnNPCCrowdTickResume(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKRESUME_OFFSET))(this, args);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_END_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONDESTROY_OFFSET))(this);
		}

		static ::System::Boolean GetIsPreloadFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GETISPRELOADFINISHED_OFFSET))();
		}

		::System::Void EnableSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLESYSTEM_OFFSET))(this);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_START_OFFSET))(this);
		}

		::System::Void __base_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_UPDATE_OFFSET))(this);
		}
	};
}
