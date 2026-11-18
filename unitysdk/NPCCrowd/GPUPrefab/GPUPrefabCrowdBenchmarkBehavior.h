#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_BUILDSPAWNLIST_OFFSET UNITYSDK_OFFSET(0x1003D710)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_CLEARSPAWNEDGROUPS_OFFSET UNITYSDK_OFFSET(0x1003D410)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_CLOSESHADOW_OFFSET UNITYSDK_OFFSET(0x1003E440)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_DESTROYSPAWNEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1003DDE0)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_ENSURESPAWNROOT_OFFSET UNITYSDK_OFFSET(0x1003DA80)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_INSTANTIATEGROUPPREFAB_OFFSET UNITYSDK_OFFSET(0x1003DCA0)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_ONGUI_OFFSET UNITYSDK_OFFSET(0x1003DFC0)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_REFRESHSUMMARY_OFFSET UNITYSDK_OFFSET(0x1003C820)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_RESPAWNCROWDGROUPS_OFFSET UNITYSDK_OFFSET(0x1003BA50)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_START_OFFSET UNITYSDK_OFFSET(0x1003BA00)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1003C790)
#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1003E550)

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int GPUPrefabCrowdBenchmarkBehavior_TypeDefinitionIndex = 73803;

	class GPUPrefabCrowdBenchmarkBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single UpdateInterval; // 0x0
		::System::Boolean autoSpawnOnStart; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* spawnEntries; // 0x20
		::System::Single spawnPosInternalMulti; // 0x28
		::System::Boolean randomizeYaw; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Collections::Generic::List_1<::System::Object*>* _spawnedGroups; // 0x30
		::System::Single _updateTime; // 0x38
		::System::Byte _padding2[0x4];
		::System::String* _gpuCrowdSummary; // 0x40
		::UnityEngine::Transform* _spawnRoot; // 0x48
		::System::Boolean _spawnedOnce; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_UPDATE_OFFSET))(this);
		}

		::System::Void RespawnCrowdGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_RESPAWNCROWDGROUPS_OFFSET))(this);
		}

		::System::Void ClearSpawnedGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_CLEARSPAWNEDGROUPS_OFFSET))(this);
		}

		::System::Void RefreshSummary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_REFRESHSUMMARY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BuildSpawnList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_BUILDSPAWNLIST_OFFSET))(this);
		}

		::System::Void EnsureSpawnRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_ENSURESPAWNROOT_OFFSET))(this);
		}

		::UnityEngine::GameObject* InstantiateGroupPrefab(::UnityEngine::GameObject* prefab, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_INSTANTIATEGROUPPREFAB_OFFSET))(this, prefab, parent);
		}

		static ::System::Void DestroySpawnedObject(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_DESTROYSPAWNEDOBJECT_OFFSET))(go);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_ONGUI_OFFSET))(this);
		}

		::System::Void CloseShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_CLOSESHADOW_OFFSET))(this);
		}
	};
}
