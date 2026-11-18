#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPGlobalMaterials.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_ENSUREINTERNALOBJECTS_OFFSET UNITYSDK_OFFSET(0x1E977E70)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_GETMATERIALWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1E977E30)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E977E20)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1E977E50)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1E977E10)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETMESHES_OFFSET UNITYSDK_OFFSET(0x1E977E60)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETRTXCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1E977EA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETRTXRAYTRACINGSHADERS_OFFSET UNITYSDK_OFFSET(0x1E977E90)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETRTXSHADERS_OFFSET UNITYSDK_OFFSET(0x1E977EB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETTEXTURES_OFFSET UNITYSDK_OFFSET(0x1E977E40)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETUPBLUENOISE16LTEX_OFFSET UNITYSDK_OFFSET(0x1E977E80)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETUPRTXBLUENOISE_OFFSET UNITYSDK_OFFSET(0x1E977EC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E977ED0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GlobalResources_TypeDefinitionIndex = 5712;

	class GlobalResources : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES__CTOR_OFFSET))(this);
		}

		static ::System::Void SetMaterials(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETMATERIALS_OFFSET))(instanceIds);
		}

		static ::UnityEngine::Material* GetMaterial(::UnityEngine::NAPRenderPipeline0::NAPGlobalMaterials tp)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::NAPRenderPipeline0::NAPGlobalMaterials))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_GETMATERIAL_OFFSET))(tp);
		}

		static ::UnityEngine::Material* GetMaterialWithIndex(::System::Int32 index)
		{
			return ((::UnityEngine::Material*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_GETMATERIALWITHINDEX_OFFSET))(index);
		}

		static ::System::Void SetTextures(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETTEXTURES_OFFSET))(instanceIds);
		}

		static ::System::Void SetComputeShaders(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETCOMPUTESHADERS_OFFSET))(instanceIds);
		}

		static ::System::Void SetMeshes(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETMESHES_OFFSET))(instanceIds);
		}

		static ::System::Void EnsureInternalObjects()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_ENSUREINTERNALOBJECTS_OFFSET))();
		}

		static ::System::Void SetupBlueNoise16LTex(::Il2CppArray<::UnityEngine::Texture2D*>* inBlueNoise16Tex, ::Il2CppArray<::UnityEngine::Vector2Int>* inBlueNoise16TexSize)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETUPBLUENOISE16LTEX_OFFSET))(inBlueNoise16Tex, inBlueNoise16TexSize);
		}

		static ::System::Void SetRTXRayTracingShaders(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETRTXRAYTRACINGSHADERS_OFFSET))(instanceIds);
		}

		static ::System::Void SetRTXComputeShaders(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETRTXCOMPUTESHADERS_OFFSET))(instanceIds);
		}

		static ::System::Void SetRTXShaders(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETRTXSHADERS_OFFSET))(instanceIds);
		}

		static ::System::Void SetupRTXBlueNoise(::UnityEngine::TextAsset* rankingTile, ::UnityEngine::TextAsset* sobol, ::UnityEngine::TextAsset* scramblingTile)
		{
			return ((::System::Void(*)(::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETUPRTXBLUENOISE_OFFSET))(rankingTile, sobol, scramblingTile);
		}
	};
}
