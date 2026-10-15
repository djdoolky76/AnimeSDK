#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetDynamicValueByValueEvaluator; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class Object; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAC890)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAACA80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAC8D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAC830)

namespace RPG::GameCore
{
	class SetDynamicValueByValueEvaluator : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* DynamicKey; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVALUEEVALUATOR_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
