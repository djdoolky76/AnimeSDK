#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class GradientTexture; }
namespace UnityEngine { class Texture2D; }

#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x2819DF0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int LensFlareElement_TypeDefinitionIndex = 16847;

	class LensFlareElement : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* flareGradientTex; // 0x10
		::ABC::CustomRenderPipeline::GradientTexture* falreColorCurve; // 0x18
		::System::Single flareSizeScale; // 0x20
		::System::Single flareAlphaScale; // 0x24
		::System::Single flareOffsetScale; // 0x28
		::System::Single flareAspect; // 0x2C
		::System::Single flareRotation; // 0x30
		::System::Boolean useColorTex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREELEMENT__CTOR_OFFSET))(this);
		}
	};
}
