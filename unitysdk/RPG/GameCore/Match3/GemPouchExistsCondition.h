#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class GemPouchExistsCondition; }

#define RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84BAA0)
#define RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84BAB0)
#define RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84B9A0)

namespace RPG::GameCore::Match3
{
	class GemPouchExistsCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::GemPouchExistsCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::GemPouchExistsCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::GemPouchExistsCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::GemPouchExistsCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
