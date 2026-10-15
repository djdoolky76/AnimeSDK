#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyShootOverrideConfig; }

#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D916EE0)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D916D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyShootOverrideConfig_TypeDefinitionIndex = 18939;

	class PingPongEnemyShootOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ShootID; // 0x10
		::System::Single InitShootInterval; // 0x14
		::System::Single ShootInterval; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyShootOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyShootOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
