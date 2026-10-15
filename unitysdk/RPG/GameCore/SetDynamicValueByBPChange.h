#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPChangeValueType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByBPChange; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA1790)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA1950)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA17A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA1760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBPChange_TypeDefinitionIndex = 23092;

	class SetDynamicValueByBPChange : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::BPChangeValueType ValueType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBPChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBPChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBPChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBPChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
