#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIPostProcess.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIPostProcessClamp; }

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A1700)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A1710)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A1C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIPostProcessClamp_TypeDefinitionIndex = 15560;

	class ComplexSkillAIPostProcessClamp : public ::RPG::GameCore::ComplexSkillAIPostProcess
	{
	public:
		::RPG::GameCore::FixPoint minValue; // 0x10
		::RPG::GameCore::FixPoint maxValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcessClamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcessClamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcessClamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcessClamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
