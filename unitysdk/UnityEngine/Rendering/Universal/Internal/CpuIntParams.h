#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D8BF4A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_FORCEDIRTY_OFFSET UNITYSDK_OFFSET(0x1D8BF5D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_PUSH_1_OFFSET UNITYSDK_OFFSET(0x1D8BF560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_PUSH_OFFSET UNITYSDK_OFFSET(0x1D8BF4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_SET_OFFSET UNITYSDK_OFFSET(0x1D8BF450)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BF440)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CpuIntParams_TypeDefinitionIndex = 26401;

	class CpuIntParams : public ::System::Object
	{
	public:
		::System::Int32 fallbackValue; // 0x10
		::System::Int32 targetValue; // 0x14
		::System::Int32 targetShaderId; // 0x18
		::System::Boolean isDirty; // 0x1C

		::System::Void _ctor(::System::Int32 fallbackVec, ::System::Int32 shaderId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS__CTOR_OFFSET))(this, fallbackVec, shaderId);
		}

		::UnityEngine::Rendering::Universal::Internal::CpuIntParams* Set(::System::Int32 value)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::CpuIntParams*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_SET_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_CLEAR_OFFSET))(this);
		}

		::System::Void Push(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_PUSH_OFFSET))(this, cmd);
		}

		::System::Void Push_1(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_PUSH_1_OFFSET))(this, mat);
		}

		::System::Void ForceDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUINTPARAMS_FORCEDIRTY_OFFSET))(this);
		}
	};
}
