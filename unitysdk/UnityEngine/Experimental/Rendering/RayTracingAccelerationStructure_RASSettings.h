#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingAccelerationStructure_ManagementMode.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingAccelerationStructure_RayTracingModeMask.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingAccelerationStructure_RASSettings_TypeDefinitionIndex = 6358;

	struct alignas(4) RayTracingAccelerationStructure_RASSettings
	{
		::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_ManagementMode managementMode; // 0x10
		::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure_RayTracingModeMask rayTracingModeMask; // 0x14
		::System::Int32 layerMask; // 0x18
	};
}
