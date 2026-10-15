#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class SectionCondition; }

#define RPG_GAMECORE_MATCH3_SECTIONCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84D990)
#define RPG_GAMECORE_MATCH3_SECTIONCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84D9A0)
#define RPG_GAMECORE_MATCH3_SECTIONCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D850480)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SectionCondition_TypeDefinitionIndex = 24886;

	class SectionCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetSection; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SECTIONCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SectionCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SectionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SECTIONCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SectionCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SectionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SECTIONCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
