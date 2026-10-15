#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/ColorGradingParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE914D80)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xE914CE0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE913DF0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ColorGradingTimelineBehaviour_TypeDefinitionIndex = 48558;

	class ColorGradingTimelineBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::ColorGradingParameter ColorGradingParameter; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x198
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINEBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

	};
}
