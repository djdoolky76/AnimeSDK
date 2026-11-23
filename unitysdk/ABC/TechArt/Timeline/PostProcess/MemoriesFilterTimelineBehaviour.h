#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/Timeline/PostProcess/MemoriesFilterParams.h"

namespace ABC::CustomRenderPipeline { class CustomPPMatPass; }
namespace UnityEngine { class Material; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET UNITYSDK_OFFSET(0x28A5DF0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x28A5EC0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERTIMELINEBEHAVIOUR_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x28A5F30)
#define ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x28A6320)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int MemoriesFilterTimelineBehaviour_TypeDefinitionIndex = 16216;

	class MemoriesFilterTimelineBehaviour
	{
	public:
		::ABC::TechArt::Timeline::PostProcess::MemoriesFilterParams MemoriesFilterParams; // 0x20
		::UnityEngine::Material* _material; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void SetParams(::ABC::CustomRenderPipeline::CustomPPMatPass* F1EE4CF10E4B5F91, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::CustomPPMatPass*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERTIMELINEBEHAVIOUR_SETPARAMS_OFFSET))(this, F1EE4CF10E4B5F91, FFA00246E8ABA57B);
		}

		::System::Void CleanStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERTIMELINEBEHAVIOUR_CLEANSTATES_OFFSET))(this);
		}

		::System::Void DisablePostProcess(::ABC::CustomRenderPipeline::CustomPPMatPass* F1EE4CF10E4B5F91)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::CustomPPMatPass*))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERTIMELINEBEHAVIOUR_DISABLEPOSTPROCESS_OFFSET))(this, F1EE4CF10E4B5F91);
		}
	};
}
