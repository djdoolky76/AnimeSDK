#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AdventureAfterTeamLeaderChangeModel; }

#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xEFC7E80)
#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xEFC7F60)
#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xEFC7EC0)
#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xEFC7F10)
#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xEFC7E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAfterTeamLeaderChangeModel_TypeDefinitionIndex = 57830;

	class AdventureAfterTeamLeaderChangeModel : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAfterTeamLeaderChangeModel* Init()
		{
			return ((::RPG::GameCore::AdventureAfterTeamLeaderChangeModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

	};
}
