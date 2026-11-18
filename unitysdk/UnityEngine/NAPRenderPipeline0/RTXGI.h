#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXGI_QualityLevel.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXRenderer.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleObjectT_1; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E64A7E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETCVARIDCHECKED_OFFSET UNITYSDK_OFFSET(0x1E649950)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETDEFAULTRAYBUDGET_OFFSET UNITYSDK_OFFSET(0x1E64A600)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETDEFAULTRESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1E64A5E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGIADDLOCALLIGHTMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E649D80)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGIADDLOCALLIGHTMINDIST_OFFSET UNITYSDK_OFFSET(0x1E649CF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGIBOOST_OFFSET UNITYSDK_OFFSET(0x1E649AB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGIQUALITYPRESET_OFFSET UNITYSDK_OFFSET(0x1E649980)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGISKYDIFFUSESCALE_OFFSET UNITYSDK_OFFSET(0x1E649BD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGISKYSPECULARSCALE_OFFSET UNITYSDK_OFFSET(0x1E649C60)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGISPECBOOST_OFFSET UNITYSDK_OFFSET(0x1E649B40)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_ISRTXBUFFERVALID_OFFSET UNITYSDK_OFFSET(0x1E64A7B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RELEASEOUTSCOPEGLOBALTEXTURES_OFFSET UNITYSDK_OFFSET(0x1E6541C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RESETTOPRESET_OFFSET UNITYSDK_OFFSET(0x1E64A620)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RTXGIENABLED_OFFSET UNITYSDK_OFFSET(0x1E649E10)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_SET_RTXGIQUALITYPRESET_OFFSET UNITYSDK_OFFSET(0x1E649A10)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_TRIMRTXGIENABLEDSTATE_OFFSET UNITYSDK_OFFSET(0x1E64A1B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_UPDATERTXGIENABLEDSTATE_OFFSET UNITYSDK_OFFSET(0x1E649F20)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E654330)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6542E0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXGI_TypeDefinitionIndex = 5802;

	class RTXGI : public ::UnityEngine::NAPRenderPipeline0::RTXRenderer
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIResponseSpeed()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4F80);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIResolutionScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4F88);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGISplitSpecThreshold()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4F90);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIVisualizeMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4F98);
		}
		static ::UnityEngine::Material** StaticGet_rtxgiMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FA0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIApplyGIInPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FA8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIDisableMultiBounce()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FB0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIRaySort()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FB8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIMicroAO()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FC0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGIMetallicLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FC8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIDISSSReshade()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FD0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIShadingTraceShadow()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FD8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGIMultiBounceAlbedoLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FE0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIFloatBufferFormat()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FE8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightDelta()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FF0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIDISSSRT()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x4FF8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIAddLocallightScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5000);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableRTXGI()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5008);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Camera*>** StaticGet_s_RTXGIEnabledCameras()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5010);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Camera*>** StaticGet_s_RTXGIEnabledCamerasToRemove()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5018);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGIRoughnessLut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5020);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIRayBudget()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5028);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXGIMultiBounceScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5030);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIHighQualityShader()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5038);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIGPUPageFault()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5040);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGISubstepNum()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5048);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>** StaticGet_RTXGILut()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleObjectT_1<::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5050);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIGPUHang()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5058);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXGIRaySortPassNum()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x5060);
		}
		static ::System::Boolean* StaticGet_GPUCrashDiagnosticsEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28A0);
		}
		static ::System::Boolean* StaticGet_s_LastEnableRTXGIValueWithoutCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28A1);
		}
		static ::System::Boolean* StaticGet_s_bHasOutScopeTexture()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28A2);
		}
		static ::System::Int32* StaticGet_s_RTXGIEnabledCamerasTrimFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28A4);
		}
		static ::System::Int32* StaticGet_EnableForwardGBufferId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28A8);
		}
		static ::System::Int32* StaticGet_s_RTXGIAddLocallightMinDistId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28AC);
		}
		static ::System::Int32* StaticGet_s_RTXGIAddLocallightMaxDistId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28B0);
		}
		static ::System::Int32* StaticGet_s_RTXGISkyDiffuseScaleId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28B4);
		}
		static ::System::Int32* StaticGet_s_RTXGIBoostId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28B8);
		}
		static ::System::Int32* StaticGet_s_RTXGISpecBoostId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28BC);
		}
		static ::System::Int32* StaticGet_s_RTXGIQualityPresetId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28C0);
		}
		static ::System::Int32* StaticGet_s_RTXGISkySpecularScaleId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXGI_TypeDefinitionIndex)->GetStaticField(0x28C4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetCVarIdChecked(::System::Int32& cachedId, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETCVARIDCHECKED_OFFSET))(cachedId, name);
		}

		static ::System::Int32 get_RTXGIQualityPreset()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGIQUALITYPRESET_OFFSET))();
		}

		static ::System::Void set_RTXGIQualityPreset(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_SET_RTXGIQUALITYPRESET_OFFSET))(value);
		}

		static ::System::Single get_RTXGIBoost()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGIBOOST_OFFSET))();
		}

		static ::System::Single get_RTXGISpecBoost()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGISPECBOOST_OFFSET))();
		}

		static ::System::Single get_RTXGISkyDiffuseScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGISKYDIFFUSESCALE_OFFSET))();
		}

		static ::System::Single get_RTXGISkySpecularScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGISKYSPECULARSCALE_OFFSET))();
		}

		static ::System::Single get_RTXGIAddLocallightMinDist()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGIADDLOCALLIGHTMINDIST_OFFSET))();
		}

		static ::System::Single get_RTXGIAddLocallightMaxDist()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GET_RTXGIADDLOCALLIGHTMAXDIST_OFFSET))();
		}

		static ::System::Boolean RTXGIEnabled(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RTXGIENABLED_OFFSET))(renderingData);
		}

		static ::System::Void UpdateRTXGIEnabledState(::UnityEngine::Camera* camera, ::System::Boolean enableRTXGI)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_UPDATERTXGIENABLEDSTATE_OFFSET))(camera, enableRTXGI);
		}

		static ::System::Void TrimRTXGIEnabledState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_TRIMRTXGIENABLEDSTATE_OFFSET))();
		}

		static ::System::Single GetDefaultResolutionScale(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel qualityPreset)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETDEFAULTRESOLUTIONSCALE_OFFSET))(qualityPreset);
		}

		static ::System::Single GetDefaultRayBudget(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel qualityPreset)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_GETDEFAULTRAYBUDGET_OFFSET))(qualityPreset);
		}

		static ::System::Void ResetToPreset(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel qualityPreset)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RTXGI_QualityLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RESETTOPRESET_OFFSET))(qualityPreset);
		}

		static ::System::Boolean IsRTXBufferValid(::UnityEngine::ComputeBuffer*& buffer)
		{
			return ((::System::Boolean(*)(::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_ISRTXBUFFERVALID_OFFSET))(buffer);
		}

		static ::System::Boolean Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean adjustLocalLight, ::UnityEngine::Rendering::RenderTargetIdentifier target, ::UnityEngine::Rendering::RenderTargetIdentifier targetAdjustLocalLight)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_EXECUTE_OFFSET))(context, renderingData, adjustLocalLight, target, targetAdjustLocalLight);
		}

		static ::System::Void ReleaseOutScopeGlobalTextures(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RELEASEOUTSCOPEGLOBALTEXTURES_OFFSET))(cmd);
		}
	};
}
