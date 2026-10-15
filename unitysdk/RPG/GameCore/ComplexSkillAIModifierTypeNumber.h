#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIModifierTypeNumber; }

#define RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CEE50)
#define RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CEE60)
#define RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CEE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIModifierTypeNumber_TypeDefinitionIndex = 15549;

	class ComplexSkillAIModifierTypeNumber : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::EnumStatusType ModifierType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIModifierTypeNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIModifierTypeNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIModifierTypeNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIModifierTypeNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMODIFIERTYPENUMBER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
