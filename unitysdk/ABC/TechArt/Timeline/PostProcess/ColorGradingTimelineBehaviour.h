#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/ColorGradingParams.h"

namespace ABC::CustomRenderPipeline { class ColorGrading; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x2899560)
#define ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x2899600)
#define ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGTIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x28996A0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x2899940)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int ColorGradingTimelineBehaviour_TypeDefinitionIndex = 16229;

	class ColorGradingTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::ColorGradingParams ColorGradingParams; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::ColorGrading* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::ColorGrading*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}

		::System::Void SetParams(::ABC::CustomRenderPipeline::ColorGrading* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::ColorGrading*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGTIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}
	};
}
