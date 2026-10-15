#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TriggerBattle; }

#define RPG_GAMECORE_TRIGGERBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC16750)
#define RPG_GAMECORE_TRIGGERBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC16760)
#define RPG_GAMECORE_TRIGGERBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC16720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBattle_TypeDefinitionIndex = 21696;

	class TriggerBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EventID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::RPG::GameCore::DynamicFloat* BattleAreaID; // 0x28
		::RPG::GameCore::DynamicFloat* BattleAreaConfigID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
