#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AdventureBeforeTeamLeaderChangeModel; }

#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xE54BDC0)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE54BEA0)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE54BE00)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE54BE50)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xE54BD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBeforeTeamLeaderChangeModel_TypeDefinitionIndex = 56607;

	class AdventureBeforeTeamLeaderChangeModel : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureBeforeTeamLeaderChangeModel* Init()
		{
			return ((::RPG::GameCore::AdventureBeforeTeamLeaderChangeModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

	};
}
