#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ArchiveAsset.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class ArchiveAsset; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0xE8B0B10)
#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B0BE0)
#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xE8B0AF0)
#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xE8B0A80)
#define RPGTOOLS_TIMELINE_ARCHIVECHARACTER_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0xE8B0B00)

namespace RPGTools::Timeline
{
	class ArchiveCharacter : public ::RPGTools::Timeline::ArchiveAsset
	{
	public:
		::System::String* UniqueName; // 0x20
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER_GET_ISPLAYER_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER_SET_ENTITY_OFFSET))(this, a1);
		}

		::System::Boolean ABNMKAPKMGF(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVECHARACTER_ABNMKAPKMGF_OFFSET))(this, a1);
		}

	};
}
