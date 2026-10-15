#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourcePropertyCompareEX; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A3970)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A3980)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A3920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourcePropertyCompareEX_TypeDefinitionIndex = 15520;

	class ComplexSkillAISourcePropertyCompareEX : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTargetA; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AbilityProperty PropertyTypeA; // 0x14
		::System::Boolean FromTargetB; // 0x18
		::System::Byte _padding1[0x3];
		::RPG::GameCore::AbilityProperty PropertyTypeB; // 0x1C
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareEX* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareEX* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPAREEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
