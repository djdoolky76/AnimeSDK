#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBattleConditionProgress; }

#define RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA69000)
#define RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA69010)
#define RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA68FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleConditionProgress_TypeDefinitionIndex = 23184;

	class SetBattleConditionProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleConditionID; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleConditionProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleConditionProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleConditionProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleConditionProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
