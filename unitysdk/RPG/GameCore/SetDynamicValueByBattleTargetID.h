#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByBattleTargetID; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA1E40)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA2000)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA1E50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA1E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBattleTargetID_TypeDefinitionIndex = 23180;

	class SetDynamicValueByBattleTargetID : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* AbilityName; // 0x18
		::System::String* BattleTargetIDKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBattleTargetID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBattleTargetID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
