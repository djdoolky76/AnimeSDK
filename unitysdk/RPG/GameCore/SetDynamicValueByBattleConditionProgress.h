#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicValueByBattleConditionProgress; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F865A00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1F865C20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F865A10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F8659D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBattleConditionProgress_TypeDefinitionIndex = 23616;

	class SetDynamicValueByBattleConditionProgress : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleConditionID; // 0x18
		::System::String* CurrentProgressKey; // 0x20
		::System::String* TotalProgressKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLECONDITIONPROGRESS_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
