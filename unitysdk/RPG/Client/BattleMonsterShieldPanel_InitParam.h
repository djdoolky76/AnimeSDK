#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_INITPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD1A9AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterShieldPanel_InitParam_TypeDefinitionIndex = 73765;

	class BattleMonsterShieldPanel_InitParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean IsBossPanel; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_INITPARAM_CTOR_OFFSET))(this);
		}

	};
}
