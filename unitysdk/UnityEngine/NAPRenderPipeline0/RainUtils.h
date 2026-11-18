#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::NAPRenderPipeline0 { class IWeatherConfig; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS_DRAWRAINDEPTH_OFFSET UNITYSDK_OFFSET(0x1ECA6380)
#define UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS_DRAWRAINDROPANDRAINSPLASH_OFFSET UNITYSDK_OFFSET(0x1ECA6E00)
#define UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS_DRAWRAINDROP_OFFSET UNITYSDK_OFFSET(0x1ECA6400)
#define UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS_ENSUREASSETS_OFFSET UNITYSDK_OFFSET(0x1ECA60C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECA77A0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RainUtils_TypeDefinitionIndex = 5994;

	class RainUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_s_RainSplashQuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RainUtils_TypeDefinitionIndex)->GetStaticField(0x5460);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_s_RainSplashRandomSeed()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(RainUtils_TypeDefinitionIndex)->GetStaticField(0x5468);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_rainMeshVertices()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(RainUtils_TypeDefinitionIndex)->GetStaticField(0x5470);
		}
		static ::UnityEngine::NAPRenderPipeline0::IWeatherConfig** StaticGet_preWeatherConfig()
		{
			return (::UnityEngine::NAPRenderPipeline0::IWeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(RainUtils_TypeDefinitionIndex)->GetStaticField(0x5478);
		}
		static ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Matrix4x4>*>** StaticGet_s_QuadToWorld()
		{
			return (::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Matrix4x4>*>**)Il2CppClass::FromTypeDefinitionIndex(RainUtils_TypeDefinitionIndex)->GetStaticField(0x5480);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_instanceToVertexId()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RainUtils_TypeDefinitionIndex)->GetStaticField(0x5488);
		}
		static ::System::Int32* StaticGet_s_RainSplashQuadMeshID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RainUtils_TypeDefinitionIndex)->GetStaticField(0x2D50);
		}
		static ::System::Int32* StaticGet_preRainDropBatchCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RainUtils_TypeDefinitionIndex)->GetStaticField(0x2D54);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS_ENSUREASSETS_OFFSET))();
		}

		static ::System::Void DrawRainDepth(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmd, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* env, ::System::Boolean isOffScreenPass)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS_DRAWRAINDEPTH_OFFSET))(renderingData, cmd, env, isOffScreenPass);
		}

		static ::System::Void DrawRainDrop(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmd, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* envConfig, ::System::Int32 rainPass, ::System::Boolean taaEnable)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS_DRAWRAINDROP_OFFSET))(cmd, envConfig, rainPass, taaEnable);
		}

		static ::System::Void DrawRainDropAndRainSplash(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmd, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* envConfig, ::System::Boolean isOffScreenPass)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RAINUTILS_DRAWRAINDROPANDRAINSPLASH_OFFSET))(cameraData, cmd, envConfig, isOffScreenPass);
		}
	};
}
