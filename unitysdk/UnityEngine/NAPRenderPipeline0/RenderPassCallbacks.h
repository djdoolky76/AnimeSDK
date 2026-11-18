#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_GBufferEventCallback; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_GBufferEventCallbackWithCmdBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_RenderPassEventCallback1; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_RenderPassEventCallback2; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderPassCallbacks_RenderPassGetDummyGPUDataSize; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderPassCallbacks_TypeDefinitionIndex = 5700;

	class RenderPassCallbacks : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_BeforeDrawOpaqueObjectsPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x56C0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassGetDummyGPUDataSize** StaticGet_GetDummyGPUDataSize()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassGetDummyGPUDataSize**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x56C8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_AfterGBufferDepthCopy()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x56D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallbackWithCmdBuffer** StaticGet_AfterGBufferHizTest()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallbackWithCmdBuffer**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x56D8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_AfterGBufferOpaque()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x56E0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_AfterDrawOpaqueObjectsPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x56E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_AfterFirstDeferredShadingPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x56F0);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback2** StaticGet_InnerRenderShadowSlice()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback2**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x56F8);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_AfterDrawForwardGBufferPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5700);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_BeforeHalfResOffScreenTransparentDraw()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5708);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_BeforeBeginRenderPassInDeferredPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5710);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_AfterGBufferDecal()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5718);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1** StaticGet_AfterDeferredJustDirectLightPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_RenderPassEventCallback1**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5720);
		}
		static ::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback** StaticGet_AfterHalfResOffScreenTransparentDraw()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderPassCallbacks_GBufferEventCallback**)Il2CppClass::FromTypeDefinitionIndex(RenderPassCallbacks_TypeDefinitionIndex)->GetStaticField(0x5728);
		}
	};
}
