#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBattleTargetProgress; }

#define RPG_GAMECORE_SETBATTLETARGETPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA97D40)
#define RPG_GAMECORE_SETBATTLETARGETPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA97D50)
#define RPG_GAMECORE_SETBATTLETARGETPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA97D00)

namespace RPG::GameCore
{
	class SetBattleTargetProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleTargetID; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleTargetProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleTargetProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
