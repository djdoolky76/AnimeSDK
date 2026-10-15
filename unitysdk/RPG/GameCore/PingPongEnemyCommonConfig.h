#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyCommonConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYCOMMONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D915960)
#define RPG_GAMECORE_PINGPONGENEMYCOMMONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D915820)

namespace RPG::GameCore
{
	class PingPongEnemyCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DefaultUnitPrefabPath; // 0x10
		::System::Single UnitFallSpeed; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCOMMONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyCommonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyCommonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCOMMONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
