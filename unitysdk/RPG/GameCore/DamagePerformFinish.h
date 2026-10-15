#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamagePerformFinish; }

#define RPG_GAMECORE_DAMAGEPERFORMFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C33A0)
#define RPG_GAMECORE_DAMAGEPERFORMFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C33B0)
#define RPG_GAMECORE_DAMAGEPERFORMFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C3250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamagePerformFinish_TypeDefinitionIndex = 22624;

	class DamagePerformFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SkipDeathSettlement; // 0x18
		::System::Boolean IsFakeAvatarAttack; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamagePerformFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamagePerformFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamagePerformFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamagePerformFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
