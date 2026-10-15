#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE903700)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_FEKGFLIGDJP_OFFSET UNITYSDK_OFFSET(0xE903480)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_OMJHNBJIILF_OFFSET UNITYSDK_OFFSET(0xE903600)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE903380)

namespace RPGTools::Timeline::Hipplen
{
	class HipplenMiniAnimBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::AnimatorParameterType AnimatorParameterType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ParamName; // 0x18
		::System::String* Value; // 0x20
		::System::String* CharacterUniqueName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void FEKGFLIGDJP(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_FEKGFLIGDJP_OFFSET))(this, a1);
		}

		::System::Void OMJHNBJIILF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENMINIANIMBEHAVIOUR_OMJHNBJIILF_OFFSET))(this);
		}

	};
}
