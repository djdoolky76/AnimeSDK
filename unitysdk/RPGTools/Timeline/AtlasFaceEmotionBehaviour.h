#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B0FB0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xE8B0DF0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE8B0E10)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_HNIBELOIPOD_OFFSET UNITYSDK_OFFSET(0xE8B0ED0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8B0E30)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xE8B0E00)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE8B0E20)

namespace RPGTools::Timeline
{
	class AtlasFaceEmotionBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName_k__BackingField; // 0x10
		::RPG::GameCore::CharacterAtlasFaceEmotion* _Config_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterAtlasFaceEmotion* get_Config()
		{
			return ((::RPG::GameCore::CharacterAtlasFaceEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::CharacterAtlasFaceEmotion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void HNIBELOIPOD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_HNIBELOIPOD_OFFSET))(this, a1);
		}

	};
}
