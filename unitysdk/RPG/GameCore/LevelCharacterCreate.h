#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLNEBDEEONP.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELCHARACTERCREATE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6D7CF0)
#define RPG_GAMECORE_LEVELCHARACTERCREATE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6D7D50)
#define RPG_GAMECORE_LEVELCHARACTERCREATE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6D7D00)
#define RPG_GAMECORE_LEVELCHARACTERCREATE_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xE6D7DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterCreate_TypeDefinitionIndex = 56763;

	class LevelCharacterCreate : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::NLNEBDEEONP CreateReason; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::NLNEBDEEONP a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::NLNEBDEEONP))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERCREATE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERCREATE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERCREATE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::String* get_CharacterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERCREATE_GET_CHARACTERNAME_OFFSET))(this);
		}

	};
}
