#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/BloomParams.h"

namespace ABC::CustomRenderPipeline { class Bloom; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x28D66E0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x28D67B0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMTIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x28D6820)
#define ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x28D6AC0)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int BloomTimelineBehaviour_TypeDefinitionIndex = 16378;

	class BloomTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::BloomParams BloomParams; // 0x20

		::System::Void SetParams(::ABC::CustomRenderPipeline::Bloom* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Bloom*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMTIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::Bloom* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Bloom*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
