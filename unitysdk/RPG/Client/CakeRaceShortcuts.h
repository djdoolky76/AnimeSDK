#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGENEONNBML;
class DACLGPPLFMO;
class JBACCAGFHON;
class KMIDLAEIFEA;
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }

#define RPG_CLIENT_CAKERACESHORTCUTS_GET_COREINSTANCE_OFFSET UNITYSDK_OFFSET(0xC9218E0)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xC921790)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC9219A0)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0xC910520)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0xC921890)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0xC920570)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceShortcuts_TypeDefinitionIndex = 63012;

	class CakeRaceShortcuts : public ::System::Object
	{
	public:
		static ::JBACCAGFHON** StaticGet_Services()
		{
			return (::JBACCAGFHON**)UnitySDK::FromName("RPG.Client", "CakeRaceShortcuts")->GetStaticField(0xADA0);
		}

		static ::System::UInt32 get_PlayerUID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_PLAYERUID_OFFSET))();
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* get_GameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEFLOW_OFFSET))();
		}

		static ::DACLGPPLFMO* get_GameplayManager()
		{
			return ((::DACLGPPLFMO*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYMANAGER_OFFSET))();
		}

		static ::AGENEONNBML* get_CoreInstance()
		{
			return ((::AGENEONNBML*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_COREINSTANCE_OFFSET))();
		}

		static ::RPG::Client::CakeRace::CakeRaceGameplayContext* get_GameplayContext()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYCONTEXT_OFFSET))();
		}

		static ::KMIDLAEIFEA* get_GameInstance()
		{
			return ((::KMIDLAEIFEA*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEINSTANCE_OFFSET))();
		}

	};
}
