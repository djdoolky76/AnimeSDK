#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_AddCurrentTurnMaxRollCount; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E2EC0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E2ED0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E2E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AddCurrentTurnMaxRollCount_TypeDefinitionIndex = 16092;

	class DiceCombatTaskConfig_AddCurrentTurnMaxRollCount : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Count; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDCURRENTTURNMAXROLLCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
