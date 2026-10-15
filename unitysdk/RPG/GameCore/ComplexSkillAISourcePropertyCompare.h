#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourcePropertyCompare; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1150)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D1160)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D1120)

namespace RPG::GameCore
{
	class ComplexSkillAISourcePropertyCompare : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTarget; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AbilityProperty TargetPropertyType; // 0x14
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x18
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint CompareValue; // 0x20
		::RPG::GameCore::DynamicFloat* CompareDynamicFromActor; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourcePropertyCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYCOMPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
