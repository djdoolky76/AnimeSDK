#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureTriggerFastRun; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E902780)
#define RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E902790)
#define RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E902750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerFastRun_TypeDefinitionIndex = 20520;

	class AdventureTriggerFastRun : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TransitionTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerFastRun* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerFastRun*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerFastRun* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerFastRun*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
