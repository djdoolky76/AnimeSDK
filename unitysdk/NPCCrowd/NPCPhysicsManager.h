#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobThreadDelegate.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class NPCPhysicsManager_PhysicsJobDelegate; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NPCCROWD_NPCPHYSICSMANAGER_APPLYPENDINGREGISTRYCOMMANDS_OFFSET UNITYSDK_OFFSET(0x12906960)
#define NPCCROWD_NPCPHYSICSMANAGER_COMPLETEPENDINGSPHERECAST_OFFSET UNITYSDK_OFFSET(0x10DCD130)
#define NPCCROWD_NPCPHYSICSMANAGER_COMPLETESPHERECASTJOB_OFFSET UNITYSDK_OFFSET(0x10DCCCC0)
#define NPCCROWD_NPCPHYSICSMANAGER_DISPATCHSPHERECAST_OFFSET UNITYSDK_OFFSET(0x10DCDAF0)
#define NPCCROWD_NPCPHYSICSMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x10DCC450)
#define NPCCROWD_NPCPHYSICSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x10DCC5D0)
#define NPCCROWD_NPCPHYSICSMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10DCDCD0)
#define NPCCROWD_NPCPHYSICSMANAGER_NORMALSPHERECAST_OFFSET UNITYSDK_OFFSET(0x10DCD190)
#define NPCCROWD_NPCPHYSICSMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10DCC990)
#define NPCCROWD_NPCPHYSICSMANAGER_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10DCCEB0)
#define NPCCROWD_NPCPHYSICSMANAGER_REGISTERIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x10DCE390)
#define NPCCROWD_NPCPHYSICSMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x10DCE300)
#define NPCCROWD_NPCPHYSICSMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x10DCC890)
#define NPCCROWD_NPCPHYSICSMANAGER_SPHERECASTJOB_OFFSET UNITYSDK_OFFSET(0x12906A10)
#define NPCCROWD_NPCPHYSICSMANAGER_UNLOCKPHYSICSSCENE_OFFSET UNITYSDK_OFFSET(0x10DCCD90)
#define NPCCROWD_NPCPHYSICSMANAGER_UNREGISTERIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x10DCE800)
#define NPCCROWD_NPCPHYSICSMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x10DCE760)
#define NPCCROWD_NPCPHYSICSMANAGER_UPDATERESULTPOSITION_OFFSET UNITYSDK_OFFSET(0x10DCDDD0)
#define NPCCROWD_NPCPHYSICSMANAGER_UPDATESOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x10DCD960)
#define NPCCROWD_NPCPHYSICSMANAGER_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x10DCE120)
#define NPCCROWD_NPCPHYSICSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12907020)
#define NPCCROWD_NPCPHYSICSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12906F00)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x129070A0)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12907130)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x129071D0)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12907260)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x12907300)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPhysicsManager_TypeDefinitionIndex = 67730;

	class NPCPhysicsManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_NormalHitResults()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x4C820);
		}
		static ::System::Single* StaticGet_MaxCastDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11B90);
		}
		static ::UnityEngine::PhysicsScene* StaticGet__physicsScene()
		{
			return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11B94);
		}
		static ::System::Single* StaticGet_DeltaHeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11B98);
		}
		static ::System::Boolean* StaticGet_EnableDeferredComplete()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11B9C);
		}
		static ::System::Boolean* StaticGet_FallbackToNormalCast()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11B9D);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet__originPosition()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11BA0);
		}
		static ::System::Single* StaticGet_SphereRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11BB0);
		}
		static ::System::Int32* StaticGet_MaxKernelCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11BB4);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet__hitResults()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11BB8);
		}
		static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet__hitCounts()
		{
			return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x11BC8);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__hitResultsInJob()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 MaxHitResultCount = 0x8; // 0x0
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbility*>* _npcList; // 0x18
		::NPCCrowd::NPCPhysicsManager_PhysicsJobDelegate* _jobDelegate; // 0x20
		::System::Collections::Generic::Queue_1<::System::Object*>* _pendingRegistryCommands; // 0x28
		::Unity::Collections::NativeArray_1<::System::Int32> _jobDataArray; // 0x30
		::System::Byte _padding0[0x8];
		::System::UInt64 _jobID; // 0x40
		::Unity::Collections::NativeArray_1<::System::IntPtr> _delegateFuncArray; // 0x48
		::System::Byte _padding1[0x8];
		::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate _jobThreadDelegate; // 0x58
		::System::Boolean _isSphereCastPending; // 0x78
		::System::Boolean _isPhysicsSceneLocked; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::NPCPhysicsManager* Get()
		{
			return ((::NPCCrowd::NPCPhysicsManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateSourcePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UPDATESOURCEPOSITION_OFFSET))(this);
		}

		::System::Void DispatchSphereCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_DISPATCHSPHERECAST_OFFSET))(this);
		}

		::System::Boolean CompleteSphereCastJob()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_COMPLETESPHERECASTJOB_OFFSET))(this);
		}

		::System::Void CompletePendingSphereCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_COMPLETEPENDINGSPHERECAST_OFFSET))(this);
		}

		::System::Void UnlockPhysicsScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UNLOCKPHYSICSSCENE_OFFSET))(this);
		}

		::System::Void UpdateResultPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UPDATERESULTPOSITION_OFFSET))(this);
		}

		static ::System::Void UpdateTransform(::NPCCrowd::Ability::NPCAbility* ability, ::System::Single deltaHeight)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbility*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UPDATETRANSFORM_OFFSET))(ability, deltaHeight);
		}

		::System::Void NormalSphereCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_NORMALSPHERECAST_OFFSET))(this);
		}

		::System::Void Register(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_REGISTER_OFFSET))(this, ability);
		}

		::System::Void RegisterImmediate(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_REGISTERIMMEDIATE_OFFSET))(this, ability);
		}

		::System::Void Unregister(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UNREGISTER_OFFSET))(this, ability);
		}

		::System::Void UnregisterImmediate(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UNREGISTERIMMEDIATE_OFFSET))(this, ability);
		}

		::System::Void ApplyPendingRegistryCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_APPLYPENDINGREGISTRYCOMMANDS_OFFSET))(this);
		}

		static ::System::Void SphereCastJob(::System::Int32 data)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_SPHERECASTJOB_OFFSET))(data);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_PRELATEUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
