#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNNPEPDNFEA_PEAIKOGICOC.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget; }
namespace RPG::GameCore { class GameEntity; }

#define PNNPEPDNFEA_OECNHCIMKNL_CTOR_OFFSET UNITYSDK_OFFSET(0xC354000)
#define PNNPEPDNFEA_OECNHCIMKNL_FMLBCMGBEBI_OFFSET UNITYSDK_OFFSET(0xC353660)
#define PNNPEPDNFEA_OECNHCIMKNL_JAJPGELBEGD_OFFSET UNITYSDK_OFFSET(0xC3533C0)

inline static constexpr unsigned int PNNPEPDNFEA_OECNHCIMKNL_TypeDefinitionIndex = 54381;

	class PNNPEPDNFEA_OECNHCIMKNL : public ::PNNPEPDNFEA_PEAIKOGICOC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_OECNHCIMKNL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint JAJPGELBEGD(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_OECNHCIMKNL_JAJPGELBEGD_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* FMLBCMGBEBI(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + PNNPEPDNFEA_OECNHCIMKNL_FMLBCMGBEBI_OFFSET))(this, a1);
		}

	};
