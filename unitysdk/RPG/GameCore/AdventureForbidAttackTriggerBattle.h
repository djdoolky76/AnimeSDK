#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureForbidAttackTriggerBattle; }

#define RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C8230)
#define RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C8240)
#define RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C8200)

namespace RPG::GameCore
{
	class AdventureForbidAttackTriggerBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsForbid; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureForbidAttackTriggerBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureForbidAttackTriggerBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFORBIDATTACKTRIGGERBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
