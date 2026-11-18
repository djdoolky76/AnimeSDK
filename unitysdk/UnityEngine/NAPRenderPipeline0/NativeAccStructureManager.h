#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Experimental::Rendering { class RayTracingShader; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NATIVEACCSTRUCTUREMANAGER_REQUESTRESETONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1E544B10)
#define UNITYENGINE_NAPRENDERPIPELINE0_NATIVEACCSTRUCTUREMANAGER_SETACCSTRUCTURECOMPUTE_OFFSET UNITYSDK_OFFSET(0x1E544B00)
#define UNITYENGINE_NAPRENDERPIPELINE0_NATIVEACCSTRUCTUREMANAGER_SETACCSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1E544AF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NATIVEACCSTRUCTUREMANAGER_UPDATEACCSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1E544AE0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NativeAccStructureManager_TypeDefinitionIndex = 5719;

	class NativeAccStructureManager : public ::System::Object
	{
	public:
		static ::System::Void UpdateAccStructure(::UnityEngine::Rendering::ScriptableRenderContext& context, ::System::Boolean useAsyncCompute, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Boolean, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NATIVEACCSTRUCTUREMANAGER_UPDATEACCSTRUCTURE_OFFSET))(context, useAsyncCompute, camera);
		}

		static ::System::Void SetAccStructure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::RayTracingShader* shader)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Experimental::Rendering::RayTracingShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NATIVEACCSTRUCTUREMANAGER_SETACCSTRUCTURE_OFFSET))(cmd, shader);
		}

		static ::System::Void SetAccStructureCompute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* shader, ::System::Int32 kernel)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NATIVEACCSTRUCTUREMANAGER_SETACCSTRUCTURECOMPUTE_OFFSET))(cmd, shader, kernel);
		}

		static ::System::Void RequestResetOnNextUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NATIVEACCSTRUCTUREMANAGER_REQUESTRESETONNEXTUPDATE_OFFSET))();
		}
	};
}
