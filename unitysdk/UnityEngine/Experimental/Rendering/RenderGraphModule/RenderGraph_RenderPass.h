#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/DepthAccess.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphMutableResource.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResource.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class ProfilingSampler; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E4A0AF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A0DE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_GET_COLORBUFFERMAXINDEX_OFFSET UNITYSDK_OFFSET(0x1E4A0AE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_GET_COLORBUFFERS_OFFSET UNITYSDK_OFFSET(0x1E4A0AD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_GET_DEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x1E4A0AB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_SETCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x1E4A0C30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_SETDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x1E4A0D00)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraph_RenderPass_TypeDefinitionIndex = 36380;

	class RenderGraph_RenderPass : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>* m_ColorBuffers; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* usedRendererListList; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>* resourceWriteList; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource>* resourceReadList; // 0x30
		::UnityEngine::Rendering::ProfilingSampler* customSampler; // 0x38
		::System::Int32 m_MaxColorBufferIndex; // 0x40
		::System::Int32 index; // 0x44
		::System::Boolean enableAsyncCompute; // 0x48
		::System::Byte _padding0[0x3];
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource m_DepthBuffer; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_CTOR_OFFSET))(this);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource get_depthBuffer()
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_GET_DEPTHBUFFER_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>* get_colorBuffers()
		{
			return ((::Il2CppArray<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_GET_COLORBUFFERS_OFFSET))(this);
		}

		::System::Int32 get_colorBufferMaxIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_GET_COLORBUFFERMAXINDEX_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_CLEAR_OFFSET))(this);
		}

		::System::Void SetColorBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_SETCOLORBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void SetDepthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource a1, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RENDERPASS_SETDEPTHBUFFER_OFFSET))(this, a1, a2);
		}

	};
}
