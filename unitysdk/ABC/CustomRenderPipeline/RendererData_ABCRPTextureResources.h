#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }

#define ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_ABCRPTEXTURERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int RendererData_ABCRPTextureResources_TypeDefinitionIndex = 16659;

	class RendererData_ABCRPTextureResources : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* capsuleBakeTex; // 0x10
		::UnityEngine::Texture2D* areaLightLTCLut0; // 0x18
		::UnityEngine::Texture2D* areaLightLTCLut1; // 0x20
		::UnityEngine::Texture3D* windTurbulenceNoiseTex; // 0x28
		::UnityEngine::Texture3D* volumetricNoiseTex; // 0x30
		::UnityEngine::Texture2D* blueNoiseTex; // 0x38
		::UnityEngine::Texture2D* perlinNoiseTex; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_ABCRPTEXTURERESOURCES__CTOR_OFFSET))(this);
		}
	};
}
