#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceValue; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D20D0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D20E0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D2080)

namespace RPG::GameCore
{
	class ComplexSkillAISourceValue : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueType ValueType; // 0x10
		::System::Boolean IsTarget; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
