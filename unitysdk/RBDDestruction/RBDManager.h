#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace RBDDestruction { class BuildingConfig; }
namespace RBDDestruction { class RBDAssetsConfig; }
namespace RBDDestruction { class SimulationConfig; }
namespace RBDDestruction { class VisualEffectConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RBDDESTRUCTION_RBDMANAGER_ADD_ONDESTROYEVENTSBATCH_OFFSET UNITYSDK_OFFSET(0x1CA3A840)
#define RBDDESTRUCTION_RBDMANAGER_ADD_ONGROUNDEDEVENTSBATCH_OFFSET UNITYSDK_OFFSET(0x1CA3A720)
#define RBDDESTRUCTION_RBDMANAGER_ADD_ONHITEVENTSBATCH_OFFSET UNITYSDK_OFFSET(0x1CA3A600)
#define RBDDESTRUCTION_RBDMANAGER_BINDANDRESETDESTROYEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA3B1E0)
#define RBDDESTRUCTION_RBDMANAGER_BINDANDRESETEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA3AFB0)
#define RBDDESTRUCTION_RBDMANAGER_BINDANDRESETGROUNDEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA3B110)
#define RBDDESTRUCTION_RBDMANAGER_BINDANDRESETHITEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA3B040)
#define RBDDESTRUCTION_RBDMANAGER_BREAKALLBUILDINGS_OFFSET UNITYSDK_OFFSET(0x1CA3E3E0)
#define RBDDESTRUCTION_RBDMANAGER_BREAKBUILDINGSAFTERDELAY_OFFSET UNITYSDK_OFFSET(0x1CA3EA30)
#define RBDDESTRUCTION_RBDMANAGER_BUILDINGINFOINIT_OFFSET UNITYSDK_OFFSET(0x1CA3CCC0)
#define RBDDESTRUCTION_RBDMANAGER_CLEARBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA3EB10)
#define RBDDESTRUCTION_RBDMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA3CBC0)
#define RBDDESTRUCTION_RBDMANAGER_DISPOSEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA3AF50)
#define RBDDESTRUCTION_RBDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CA3A5E0)
#define RBDDESTRUCTION_RBDMANAGER_HITBUILDING_1_OFFSET UNITYSDK_OFFSET(0x1CA3D400)
#define RBDDESTRUCTION_RBDMANAGER_HITBUILDING_OFFSET UNITYSDK_OFFSET(0x1CA3D250)
#define RBDDESTRUCTION_RBDMANAGER_INITEVENTSBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA3A960)
#define RBDDESTRUCTION_RBDMANAGER_INITMATERIALBUFFERS_OFFSET UNITYSDK_OFFSET(0x1CA3CEA0)
#define RBDDESTRUCTION_RBDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1CA3B870)
#define RBDDESTRUCTION_RBDMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CA3EAC0)
#define RBDDESTRUCTION_RBDMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CA3D0F0)
#define RBDDESTRUCTION_RBDMANAGER_PROCESSDESTROYEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA3B4D0)
#define RBDDESTRUCTION_RBDMANAGER_PROCESSGROUNDEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA3B2B0)
#define RBDDESTRUCTION_RBDMANAGER_PROCESSHITEVENTS_OFFSET UNITYSDK_OFFSET(0x1CA3B3C0)
#define RBDDESTRUCTION_RBDMANAGER_RELEASEEVENTSBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA3ACD0)
#define RBDDESTRUCTION_RBDMANAGER_REMOVE_ONDESTROYEVENTSBATCH_OFFSET UNITYSDK_OFFSET(0x1CA3A8D0)
#define RBDDESTRUCTION_RBDMANAGER_REMOVE_ONGROUNDEDEVENTSBATCH_OFFSET UNITYSDK_OFFSET(0x1CA3A7B0)
#define RBDDESTRUCTION_RBDMANAGER_REMOVE_ONHITEVENTSBATCH_OFFSET UNITYSDK_OFFSET(0x1CA3A690)
#define RBDDESTRUCTION_RBDMANAGER_SETUPKERNEL_OFFSET UNITYSDK_OFFSET(0x1CA3CD40)
#define RBDDESTRUCTION_RBDMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CA3A5F0)
#define RBDDESTRUCTION_RBDMANAGER_SPAWNDESTROYBATCH_OFFSET UNITYSDK_OFFSET(0x1CA3B720)
#define RBDDESTRUCTION_RBDMANAGER_SPAWNGROUNDEDBATCH_OFFSET UNITYSDK_OFFSET(0x1CA3B680)
#define RBDDESTRUCTION_RBDMANAGER_SPAWNHITBATCH_OFFSET UNITYSDK_OFFSET(0x1CA3B5E0)
#define RBDDESTRUCTION_RBDMANAGER_UPDATEFRAGMENTPHYSICS_1_OFFSET UNITYSDK_OFFSET(0x1CA3DE10)
#define RBDDESTRUCTION_RBDMANAGER_UPDATEFRAGMENTPHYSICS_OFFSET UNITYSDK_OFFSET(0x1CA3D1A0)
#define RBDDESTRUCTION_RBDMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CA3D140)
#define RBDDESTRUCTION_RBDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3EBF0)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_TypeDefinitionIndex = 26542;

