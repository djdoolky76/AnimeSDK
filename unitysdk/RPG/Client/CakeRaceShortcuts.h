#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGENEONNBML;
class DACLGPPLFMO;
class JBACCAGFHON;
class KMIDLAEIFEA;
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }

#define RPG_CLIENT_CAKERACESHORTCUTS_GET_COREINSTANCE_OFFSET UNITYSDK_OFFSET(0xD28E010)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xD28DEC0)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD28E0D0)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0xD27CB40)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0xD28DFC0)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0xD28CC90)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceShortcuts_TypeDefinitionIndex = 64450;

	class CakeRaceShortcuts : public ::System::Object
	{
	public:
		static ::JBACCAGFHON** StaticGet_Services()
		{
			return (::JBACCAGFHON**)UnitySDK::FromName("RPG.Client", "CakeRaceShortcuts")->GetStaticField(0xA030);
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
