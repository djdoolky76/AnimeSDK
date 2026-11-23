#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/DOFParams.h"

namespace ABC::CustomRenderPipeline { class DOF; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_DOFTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x289BB00)
#define ABC_TECHART_TIMELINE_POSTPROCESS_DOFTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x289BBB0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_DOFTIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x289BC20)
#define ABC_TECHART_TIMELINE_POSTPROCESS_DOFTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x289BEB0)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int DOFTimelineBehaviour_TypeDefinitionIndex = 16219;

	class DOFTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::DOFParams DOFParams; // 0x20

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_DOFTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}

		::System::Void SetParams(::ABC::CustomRenderPipeline::DOF* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::DOF*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_DOFTIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::DOF* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::DOF*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_DOFTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_DOFTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
