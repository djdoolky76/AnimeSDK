#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetDynamicValueByAddValue; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA0DB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA1090)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA0DC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA0D80)

namespace RPG::GameCore
{
	class SetDynamicValueByAddValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* Key; // 0x20
		::RPG::GameCore::DynamicFloat* AddValue; // 0x28
		::RPG::GameCore::DynamicFloat* Min; // 0x30
		::RPG::GameCore::DynamicFloat* Max; // 0x38
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByAddValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByAddValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByAddValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByAddValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
