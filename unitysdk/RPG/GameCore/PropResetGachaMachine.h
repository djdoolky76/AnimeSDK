#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropResetGachaMachine; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPRESETGACHAMACHINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D925580)
#define RPG_GAMECORE_PROPRESETGACHAMACHINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9255B0)
#define RPG_GAMECORE_PROPRESETGACHAMACHINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D925530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropResetGachaMachine_TypeDefinitionIndex = 21971;

	class PropResetGachaMachine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETGACHAMACHINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropResetGachaMachine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropResetGachaMachine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETGACHAMACHINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropResetGachaMachine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropResetGachaMachine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETGACHAMACHINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
