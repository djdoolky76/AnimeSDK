#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ResetPropUseCountAction; }

#define RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8502E0)
#define RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8502F0)
#define RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D850210)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ResetPropUseCountAction_TypeDefinitionIndex = 24913;

	class ResetPropUseCountAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ResetPropUseCountAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ResetPropUseCountAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ResetPropUseCountAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ResetPropUseCountAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
