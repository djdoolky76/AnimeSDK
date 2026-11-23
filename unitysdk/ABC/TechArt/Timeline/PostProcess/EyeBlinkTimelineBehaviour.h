#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/EyeBlinkParams.h"

namespace ABC::CustomRenderPipeline { class CustomPPMatPass; }
namespace UnityEngine { class Material; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x28707C0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x2870880)
#define ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKTIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x28708F0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x2870CF0)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int EyeBlinkTimelineBehaviour_TypeDefinitionIndex = 16095;

	class EyeBlinkTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::EyeBlinkParams EyeBlinkParams; // 0x20
		::UnityEngine::Material* _material; // 0x50

		::System::Void SetParams(::ABC::CustomRenderPipeline::CustomPPMatPass* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::CustomPPMatPass*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKTIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::CustomPPMatPass* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::CustomPPMatPass*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}
	};
}
