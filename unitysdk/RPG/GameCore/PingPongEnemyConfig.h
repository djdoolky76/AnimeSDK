#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyConfig; }
namespace RPG::GameCore { class PingPongEnemyGroupConfig; }
namespace RPG::GameCore { class PingPongEnemyShootConfig; }
namespace RPG::GameCore { class PingPongEnemyStackConfig; }
namespace RPG::GameCore { class PingPongEnemyUnitConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D915BC0)
#define RPG_GAMECORE_PINGPONGENEMYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D915970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyConfig_TypeDefinitionIndex = 16991;

	class PingPongEnemyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::Il2CppArray<::RPG::GameCore::PingPongEnemyUnitConfig*>* UnitList; // 0x18
		::Il2CppArray<::RPG::GameCore::PingPongEnemyStackConfig*>* StackList; // 0x20
		::Il2CppArray<::RPG::GameCore::PingPongEnemyShootConfig*>* ShootList; // 0x28
		::Il2CppArray<::RPG::GameCore::PingPongEnemyGroupConfig*>* GroupList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
