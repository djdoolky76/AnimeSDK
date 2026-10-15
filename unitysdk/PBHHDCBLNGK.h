#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class ComplexSkillAISourceWeaknessCompare; }
namespace RPG::GameCore { class GameEntity; }

#define PBHHDCBLNGK_ABBKNAHINIG_OFFSET UNITYSDK_OFFSET(0xBFE6DA0)
#define PBHHDCBLNGK_JMPDCKBCPND_OFFSET UNITYSDK_OFFSET(0xBFE7170)

inline static constexpr unsigned int PBHHDCBLNGK_TypeDefinitionIndex = 54358;

	class PBHHDCBLNGK : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint ABBKNAHINIG(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PBHHDCBLNGK_ABBKNAHINIG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint JMPDCKBCPND(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PBHHDCBLNGK_JMPDCKBCPND_OFFSET))(a1, a2, a3);
		}

	};
