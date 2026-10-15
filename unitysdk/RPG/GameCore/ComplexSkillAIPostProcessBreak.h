#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIPostProcess.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIPostProcessBreak; }

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CEF00)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CEF10)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CF660)

namespace RPG::GameCore
{
	class ComplexSkillAIPostProcessBreak : public ::RPG::GameCore::ComplexSkillAIPostProcess
	{
	public:
		::System::Boolean UseFinalScore; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x14
		::RPG::GameCore::FixPoint CompareValue; // 0x18
		::System::Boolean IsOverrideFinalScore; // 0x20
		::System::Byte _padding1[0x7];
		::RPG::GameCore::FixPoint FinalScore; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcessBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcessBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcessBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcessBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
