#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IBattleMonsterBehaviorFlagShieldStyle; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_SUBPANELINITPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E5DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterShieldPanel_SubPanelInitParam_TypeDefinitionIndex = 73765;

	class BattleMonsterShieldPanel_SubPanelInitParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle* Style; // 0x18
		::System::Action* OrderableTransChangedCallback; // 0x20
		::System::Boolean IsBossPanel; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_SUBPANELINITPARAM_CTOR_OFFSET))(this);
		}

	};
}
