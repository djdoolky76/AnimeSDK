#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Experimental::Rendering { class RayTracingShader; }
namespace UnityEngine::NAPRenderPipeline0 { class RayTracingResources; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_GET_RTXRESOURCES_OFFSET UNITYSDK_OFFSET(0x1E84FF60)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_INJECTRTXRESOURCESTONATIVE_OFFSET UNITYSDK_OFFSET(0x1E84EE00)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_SETACCSTRUCTURE_1_OFFSET UNITYSDK_OFFSET(0x1E84FF50)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_SETACCSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1E84FF40)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_SETCAMERAPARAMS_OFFSET UNITYSDK_OFFSET(0x1E84F6D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_UPDATEACCSTRUCTURE_1_OFFSET UNITYSDK_OFFSET(0x1E84FF20)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_UPDATEACCSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1E84FEB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84FF80)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84FF70)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXRenderer_TypeDefinitionIndex = 5794;

	class RTXRenderer : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_AsyncBuildAccelerationStructure()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_TypeDefinitionIndex)->GetStaticField(0x4B90);
		}
		static ::System::String** StaticGet_RTXMetaPass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_TypeDefinitionIndex)->GetStaticField(0x4B98);
		}
		static ::System::String** StaticGet_RTVisivilityPass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_TypeDefinitionIndex)->GetStaticField(0x4BA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER__CCTOR_OFFSET))();
		}

		static ::System::Void InjectRTXResourcesToNative()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_INJECTRTXRESOURCESTONATIVE_OFFSET))();
		}

		static ::System::Void SetCameraParams(::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::Camera* cam, ::UnityEngine::Experimental::Rendering::RayTracingShader* shader)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::RayTracingShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_SETCAMERAPARAMS_OFFSET))(cb, cam, shader);
		}

		static ::System::Void UpdateAccStructure(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Boolean useAsyncCompute, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_UPDATEACCSTRUCTURE_OFFSET))(context, useAsyncCompute, layer);
		}

		static ::System::Void UpdateAccStructure_1(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Boolean useAsyncCompute, ::UnityEngine::Camera* camera, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Boolean, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_UPDATEACCSTRUCTURE_1_OFFSET))(context, useAsyncCompute, camera, layer);
		}

		static ::System::Void SetAccStructure(::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::Experimental::Rendering::RayTracingShader* shader, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Experimental::Rendering::RayTracingShader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_SETACCSTRUCTURE_OFFSET))(cb, shader, layer);
		}

		static ::System::Void SetAccStructure_1(::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::ComputeShader* shader, ::System::Int32 kernel, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_SETACCSTRUCTURE_1_OFFSET))(cb, shader, kernel, layer);
		}

		static ::UnityEngine::NAPRenderPipeline0::RayTracingResources* get_rtxResources()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RayTracingResources*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_GET_RTXRESOURCES_OFFSET))();
		}
	};
}
