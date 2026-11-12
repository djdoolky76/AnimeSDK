#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class GNHOCJLBCEB;
namespace RPGTools::Timeline { class NpcPossessionClip; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF3ED070)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xF3ECC20)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_GET_TRACKINSTANCEID_OFFSET UNITYSDK_OFFSET(0xF3ECC40)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF3ECC60)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF3ECE80)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xF3ECC30)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NpcPossessionBehaviour_TypeDefinitionIndex = 49250;

	class NpcPossessionBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::NpcPossessionClip* _Clip_k__BackingField; // 0x10
		::GNHOCJLBCEB* _PossessionCmpt; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::NpcPossessionClip* get_Clip()
		{
			return ((::RPGTools::Timeline::NpcPossessionClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::NpcPossessionClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::NpcPossessionClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::String* get_TrackInstanceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_GET_TRACKINSTANCEID_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

	};
}
