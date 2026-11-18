#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEBOUNDSUNSAFE_OFFSET UNITYSDK_OFFSET(0x1EEF3830)
#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EEF36C0)
#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_1_OFFSET UNITYSDK_OFFSET(0x1EEF3450)
#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_2_OFFSET UNITYSDK_OFFSET(0x1EEF35D0)
#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET UNITYSDK_OFFSET(0x1EEF32A0)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_CALCULATEBOUNDSUNSAFE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEF39E0)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_CALCULATEBOUNDSUNSAFE_OFFSET UNITYSDK_OFFSET(0x1EEF3950)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_CALCULATEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEF39D0)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_CALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EEF37E0)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEF39C0)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_OFFSET UNITYSDK_OFFSET(0x1EEF36B0)
#define UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEF39B0)
#define UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_OFFSET UNITYSDK_OFFSET(0x1EEF39A0)
#define UNITYENGINE_GEOMETRYUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF39F0)

namespace UnityEngine
{
	inline static constexpr unsigned int GeometryUtility_TypeDefinitionIndex = 5161;

	class GeometryUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::Plane>* CalculateFrustumPlanes(::UnityEngine::Camera* camera)
		{
			return ((::Il2CppArray<::UnityEngine::Plane>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET))(camera);
		}

		static ::System::Void CalculateFrustumPlanes_1(::UnityEngine::Camera* camera, ::Il2CppArray<::UnityEngine::Plane>* planes)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_1_OFFSET))(camera, planes);
		}

		static ::System::Void CalculateFrustumPlanes_2(::UnityEngine::Matrix4x4 worldToProjectionMatrix, ::Il2CppArray<::UnityEngine::Plane>* planes)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_2_OFFSET))(worldToProjectionMatrix, planes);
		}

		static ::UnityEngine::Bounds CalculateBounds(::Il2CppArray<::UnityEngine::Vector3>* positions, ::UnityEngine::Matrix4x4 transform)
		{
			return ((::UnityEngine::Bounds(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEBOUNDS_OFFSET))(positions, transform);
		}

		static ::UnityEngine::Bounds CalculateBoundsUnSafe(::PVOID positions, ::System::Int32 length, ::UnityEngine::Matrix4x4 transform)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEBOUNDSUNSAFE_OFFSET))(positions, length, transform);
		}

		static ::System::Boolean TestPlanesAABB(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_OFFSET))(planes, bounds);
		}

		static ::System::Void Internal_ExtractPlanes(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Matrix4x4 worldToProjectionMatrix)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_OFFSET))(planes, worldToProjectionMatrix);
		}

		static ::UnityEngine::Bounds Internal_CalculateBounds(::Il2CppArray<::UnityEngine::Vector3>* positions, ::UnityEngine::Matrix4x4 transform)
		{
			return ((::UnityEngine::Bounds(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_CALCULATEBOUNDS_OFFSET))(positions, transform);
		}

		static ::UnityEngine::Bounds Internal_CalculateBoundsUnSafe(::PVOID positions, ::System::Int32 length, ::UnityEngine::Matrix4x4 transform)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_CALCULATEBOUNDSUNSAFE_OFFSET))(positions, length, transform);
		}

		static ::System::Boolean TestPlanesAABB_Injected(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Bounds& bounds)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_INJECTED_OFFSET))(planes, bounds);
		}

		static ::System::Void Internal_ExtractPlanes_Injected(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Matrix4x4& worldToProjectionMatrix)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_INJECTED_OFFSET))(planes, worldToProjectionMatrix);
		}

		static ::System::Void Internal_CalculateBounds_Injected(::Il2CppArray<::UnityEngine::Vector3>* positions, ::UnityEngine::Matrix4x4& transform, ::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_CALCULATEBOUNDS_INJECTED_OFFSET))(positions, transform, ret);
		}

		static ::System::Void Internal_CalculateBoundsUnSafe_Injected(::PVOID positions, ::System::Int32 length, ::UnityEngine::Matrix4x4& transform, ::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_CALCULATEBOUNDSUNSAFE_INJECTED_OFFSET))(positions, length, transform, ret);
		}
	};
}
