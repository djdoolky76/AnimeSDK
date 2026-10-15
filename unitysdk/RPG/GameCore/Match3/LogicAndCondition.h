#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class LogicAndCondition; }
namespace RPG::GameCore::Match3 { class Match3ConditionBase; }

#define RPG_GAMECORE_MATCH3_LOGICANDCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84BD90)
#define RPG_GAMECORE_MATCH3_LOGICANDCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84BDA0)
#define RPG_GAMECORE_MATCH3_LOGICANDCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84BD40)

namespace RPG::GameCore::Match3
{
	class LogicAndCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::Match3ConditionBase*>* Conditions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICANDCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::LogicAndCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::LogicAndCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICANDCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::LogicAndCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::LogicAndCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICANDCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
