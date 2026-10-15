#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnergyBarConfig; }

#define RPG_GAMECORE_ENERGYBARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D641F50)
#define RPG_GAMECORE_ENERGYBARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D641E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnergyBarConfig_TypeDefinitionIndex = 16548;

	class EnergyBarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EnergyBarType EnergyBarType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnergyBarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnergyBarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
