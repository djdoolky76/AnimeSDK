#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTrainEnergySpeedMapItem; }
namespace RPG::GameCore { class FiveDimTrainLevelConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3A00)
#define RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B3810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTrainLevelConfig_TypeDefinitionIndex = 18532;

	class FiveDimTrainLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EnergyLevelVarName; // 0x10
		::System::String* DistanceDynamicValueName; // 0x18
		::System::Single MaxEnergy; // 0x20
		::System::Single MaxEnergyForDisplay; // 0x24
		::Il2CppArray<::RPG::GameCore::FiveDimTrainEnergySpeedMapItem*>* SpeedMapping; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTrainLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTrainLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
