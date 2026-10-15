#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIMapper.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIMapperBinary; }

#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A0DB0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A0DC0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A12E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIMapperBinary_TypeDefinitionIndex = 15555;

	class ComplexSkillAIMapperBinary : public ::RPG::GameCore::ComplexSkillAIMapper
	{
	public:
		::RPG::GameCore::FixPoint FalseValue; // 0x10
		::RPG::GameCore::FixPoint TrueValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIMapperBinary* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIMapperBinary*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIMapperBinary* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIMapperBinary*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
