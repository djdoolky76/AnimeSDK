#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIFactorGroupWeight.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIFactorGroupWeightEx; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CE0E0)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CE0F0)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CE290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIFactorGroupWeightEx_TypeDefinitionIndex = 17671;

	class ComplexSkillAIFactorGroupWeightEx : public ::RPG::GameCore::ComplexSkillAIFactorGroupWeight
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
