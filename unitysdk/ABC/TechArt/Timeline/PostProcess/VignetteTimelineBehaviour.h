#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/VignetteParams.h"

namespace ABC::CustomRenderPipeline { class Vignette; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTETIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x28981C0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTETIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x2898290)
#define ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTETIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x2898300)
#define ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTETIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x28985A0)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int VignetteTimelineBehaviour_TypeDefinitionIndex = 16176;

	class VignetteTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::VignetteParams VignetteParams; // 0x20

		::System::Void SetParams(::ABC::CustomRenderPipeline::Vignette* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Vignette*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTETIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::Vignette* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Vignette*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTETIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTETIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTETIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}
	};
}
