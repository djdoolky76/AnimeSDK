#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/MotionBlurParams.h"

namespace ABC::CustomRenderPipeline { class MotionBlur; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x28CCB10)
#define ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x28CCBB0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURTIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x28CCC20)
#define ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x28CCD90)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int MotionBlurTimelineBehaviour_TypeDefinitionIndex = 16312;

	class MotionBlurTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::MotionBlurParams MotionBlurParams; // 0x20

		::System::Void SetParams(::ABC::CustomRenderPipeline::MotionBlur* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::MotionBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURTIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::MotionBlur* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::MotionBlur*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}
	};
}
