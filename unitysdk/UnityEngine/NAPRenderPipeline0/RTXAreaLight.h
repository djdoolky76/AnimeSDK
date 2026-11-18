#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXRenderer.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class RTXAreaLight_HistoryBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1F7700A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_GATHERAREALIGHT_OFFSET UNITYSDK_OFFSET(0x1F770090)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_RTXAREALIGHTENABLED_OFFSET UNITYSDK_OFFSET(0x1F770080)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F770140)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7700F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXAreaLight_TypeDefinitionIndex = 5808;

	class RTXAreaLight : public ::UnityEngine::NAPRenderPipeline0::RTXRenderer
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableRTXAL()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXAreaLight_TypeDefinitionIndex)->GetStaticField(0x5330);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXALSuperSampleWhenReprojectionFailed()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAreaLight_TypeDefinitionIndex)->GetStaticField(0x5338);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXALSPP()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAreaLight_TypeDefinitionIndex)->GetStaticField(0x5340);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXALDebugMode()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAreaLight_TypeDefinitionIndex)->GetStaticField(0x5348);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_RTXALBoost()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXAreaLight_TypeDefinitionIndex)->GetStaticField(0x5350);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXALDiffuseOnly()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXAreaLight_TypeDefinitionIndex)->GetStaticField(0x5358);
		}
		static ::UnityEngine::Material** StaticGet_rtxgiMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RTXAreaLight_TypeDefinitionIndex)->GetStaticField(0x5360);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_RTXALShadowSPP()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RTXAreaLight_TypeDefinitionIndex)->GetStaticField(0x5368);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT__CCTOR_OFFSET))();
		}

		static ::System::Boolean RTXAreaLightEnabled(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_RTXAREALIGHTENABLED_OFFSET))(renderingData);
		}

		static ::System::Void GatherAreaLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, ::UnityEngine::NAPRenderPipeline0::RTXAreaLight_HistoryBuffer* hb)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::UnityEngine::NAPRenderPipeline0::RTXAreaLight_HistoryBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_GATHERAREALIGHT_OFFSET))(cmd, cs, hb);
		}

		static ::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier target)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXAREALIGHT_EXECUTE_OFFSET))(context, renderingData, target);
		}
	};
}
