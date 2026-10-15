#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyUnitConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYUNITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9172B0)
#define RPG_GAMECORE_PINGPONGENEMYUNITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D917050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyUnitConfig_TypeDefinitionIndex = 16992;

	class PingPongEnemyUnitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::Boolean IsCore; // 0x20
		::System::Boolean IsBreakable; // 0x21
		::System::Boolean CanShoot; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYUNITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYUNITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
