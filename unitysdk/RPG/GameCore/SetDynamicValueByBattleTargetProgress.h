#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicValueByBattleTargetProgress; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA74980)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA74BA0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA74990)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA74950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBattleTargetProgress_TypeDefinitionIndex = 23179;

	class SetDynamicValueByBattleTargetProgress : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleTargetID; // 0x18
		::System::String* CurrentProgressKey; // 0x20
		::System::String* TotalProgressKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
