#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define UNITYENGINE_PHYSICSSCENE_BOXCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F65C40)
#define UNITYENGINE_PHYSICSSCENE_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F661C0)
#define UNITYENGINE_PHYSICSSCENE_BOXCASTSORT_OFFSET UNITYSDK_OFFSET(0x3F66030)
#define UNITYENGINE_PHYSICSSCENE_BOXCAST_1_OFFSET UNITYSDK_OFFSET(0x3F65EC0)
#define UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET UNITYSDK_OFFSET(0x3F65AC0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_1_OFFSET UNITYSDK_OFFSET(0x3F64DD0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F64AF0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F650C0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORT_OFFSET UNITYSDK_OFFSET(0x3F64F40)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECAST_1_OFFSET UNITYSDK_OFFSET(0x3F64C60)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x3F64980)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3EE9440)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F63D00)
#define UNITYENGINE_PHYSICSSCENE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20193940)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193B60)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x20193B10)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193C60)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20193BF0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193BE0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x20193B70)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCAST_OFFSET UNITYSDK_OFFSET(0x20193810)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20192EE0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x201930C0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20193070)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193060)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x20193010)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x201931A0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20193140)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193130)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x201930D0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x20192DB0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192BA0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20192B70)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192CC0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20192C90)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192BE0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x20192BB0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192C80)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20192C40)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192C30)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x20192BF0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192B10)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20192AE0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192B20)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET UNITYSDK_OFFSET(0x20192AB0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192B60)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET UNITYSDK_OFFSET(0x20192B30)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20193410)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x201936A0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20193650)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193560)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x20193510)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193640)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x201935E0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x201935D0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x20193570)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x20193310)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F65E40)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193B00)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20193AC0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193AB0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x20193A70)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOX_OFFSET UNITYSDK_OFFSET(0x3F65DC0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULEALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F652B0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193240)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20193200)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x201931F0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x201931B0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULE_OFFSET UNITYSDK_OFFSET(0x3F65240)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHEREALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F65A70)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193720)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x201936F0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x201936E0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x201936B0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET UNITYSDK_OFFSET(0x3F65A20)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193800)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x201937A0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193790)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_OFFSET UNITYSDK_OFFSET(0x20193730)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192DA0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x20192D40)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x20192D30)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x20192CD0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x20193300)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x201932B0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x201932A0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x20193250)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_1_OFFSET UNITYSDK_OFFSET(0x3F64170)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_2_OFFSET UNITYSDK_OFFSET(0x3F647E0)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F63EC0)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F64620)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTSORT_OFFSET UNITYSDK_OFFSET(0x3F64460)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x3F64020)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x3F642C0)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET UNITYSDK_OFFSET(0x3F63D60)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_1_OFFSET UNITYSDK_OFFSET(0x3F65900)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F65450)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3F657D0)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTSORT_OFFSET UNITYSDK_OFFSET(0x3F656A0)
#define UNITYENGINE_PHYSICSSCENE_SPHERECAST_1_OFFSET UNITYSDK_OFFSET(0x3F65580)
#define UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x3F65320)
#define UNITYENGINE_PHYSICSSCENE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F63CF0)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsScene_TypeDefinitionIndex = 5329;

	struct alignas(4) PhysicsScene
	{
		::System::Int32 m_Handle; // 0x10
		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::PhysicsScene a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PhysicsScene))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Raycast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean RaycastAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		/*
		static ::System::Boolean Internal_RaycastTestAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTest(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		::System::Boolean Raycast_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		/*
		static ::System::Boolean Internal_Raycast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::UnityEngine::RaycastHit a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		::System::Boolean RaycastAllowAsync_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		/*
		static ::System::Boolean Internal_RaycastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::UnityEngine::RaycastHit a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		::System::Int32 Raycast_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		/*
		static ::System::Int32 Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		::System::Int32 RaycastSort(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTSORT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		/*
		static ::System::Int32 Internal_RaycastSortNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		::System::Int32 RaycastSortNonAllocAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		/*
		static ::System::Int32 Internal_RaycastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		::System::Int32 RaycastAllowAsync_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		/*
		static ::System::Int32 Internal_RaycastNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::UnityEngine::RaycastHit a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::UnityEngine::RaycastHit a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Internal_CapsuleCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::RaycastHit a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Internal_CapsuleCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::RaycastHit a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		::System::Boolean CapsuleCast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean CapsuleCastAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		/*
		static ::System::Int32 Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Boolean a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Boolean a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		::System::Int32 CapsuleCast_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECAST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 CapsuleCastAllowAsync_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 CapsuleCastSort(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Int32 CapsuleCastSortNonAllocAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_Internal(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Collider*>* a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_InternalAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Collider*>* a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		::System::Int32 OverlapCapsule(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 OverlapCapsuleAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULEALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		/*
		static ::System::Boolean Query_SphereCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::RaycastHit a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::RaycastHit a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Boolean Internal_SphereCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Boolean Internal_SphereCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		::System::Boolean SphereCast(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean SphereCastAllowAsync(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		/*
		static ::System::Int32 Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		::System::Int32 SphereCast_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECAST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 SphereCastSort(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTSORT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 SphereCastSortNonAllocAllowAsync(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 SphereCastAllowAsync_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		/*
		static ::System::Int32 OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_InternalAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		::System::Int32 OverlapSphere(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 OverlapSphereAllowAsync(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHEREALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		/*
		static ::System::Boolean Query_BoxCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::UnityEngine::RaycastHit a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::UnityEngine::RaycastHit a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Internal_BoxCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Vector3 a5, ::UnityEngine::RaycastHit a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Internal_BoxCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Vector3 a5, ::UnityEngine::RaycastHit a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		::System::Boolean BoxCast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean BoxCastAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		/*
		static ::System::Int32 OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::UnityEngine::Quaternion a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_InternalAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::UnityEngine::Quaternion a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		::System::Int32 OverlapBox(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::UnityEngine::Quaternion a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOX_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 OverlapBoxAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::UnityEngine::Quaternion a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		/*
		static ::System::Int32 Internal_BoxCastNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::UnityEngine::Quaternion a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		::System::Int32 BoxCast_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCAST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		/*
		static ::System::Int32 Internal_BoxCastSortNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::UnityEngine::Quaternion a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		::System::Int32 BoxCastSort(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::UnityEngine::Quaternion a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTSORT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		/*
		static ::System::Int32 Internal_BoxCastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::UnityEngine::Quaternion a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		::System::Int32 BoxCastSortNonAllocAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::UnityEngine::Quaternion a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		/*
		static ::System::Boolean Internal_RaycastTestAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTest_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean Internal_Raycast_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::UnityEngine::RaycastHit a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::UnityEngine::RaycastHit a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAlloc_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAlloc_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCast_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::UnityEngine::RaycastHit a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCastAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::UnityEngine::RaycastHit a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAlloc_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAlloc_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Boolean a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Boolean a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Collider*>* a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_InternalAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Collider*>* a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCast_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::RaycastHit a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCastAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::RaycastHit a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAlloc_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAlloc_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_InternalAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCast_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::UnityEngine::RaycastHit a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCastAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::UnityEngine::RaycastHit a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::UnityEngine::Quaternion a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_InternalAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::UnityEngine::Quaternion a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastNonAlloc_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::UnityEngine::Quaternion a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAlloc_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::UnityEngine::Quaternion a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::UnityEngine::Quaternion a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

	};
}
