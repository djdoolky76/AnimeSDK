#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourcePropertyCompareRatio; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1660)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D1670)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D1620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourcePropertyCompareRatio_TypeDefinitionIndex = 15521;

	class ComplexSkillAISourcePropertyCompareRatio : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTargetA; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AbilityProperty PropertyTypeA; // 0x14
		::System::Boolean FromTargetB; // 0x18
		::System::Byte _padding1[0x3];
		::RPG::GameCore::AbilityProperty PropertyTypeB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompareRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARERATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
