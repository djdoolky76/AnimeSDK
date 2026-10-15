#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByBattleTargetParam; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA2040)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA2050)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA2010)

namespace RPG::GameCore
{
	class SetDynamicValueByBattleTargetParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 BattleTargetID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBattleTargetParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBattleTargetParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
