#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceCompareHPRatioIncludeShield; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A22B0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A22C0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A2260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceCompareHPRatioIncludeShield_TypeDefinitionIndex = 15553;

	class ComplexSkillAISourceCompareHPRatioIncludeShield : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Boolean OnlyShieldFromCaster; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceCompareHPRatioIncludeShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceCompareHPRatioIncludeShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceCompareHPRatioIncludeShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceCompareHPRatioIncludeShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECOMPAREHPRATIOINCLUDESHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
