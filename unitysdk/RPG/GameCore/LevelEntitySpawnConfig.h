#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntitySpawnConfig; }
namespace RPG::GameCore { class LevelEntitySpawnConfig; }

#define RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AC4E0)
#define RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC4F0)
#define RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7AC2C0)

namespace RPG::GameCore
{
	class LevelEntitySpawnConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean OverrideSpawn; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::EntitySpawnConfig* EntitySpawnConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelEntitySpawnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelEntitySpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelEntitySpawnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelEntitySpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
