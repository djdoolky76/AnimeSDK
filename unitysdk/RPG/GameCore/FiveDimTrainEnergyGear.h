#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FiveDimTrainEnergyGear; }

#define RPG_GAMECORE_FIVEDIMTRAINENERGYGEAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E1160)
#define RPG_GAMECORE_FIVEDIMTRAINENERGYGEAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E0FE0)

namespace RPG::GameCore
{
	class FiveDimTrainEnergyGear : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EnergyGear; // 0x10
		::RPG::GameCore::DynamicFloat* CostEnergy; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINENERGYGEAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTrainEnergyGear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTrainEnergyGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINENERGYGEAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
