#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RendererListDesc.h"
namespace System { class Nullable; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2A5CB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_CREATE_OFFSET UNITYSDK_OFFSET(0x1F2A4500)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xC200)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xE7630)

namespace UnityEngine::Experimental::Rendering
{
	struct alignas(8) RendererList
	{
		::System::Boolean _isValid_k__BackingField; // 0x10
		::System::Byte _padding0[0x7];
		::UnityEngine::Rendering::CullingResults cullingResult; // 0x18
		::UnityEngine::Rendering::DrawingSettings drawSettings; // 0x28
		::UnityEngine::Rendering::FilteringSettings filteringSettings; // 0x1A4
		::System::Nullable* stateBlock; // 0x1CC
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EmptyName()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)UnitySDK::FromName("UnityEngine.Experimental.Rendering", "RendererList")->GetStaticField(0x107F0);
		}

		static ::UnityEngine::Experimental::Rendering::RendererList* StaticGet_nullRendererList()
		{
			return (::UnityEngine::Experimental::Rendering::RendererList*)UnitySDK::FromName("UnityEngine.Experimental.Rendering", "RendererList")->GetStaticField(0x107F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_CCTOR_OFFSET))();
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_isValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_SET_ISVALID_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::Experimental::Rendering::RendererList Create(::UnityEngine::Experimental::Rendering::RendererListDesc a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RendererList(*)(::UnityEngine::Experimental::Rendering::RendererListDesc))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_CREATE_OFFSET))(a1);
		}
		*/

	};
}
