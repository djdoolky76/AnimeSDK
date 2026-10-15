#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicValueByModifierValue; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA79BE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA79F60)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA79C20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA79B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByModifierValue_TypeDefinitionIndex = 23081;

	class SetDynamicValueByModifierValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::NumOperationType OperationType; // 0x28
		::RPG::GameCore::ModifierValueType ValueType; // 0x2C
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Lookup; // 0x30
		::RPG::GameCore::DynamicFloat* Multiplier; // 0x38
		::System::String* DynamicKey; // 0x40
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMODIFIERVALUE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
