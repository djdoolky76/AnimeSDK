#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimRefillPlayerDashEnergyAction; }

#define RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E1930)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8E1940)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8E18C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRefillPlayerDashEnergyAction_TypeDefinitionIndex = 18926;

	class FiveDimRefillPlayerDashEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