	class RBDManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>** StaticGet_OnDestroyEventsBatch()
		{
			return (::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RBDManager_TypeDefinitionIndex)->GetStaticField(0x22FF0);
		}
		static ::RBDDestruction::RBDManager** StaticGet__instance_k__BackingField()
		{
			return (::RBDDestruction::RBDManager**)Il2CppClass::FromTypeDefinitionIndex(RBDManager_TypeDefinitionIndex)->GetStaticField(0x22FF8);
		}
		static ::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>** StaticGet_OnHitEventsBatch()
		{
			return (::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RBDManager_TypeDefinitionIndex)->GetStaticField(0x23000);
		}
		static ::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>** StaticGet_OnGroundedEventsBatch()
		{
			return (::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RBDManager_TypeDefinitionIndex)->GetStaticField(0x23008);
		}
		// static const ::System::Int32 THREAD_GROUP_SIZE = 0x40; // 0x0
		// static const ::System::Int32 HitEventStrideBytes = 0x1C; // 0x0
		// static const ::System::Int32 GroundEventStrideBytes = 0x14; // 0x0
		// static const ::System::Int32 DestroyEventStrideBytes = 0x10; // 0x0
		::RBDDestruction::RBDAssetsConfig* assetsConfig; // 0x18
		::System::Single hitRadius; // 0x20
		::System::Single spreadAngle; // 0x24
		::System::Int32 MaxHitEventsPerFrame; // 0x28
		::System::Int32 MaxGroundEventsPerFrame; // 0x2C
		::System::Int32 MaxDestroyEventsPerFrame; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Mesh*>* crackMeshesData; // 0x38
		::Il2CppArray<::UnityEngine::Material*>* crackMaterialData; // 0x40
		::Il2CppArray<::System::Int32>* buildingCollectionData; // 0x48
		::Il2CppArray<::System::Object*>* assetsMatrixDictData; // 0x50
		::Il2CppArray<::System::Object*>* assetsColliderDictData; // 0x58
		::Il2CppArray<::RBDDestruction::BuildingConfig*>* buildingConfigs; // 0x60
		::Il2CppArray<::RBDDestruction::SimulationConfig*>* simulationConfigs; // 0x68
		::Il2CppArray<::RBDDestruction::VisualEffectConfig*>* visualEffectConfigs; // 0x70
		::System::Boolean showButtonInScene; // 0x78
		::System::Boolean fireToggle; // 0x79
		::System::Byte _padding1[0x6];
		::UnityEngine::ComputeShader* fragmentComputeShader; // 0x80
		::UnityEngine::ComputeBuffer* buildingConfigBuffer; // 0x88
		::Il2CppArray<::UnityEngine::ComputeBuffer*>* singleBuildingBuffer; // 0x90
		::Il2CppArray<::UnityEngine::ComputeBuffer*>* groupBuffer; // 0x98
		::Il2CppArray<::UnityEngine::ComputeBuffer*>* particleBuffer; // 0xA0
		::Il2CppArray<::UnityEngine::ComputeBuffer*>* fragmentTransformBuffer; // 0xA8
		::System::Boolean renderingBuildings; // 0xB0
		::System::Byte _padding2[0x7];
		::Il2CppArray<::System::Object*>* buildingConfigInfo; // 0xB8
		::System::Int32 particleCount; // 0xC0
		::System::Int32 groupTotalCount; // 0xC4
		::System::Boolean isInitialized; // 0xC8
		::System::Byte _padding3[0x3];
		::System::Int32 assetCount; // 0xCC
		::UnityEngine::Vector3 hitPosition; // 0xD0
		::UnityEngine::Vector3 hitNormal; // 0xDC
		::Il2CppArray<::System::Object*>* particles; // 0xE8
		::Il2CppArray<::System::Object*>* fragmentTransforms; // 0xF0
		::System::Int32 applyHitKernel; // 0xF8
		::System::Int32 precomputeKernel; // 0xFC
		::System::Int32 solveConstraintsKernel; // 0x100
		::System::Int32 correctVelocitiesKernel; // 0x104
		::Il2CppArray<::System::Int32>* threadGroupCount; // 0x108
		::System::Int32 _HitPosition; // 0x110
		::System::Int32 _HitNormal; // 0x114
		::System::Int32 _HitRadius; // 0x118
		::System::Int32 _HitDamage; // 0x11C
		::System::Int32 _SpreadAngle; // 0x120
		::System::Int32 _GameTime; // 0x124
		::System::Int32 _Dt; // 0x128
		::System::Int32 _Particles; // 0x12C
		::System::Int32 _Fragments; // 0x130
		::System::Int32 _BuildingConfigInfo; // 0x134
		::System::Int32 _FragmentTransforms; // 0x138
		::System::Int32 _SingleBuildingInfo; // 0x13C
		::System::Int32 _DebugInfo; // 0x140
		::System::Int32 _GroupInfo; // 0x144
		::System::Int32 _HitBuildingID; // 0x148
		::System::Int32 _BuildingTypeID; // 0x14C
		::System::Int32 _FragCount; // 0x150
		::System::Byte _padding4[0x4];
		::UnityEngine::ComputeBuffer* hitEventsBuffer; // 0x158
		::UnityEngine::ComputeBuffer* groundEventsBuffer; // 0x160
		::UnityEngine::ComputeBuffer* destroyEventsBuffer; // 0x168
		::UnityEngine::ComputeBuffer* hitEventsCountBuffer; // 0x170
		::UnityEngine::ComputeBuffer* groundEventsCountBuffer; // 0x178
		::UnityEngine::ComputeBuffer* destroyEventsCountBuffer; // 0x180
		::System::Int32 _HitEvents; // 0x188
		::System::Int32 _GroundedEvents; // 0x18C
		::System::Int32 _DestroyEvents; // 0x190
		::System::Byte _padding5[0x4];
		::Il2CppArray<::System::Int32>* hitEventCountRead; // 0x198
		::Il2CppArray<::System::Int32>* groundEventCountRead; // 0x1A0
		::Il2CppArray<::System::Int32>* destroyEventCountRead; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER__CTOR_OFFSET))(this);
		}

		static ::RBDDestruction::RBDManager* get_instance()
		{
			return ((::RBDDestruction::RBDManager*(*)())((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_instance(::RBDDestruction::RBDManager* value)
		{
			return ((::System::Void(*)(::RBDDestruction::RBDManager*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_SET_INSTANCE_OFFSET))(value);
		}

		static ::System::Void add_OnHitEventsBatch(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_ADD_ONHITEVENTSBATCH_OFFSET))(value);
		}

		static ::System::Void remove_OnHitEventsBatch(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_REMOVE_ONHITEVENTSBATCH_OFFSET))(value);
		}

		static ::System::Void add_OnGroundedEventsBatch(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_ADD_ONGROUNDEDEVENTSBATCH_OFFSET))(value);
		}

		static ::System::Void remove_OnGroundedEventsBatch(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_REMOVE_ONGROUNDEDEVENTSBATCH_OFFSET))(value);
		}

		static ::System::Void add_OnDestroyEventsBatch(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_ADD_ONDESTROYEVENTSBATCH_OFFSET))(value);
		}

		static ::System::Void remove_OnDestroyEventsBatch(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::Il2CppArray<::System::Object*>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_REMOVE_ONDESTROYEVENTSBATCH_OFFSET))(value);
		}

		::System::Void InitEventsBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_INITEVENTSBUFFER_OFFSET))(this);
		}

		::System::Void ReleaseEventsBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_RELEASEEVENTSBUFFER_OFFSET))(this);
		}

		::System::Void DisposeBuffer(::UnityEngine::ComputeBuffer*& buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_DISPOSEBUFFER_OFFSET))(this, buffer);
		}

		::System::Void BindAndResetEvents(::UnityEngine::ComputeBuffer* buffer, ::System::Int32 kernel, ::System::Int32 propertyID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_BINDANDRESETEVENTS_OFFSET))(this, buffer, kernel, propertyID);
		}

		::System::Void BindAndResetHitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_BINDANDRESETHITEVENTS_OFFSET))(this);
		}

		::System::Void BindAndResetGroundEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_BINDANDRESETGROUNDEVENTS_OFFSET))(this);
		}

		::System::Void BindAndResetDestroyEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_BINDANDRESETDESTROYEVENTS_OFFSET))(this);
		}

		::System::Void ProcessGroundEvents(::System::Int32 buildingTypeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_PROCESSGROUNDEVENTS_OFFSET))(this, buildingTypeID);
		}

		::System::Void ProcessHitEvents(::System::Int32 buildingTypeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_PROCESSHITEVENTS_OFFSET))(this, buildingTypeID);
		}

		::System::Void ProcessDestroyEvents(::System::Int32 buildingTypeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_PROCESSDESTROYEVENTS_OFFSET))(this, buildingTypeID);
		}

		::System::Void SpawnHitBatch(::Il2CppArray<::System::Object*>* batch, ::System::Int32 typeID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_SPAWNHITBATCH_OFFSET))(this, batch, typeID);
		}

		::System::Void SpawnGroundedBatch(::Il2CppArray<::System::Object*>* batch, ::System::Int32 typeID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_SPAWNGROUNDEDBATCH_OFFSET))(this, batch, typeID);
		}

		::System::Void SpawnDestroyBatch(::Il2CppArray<::System::Object*>* batch, ::System::Int32 typeID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_SPAWNDESTROYBATCH_OFFSET))(this, batch, typeID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Boolean BuildingInfoInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_BUILDINGINFOINIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void HitBuilding(::UnityEngine::RaycastHit hit, ::UnityEngine::Vector3 rayDirection, ::System::Single damage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_HITBUILDING_OFFSET))(this, hit, rayDirection, damage);
		}

		::System::Void HitBuilding_1(::UnityEngine::Collider* hitCollider, ::UnityEngine::Vector3 hitPoint, ::UnityEngine::Vector3 rayDirection, ::UnityEngine::Vector3 normal, ::System::Single logicDamage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_HITBUILDING_1_OFFSET))(this, hitCollider, hitPoint, rayDirection, normal, logicDamage);
		}

		::System::Void UpdateFragmentPhysics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_UPDATEFRAGMENTPHYSICS_OFFSET))(this);
		}

		::System::Void UpdateFragmentPhysics_1(::System::Int32 buildingTypeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_UPDATEFRAGMENTPHYSICS_1_OFFSET))(this, buildingTypeID);
		}

		::System::Void BreakAllBuildings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_BREAKALLBUILDINGS_OFFSET))(this);
		}

		::System::Void BreakBuildingsAfterDelay(::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_BREAKBUILDINGSAFTERDELAY_OFFSET))(this, delay);
		}

		::System::Void InitMaterialBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_INITMATERIALBUFFERS_OFFSET))(this);
		}

		::System::Void SetupKernel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_SETUPKERNEL_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void ClearBuffer(::Il2CppArray<::UnityEngine::ComputeBuffer*>* buffers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ComputeBuffer*>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_CLEARBUFFER_OFFSET))(this, buffers);
		}
	};
}
