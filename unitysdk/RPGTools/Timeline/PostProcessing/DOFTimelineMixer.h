#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER_CTOR_OFFSET UNITYSDK_OFFSET(0xF3FF790)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF3FEB80)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineMixer_TypeDefinitionIndex = 49611;

	class DOFTimelineMixer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

	};
}
