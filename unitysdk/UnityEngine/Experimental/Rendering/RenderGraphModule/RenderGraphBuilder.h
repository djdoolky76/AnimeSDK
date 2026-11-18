#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/DepthAccess.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphMutableResource.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResource.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceRegistry; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph_RenderPass; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x8AC030)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AC010)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ENABLEASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x8ABF60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READTEXTURE_OFFSET UNITYSDK_OFFSET(0x8ABF20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USECOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x8ABEE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USEDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x8ABF00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x8ABF50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_WRITETEXTURE_OFFSET UNITYSDK_OFFSET(0x8ABF30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC020)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphBuilder_TypeDefinitionIndex = 17799;

	struct alignas(8) RenderGraphBuilder
	{
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass* m_RenderPass; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources; // 0x18
		::System::Boolean m_Disposed; // 0x20

		::System::Void _ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass* renderPass, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER__CTOR_OFFSET))(this, renderPass, resources);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource UseColorBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource& input, ::System::Int32 index)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USECOLORBUFFER_OFFSET))(this, input, index);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource UseDepthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource& input, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess flags)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource&, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USEDEPTHBUFFER_OFFSET))(this, input, flags);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource ReadTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& input)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READTEXTURE_OFFSET))(this, input);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource WriteTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource& input)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_WRITETEXTURE_OFFSET))(this, input);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource UseRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource& input)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USERENDERERLIST_OFFSET))(this, input);
		}

		::System::Void EnableAsyncCompute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ENABLEASYNCCOMPUTE_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
