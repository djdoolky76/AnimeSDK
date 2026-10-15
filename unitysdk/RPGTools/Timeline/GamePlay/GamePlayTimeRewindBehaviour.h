#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline::GamePlay { class GamePlayTimeRewindClip; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0xE8F2A90)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F2C70)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_DEIMGIGLHLK_OFFSET UNITYSDK_OFFSET(0xE8F26C0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_GCAEJDGONEP_OFFSET UNITYSDK_OFFSET(0xE8F27E0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8F24D0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_GNPJEGLBBJC_OFFSET UNITYSDK_OFFSET(0xE8F29F0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_MFFILFPOOJO_OFFSET UNITYSDK_OFFSET(0xE8F2AE0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE8F2960)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8F2630)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xE8F24F0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE8F25D0)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8F24E0)

namespace RPGTools::Timeline::GamePlay
{
	inline static constexpr unsigned int GamePlayTimeRewindBehaviour_TypeDefinitionIndex = 48654;

	class GamePlayTimeRewindBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip* _Clip_k__BackingField; // 0x10
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x18
		::System::Boolean _Showing; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip* get_Clip()
		{
			return ((::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::GamePlay::GamePlayTimeRewindClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void DEIMGIGLHLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_DEIMGIGLHLK_OFFSET))(this);
		}

		::System::Void GNPJEGLBBJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_GNPJEGLBBJC_OFFSET))(this);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Void GCAEJDGONEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_GCAEJDGONEP_OFFSET))(this);
		}

		::System::Void MFFILFPOOJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDBEHAVIOUR_MFFILFPOOJO_OFFSET))(this);
		}

	};
}
