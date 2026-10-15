#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceSkillPropertyValue; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4440)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A4450)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A43F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceSkillPropertyValue_TypeDefinitionIndex = 15535;

	class ComplexSkillAISourceSkillPropertyValue : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::SkillPropertyType PropertyType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceSkillPropertyValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceSkillPropertyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceSkillPropertyValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceSkillPropertyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESKILLPROPERTYVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
