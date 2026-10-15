#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIMapper.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAILinearItem; }
namespace RPG::GameCore { class ComplexSkillAIMapperMultiRange; }

#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CEC40)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CEC50)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CEDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIMapperMultiRange_TypeDefinitionIndex = 15557;

	class ComplexSkillAIMapperMultiRange : public ::RPG::GameCore::ComplexSkillAIMapper
	{
	public:
		::Il2CppArray<::RPG::GameCore::ComplexSkillAILinearItem*>* Ranges; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIMapperMultiRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIMapperMultiRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIMapperMultiRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIMapperMultiRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERMULTIRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
