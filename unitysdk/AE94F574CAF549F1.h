#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class AdditionalLightData; }
namespace UnityEngine { class Light; }

#define AE94F574CAF549F1_B08233421FE396E2_OFFSET UNITYSDK_OFFSET(0x281C550)

inline static constexpr unsigned int AE94F574CAF549F1_TypeDefinitionIndex = 16841;

class AE94F574CAF549F1 : public ::System::Object
{
public:
	static ::UnityEngine::Light* B08233421FE396E2(::ABC::CustomRenderPipeline::AdditionalLightData* A6AFAF104AE440CA)
	{
		return ((::UnityEngine::Light*(*)(::ABC::CustomRenderPipeline::AdditionalLightData*))((::PBYTE)hIl2Cpp + AE94F574CAF549F1_B08233421FE396E2_OFFSET))(A6AFAF104AE440CA);
	}
};
