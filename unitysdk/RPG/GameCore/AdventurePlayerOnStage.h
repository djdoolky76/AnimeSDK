#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AdventurePlayerOnStage; }

#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE57C3E0)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE57C330)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE57C380)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xE57C3C0)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0xE57C2E0)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xE57C3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerOnStage_TypeDefinitionIndex = 56605;

	class AdventurePlayerOnStage : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 _EntityID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePlayerOnStage* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AdventurePlayerOnStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_INIT_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_SET_ENTITYID_OFFSET))(this, a1);
		}

	};
}
