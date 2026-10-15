#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceModifierValue; }
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0D10)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D0D20)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D0CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceModifierValue_TypeDefinitionIndex = 15534;

	class ComplexSkillAISourceModifierValue : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ModifierValueType ValueType; // 0x10
		::System::Boolean IsTarget; // 0x14
		::System::Boolean SumAllTarget; // 0x15
		::System::Byte _padding0[0x2];
		::System::String* ModifilerName; // 0x18
		::RPG::GameCore::NumOperationType OperationType; // 0x20
		::System::Boolean StringFromParam; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMODIFIERVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
