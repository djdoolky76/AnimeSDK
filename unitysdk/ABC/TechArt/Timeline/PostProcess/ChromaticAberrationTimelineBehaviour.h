#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/ChromaticAberrationParams.h"

namespace ABC::CustomRenderPipeline { class ChromaticAberration; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x2854E00)
#define ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x2854F10)
#define ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONTIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x2854F80)
#define ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x2855210)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int ChromaticAberrationTimelineBehaviour_TypeDefinitionIndex = 16062;

	class ChromaticAberrationTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::ChromaticAberrationParams ChromaticAberrationParams; // 0x20

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}

		::System::Void SetParams(::ABC::CustomRenderPipeline::ChromaticAberration* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::ChromaticAberration*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONTIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::ChromaticAberration* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::ChromaticAberration*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
