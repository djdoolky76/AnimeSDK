#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget; }
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0560)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D0570)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D0520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceIsCombatPowerWeightedRandomTarget_TypeDefinitionIndex = 15546;

	class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::String* AITagKey; // 0x10
		::RPG::GameCore::FixPoint DefaultAITagValue; // 0x18
		::RPG::GameCore::FixPoint PowerOfCombatPower; // 0x20
		::RPG::GameCore::FixPoint PowerOfDamageCarry; // 0x28
		::System::Boolean OneMinusAITag; // 0x30
		::System::Boolean SumUpServantDamageCarry; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISCOMBATPOWERWEIGHTEDRANDOMTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
