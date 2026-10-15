#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER_CTOR_OFFSET UNITYSDK_OFFSET(0xE95CAF0)
#define RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE95C710)

namespace RPGTools::Timeline
{
	class YCorrectionEnableMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName; // 0x10
		::System::Boolean _Work; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_YCORRECTIONENABLEMIXER_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
