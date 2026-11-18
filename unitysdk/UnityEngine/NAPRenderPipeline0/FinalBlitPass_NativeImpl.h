#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine::NAPRenderPipeline0 { class FinalBlitPassNativeState; }

#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1F024BF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1F024BC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F024B40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FinalBlitPass_NativeImpl_TypeDefinitionIndex = 5748;

	class FinalBlitPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::FinalBlitPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor& baseDesc, ::UnityEngine::Rendering::RenderTargetIdentifier& colorRTI, ::System::Boolean outputHDR)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASS_NATIVEIMPL_SETUP_OFFSET))(this, baseDesc, colorRTI, outputHDR);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FINALBLITPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
