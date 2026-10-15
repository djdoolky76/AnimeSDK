#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIPostProcess.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIPostProcessUpperGroup; }
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CF460)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CF470)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CF700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIPostProcessUpperGroup_TypeDefinitionIndex = 15563;

	class ComplexSkillAIPostProcessUpperGroup : public ::RPG::GameCore::ComplexSkillAIPostProcess
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CompareValue; // 0x18
		::System::String* AIUpperGroupPriority; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcessUpperGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcessUpperGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcessUpperGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcessUpperGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
