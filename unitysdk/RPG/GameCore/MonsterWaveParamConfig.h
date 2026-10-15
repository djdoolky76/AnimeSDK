#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterWaveParamConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88F520)
#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88F330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterWaveParamConfig_TypeDefinitionIndex = 18170;

	class MonsterWaveParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt32 HardLevelGroup; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::UInt32 EliteGroup; // 0x20
		::System::UInt32 EliteGroup2; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterWaveParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterWaveParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
