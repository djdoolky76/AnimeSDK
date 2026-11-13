#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleMonsterMechanicShieldStyle; }
namespace RPG::Client { class BattleMonsterSingleBlockStyle; }
namespace RPG::Client { class IBattleMonsterBehaviorFlagShieldStyle; }

#define RPG_CLIENT_BEHAVIORFLAGSHIELDSTYLEFACTORY_GETMECHANICSHIELDSTYLE_OFFSET UNITYSDK_OFFSET(0x1CD97820)
#define RPG_CLIENT_BEHAVIORFLAGSHIELDSTYLEFACTORY_GETSINGLEBLOCKSTYLE_OFFSET UNITYSDK_OFFSET(0x1CD977B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BehaviorFlagShieldStyleFactory_TypeDefinitionIndex = 73773;

	class BehaviorFlagShieldStyleFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleMonsterSingleBlockStyle** StaticGet__SingleBlockStyle()
		{
			return (::RPG::Client::BattleMonsterSingleBlockStyle**)UnitySDK::FromName("RPG.Client", "BehaviorFlagShieldStyleFactory")->GetStaticField(0x68700);
		}

		static ::RPG::Client::BattleMonsterMechanicShieldStyle** StaticGet__MechanicShieldStyle()
		{
			return (::RPG::Client::BattleMonsterMechanicShieldStyle**)UnitySDK::FromName("RPG.Client", "BehaviorFlagShieldStyleFactory")->GetStaticField(0x68708);
		}

		static ::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle* GetSingleBlockStyle()
		{
			return ((::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORFLAGSHIELDSTYLEFACTORY_GETSINGLEBLOCKSTYLE_OFFSET))();
		}

		static ::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle* GetMechanicShieldStyle()
		{
			return ((::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORFLAGSHIELDSTYLEFACTORY_GETMECHANICSHIELDSTYLE_OFFSET))();
		}

	};
}
