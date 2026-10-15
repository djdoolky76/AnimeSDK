#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyTriggerDailySettlement; }

#define RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D880430)
#define RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D880440)
#define RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D880370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyTriggerDailySettlement_TypeDefinitionIndex = 20928;

	class MonopolyTriggerDailySettlement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyTriggerDailySettlement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyTriggerDailySettlement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyTriggerDailySettlement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyTriggerDailySettlement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
