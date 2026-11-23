#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/RadialBlurParams.h"

namespace ABC::CustomRenderPipeline { class RadialBlur; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x2877EB0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x2877FA0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURTIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x2878010)
#define ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x2878540)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int RadialBlurTimelineBehaviour_TypeDefinitionIndex = 16137;

	class RadialBlurTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::RadialBlurParams RadialBlurParams; // 0x20

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}

		::System::Void SetParams(::ABC::CustomRenderPipeline::RadialBlur* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::RadialBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURTIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::RadialBlur* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::RadialBlur*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
