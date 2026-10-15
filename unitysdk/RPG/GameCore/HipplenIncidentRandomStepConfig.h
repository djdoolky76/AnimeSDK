#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenIncidentRandomStepConfig; }
namespace RPG::GameCore { class HipplenIncidentStepConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7400E0)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7400F0)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D740090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentRandomStepConfig_TypeDefinitionIndex = 16807;

	class HipplenIncidentRandomStepConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Weights; // 0x10
		::Il2CppArray<::RPG::GameCore::HipplenIncidentStepConfig*>* Steps; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentRandomStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentRandomStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenIncidentRandomStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenIncidentRandomStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
