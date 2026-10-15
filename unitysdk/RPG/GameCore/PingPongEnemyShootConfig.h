#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyShootConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYSHOOTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D916C00)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D916A20)

namespace RPG::GameCore
{
	class PingPongEnemyShootConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ShootID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* UnitNameList; // 0x18
		::System::Single InitShootInterval; // 0x20
		::System::Single ShootInterval; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyShootConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyShootConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
