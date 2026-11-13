#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIPostProcess.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIPostProcessPreCheckFail; }

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F51A5F0)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F51A600)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F51A9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIPostProcessPreCheckFail_TypeDefinitionIndex = 15720;

	class ComplexSkillAIPostProcessPreCheckFail : public ::RPG::GameCore::ComplexSkillAIPostProcess
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CompareValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcessPreCheckFail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcessPreCheckFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIPostProcessPreCheckFail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIPostProcessPreCheckFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
