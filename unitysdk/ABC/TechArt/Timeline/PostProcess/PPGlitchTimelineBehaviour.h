#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/PPGlitchParams.h"

namespace ABC::CustomRenderPipeline { class CustomPPMatPass; }
namespace UnityEngine { class Material; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x2891D90)
#define ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x2891E30)
#define ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x2891EA0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x2892190)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int PPGlitchTimelineBehaviour_TypeDefinitionIndex = 16160;

	class PPGlitchTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::PPGlitchParams PPGlitchParams; // 0x20
		::UnityEngine::Material* _material; // 0x30

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::CustomPPMatPass* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::CustomPPMatPass*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void SetParams(::ABC::CustomRenderPipeline::CustomPPMatPass* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::CustomPPMatPass*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHTIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}
	};
}
