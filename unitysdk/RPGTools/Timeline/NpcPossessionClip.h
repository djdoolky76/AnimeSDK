#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE907260)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE907450)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE907230)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_GET_TRACKINSTANCEID_OFFSET UNITYSDK_OFFSET(0xE907240)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_OEFLEMIOCBA_OFFSET UNITYSDK_OFFSET(0xE907400)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_OHACNLFALFK_OFFSET UNITYSDK_OFFSET(0xE9073C0)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_SET_TRACKINSTANCEID_OFFSET UNITYSDK_OFFSET(0xE907250)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NpcPossessionClip_TypeDefinitionIndex = 48211;

	class NpcPossessionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Boolean IsDelete; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single DitherTime; // 0x24
		::RPG::GameCore::LevelNPCPossessionInfo* PossessionInfo; // 0x28
		::System::Action* OnLevelNPCPossessionInfoChanged; // 0x30
		::System::String* _TrackInstanceID_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::String* get_TrackInstanceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_GET_TRACKINSTANCEID_OFFSET))(this);
		}

		::System::Void set_TrackInstanceID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_SET_TRACKINSTANCEID_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::NPCSubType OHACNLFALFK()
		{
			return ((::RPG::GameCore::NPCSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_OHACNLFALFK_OFFSET))(this);
		}

		::System::String* OEFLEMIOCBA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_OEFLEMIOCBA_OFFSET))(this);
		}

	};
}
