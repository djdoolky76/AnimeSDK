#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetRedStance; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETREDSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98B770)
#define RPG_GAMECORE_RESETREDSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98B780)
#define RPG_GAMECORE_RESETREDSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98B730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetRedStance_TypeDefinitionIndex = 22629;

	class ResetRedStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Boolean SkipLockTeamStance; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETREDSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetRedStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETREDSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetRedStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETREDSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
