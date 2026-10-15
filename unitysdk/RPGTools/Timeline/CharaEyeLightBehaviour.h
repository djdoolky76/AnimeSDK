#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class CharaEyeLight; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C4E60)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xE8C4BD0)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8C4BF0)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8C4D40)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xE8C4BE0)

namespace RPGTools::Timeline
{
	class CharaEyeLightBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single EyeIntensity; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* _CharacterUniqueName_k__BackingField; // 0x18
		::RPG::Client::CharaEyeLight* _MonoEyeLight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

	};
}
