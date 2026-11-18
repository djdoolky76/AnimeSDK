#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E8E9E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_FORCEDIRTY_OFFSET UNITYSDK_OFFSET(0x1E8E9FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_PUSH_1_OFFSET UNITYSDK_OFFSET(0x1E8E9F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_PUSH_OFFSET UNITYSDK_OFFSET(0x1E8E9EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_SET_OFFSET UNITYSDK_OFFSET(0x1E8E9E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E9E00)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CpuVector4Params_TypeDefinitionIndex = 27088;

	class CpuVector4Params : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 targetValue; // 0x10
		::UnityEngine::Vector4 fallbackValue; // 0x20
		::System::Int32 targetShaderId; // 0x30
		::System::Boolean isDirty; // 0x34

		::System::Void _ctor(::UnityEngine::Vector4 fallbackVec, ::System::Int32 shaderId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS__CTOR_OFFSET))(this, fallbackVec, shaderId);
		}

		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* Set(::UnityEngine::Vector4 vec)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::CpuVector4Params*(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_SET_OFFSET))(this, vec);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_CLEAR_OFFSET))(this);
		}

		::System::Void Push(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_PUSH_OFFSET))(this, cmd);
		}

		::System::Void Push_1(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_PUSH_1_OFFSET))(this, mat);
		}

		::System::Void ForceDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUVECTOR4PARAMS_FORCEDIRTY_OFFSET))(this);
		}
	};
}
