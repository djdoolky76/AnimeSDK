#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class GDLANOHKANB;
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C4370)
#define RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_GET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE8C4220)
#define RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8C4240)
#define RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_SET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE8C4230)

namespace RPGTools::Timeline
{
	class ChangeStageItemLocationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
		::UnityEngine::Vector3 Position; // 0x20
		::System::Byte _padding0[0x4];
		::GDLANOHKANB* _TrackMixer_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::GDLANOHKANB* get_TrackMixer()
		{
			return ((::GDLANOHKANB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_GET_TRACKMIXER_OFFSET))(this);
		}

		::System::Void set_TrackMixer(::GDLANOHKANB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDLANOHKANB*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_SET_TRACKMIXER_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGESTAGEITEMLOCATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
