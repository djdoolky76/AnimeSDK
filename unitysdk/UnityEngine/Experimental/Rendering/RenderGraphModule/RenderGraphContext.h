#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphObjectPool; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceRegistry; }
namespace UnityEngine::Rendering { class CommandBuffer; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct alignas(8) RenderGraphContext
	{
		::UnityEngine::Rendering::ScriptableRenderContext renderContext; // 0x10
		::UnityEngine::Rendering::CommandBuffer* cmd; // 0x18
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* renderGraphPool; // 0x20
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources; // 0x28
	};
}
