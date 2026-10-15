#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/ActionRole.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ActionRoleCondition; }

#define RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81C210)
#define RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81C220)
#define RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81C1C0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ActionRoleCondition_TypeDefinitionIndex = 24890;

	class ActionRoleCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::RPG::GameCore::Match3::ActionRole Role; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ActionRoleCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ActionRoleCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ActionRoleCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ActionRoleCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
