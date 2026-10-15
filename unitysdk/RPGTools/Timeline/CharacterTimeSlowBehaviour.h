#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterTimeSlowClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D2C40)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8D28C0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_NBCPGGBFHCD_OFFSET UNITYSDK_OFFSET(0xE8D2B50)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8D28E0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8D2A70)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8D28D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterTimeSlowBehaviour_TypeDefinitionIndex = 48025;

	class CharacterTimeSlowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single TimeScale; // 0x10
		::System::Byte _padding0[0x4];
		::RPGTools::Timeline::CharacterTimeSlowClip* _Clip_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x20
		::System::Int32 _TimeScaleIndex; // 0x28
		// static const ::System::Object MaxTimeScale; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CharacterTimeSlowClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CharacterTimeSlowClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CharacterTimeSlowClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterTimeSlowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBCPGGBFHCD(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_NBCPGGBFHCD_OFFSET))(this, a1, a2, a3);
		}

	};
}
