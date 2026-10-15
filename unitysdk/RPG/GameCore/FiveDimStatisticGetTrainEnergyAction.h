#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStatisticGetTrainEnergyAction; }

#define RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1420)
#define RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B1430)
#define RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B13B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStatisticGetTrainEnergyAction_TypeDefinitionIndex = 18758;

	class FiveDimStatisticGetTrainEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
