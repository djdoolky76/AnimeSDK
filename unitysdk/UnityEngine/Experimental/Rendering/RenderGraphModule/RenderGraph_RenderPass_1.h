#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraph_RenderPass.h"
namespace System { class Object; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { template <typename T> class RenderFunc_1; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	template <typename T>
	class RenderGraph_RenderPass_1 : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_RenderPass
	{
	public:
		T data; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::System::Object*>* renderFunc; // 0x0
	};
}
