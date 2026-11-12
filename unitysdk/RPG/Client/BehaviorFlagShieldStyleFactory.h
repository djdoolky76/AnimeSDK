#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleMonsterMechanicShieldStyle; }
namespace RPG::Client { class BattleMonsterSingleBlockStyle; }
namespace RPG::Client { class IBattleMonsterBehaviorFlagShieldStyle; }

#define RPG_CLIENT_BEHAVIORFLAGSHIELDSTYLEFACTORY_GETMECHANICSHIELDSTYLE_OFFSET UNITYSDK_OFFSET(0xD1D5340)
#define RPG_CLIENT_BEHAVIORFLAGSHIELDSTYLEFACTORY_GETSINGLEBLOCKSTYLE_OFFSET UNITYSDK_OFFSET(0xD1D52D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BehaviorFlagShieldStyleFactory_TypeDefinitionIndex = 73774;

	class BehaviorFlagShieldStyleFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleMonsterMechanicShieldStyle** StaticGet__MechanicShieldStyle()
		{
			return (::RPG::Client::BattleMonsterMechanicShieldStyle**)UnitySDK::FromName("RPG.Client", "BehaviorFlagShieldStyleFactory")->GetStaticField(0x5A070);
		}

		static ::RPG::Client::BattleMonsterSingleBlockStyle** StaticGet__SingleBlockStyle()
		{
			return (::RPG::Client::BattleMonsterSingleBlockStyle**)UnitySDK::FromName("RPG.Client", "BehaviorFlagShieldStyleFactory")->GetStaticField(0x5A078);
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
