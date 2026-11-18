#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0 { class NoInterpClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class NoInterpMinFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_GET_MAX_OFFSET UNITYSDK_OFFSET(0x1D8BE810)
#define UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_GET_MIN_OFFSET UNITYSDK_OFFSET(0x1D8BE7B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_GET_REPRESENTATIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D8BE880)
#define UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D8BE8A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_INIT_OFFSET UNITYSDK_OFFSET(0x1D8BEC50)
#define UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_SETFINALVALUE_OFFSET UNITYSDK_OFFSET(0x1D8BEAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D8BE8B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BEC20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CascadePartitionSplitParameter_TypeDefinitionIndex = 26199;

	class CascadePartitionSplitParameter
	{
	public:
		::UnityEngine::NAPRenderPipeline0::NoInterpMinFloatParameter* maxDistance; // 0x20
		::UnityEngine::Rendering::Universal::CascadePartitionSplitParameter* previous; // 0x28
		::UnityEngine::Rendering::Universal::CascadePartitionSplitParameter* next; // 0x30
		::UnityEngine::NAPRenderPipeline0::NoInterpClampedIntParameter* cascadeCounts; // 0x38
		::System::Boolean normalized; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 minCascadeToAppears; // 0x44

		::System::Void _ctor(::System::Single value, ::System::Boolean normalized, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER__CTOR_OFFSET))(this, value, normalized, overrideState);
		}

		::System::Single get_min()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_GET_MIN_OFFSET))(this);
		}

		::System::Single get_max()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_GET_MAX_OFFSET))(this);
		}

		::System::Single get_representationDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_GET_REPRESENTATIONDISTANCE_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void SetFinalValue(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_SETFINALVALUE_OFFSET))(this, v);
		}

		::System::Void Init(::UnityEngine::NAPRenderPipeline0::NoInterpClampedIntParameter* cascadeCounts, ::System::Int32 minCascadeToAppears, ::UnityEngine::NAPRenderPipeline0::NoInterpMinFloatParameter* maxDistance, ::UnityEngine::Rendering::Universal::CascadePartitionSplitParameter* previous, ::UnityEngine::Rendering::Universal::CascadePartitionSplitParameter* next)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::NoInterpClampedIntParameter*, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::NoInterpMinFloatParameter*, ::UnityEngine::Rendering::Universal::CascadePartitionSplitParameter*, ::UnityEngine::Rendering::Universal::CascadePartitionSplitParameter*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CASCADEPARTITIONSPLITPARAMETER_INIT_OFFSET))(this, cascadeCounts, minCascadeToAppears, maxDistance, previous, next);
		}
	};
}
