#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetModifierDynamicValue; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABA4A0)
#define RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABA4E0)
#define RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABA430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetModifierDynamicValue_TypeDefinitionIndex = 22678;

	class SetModifierDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DefineWhenNoValue; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* ModifierName; // 0x28
		::RPG::GameCore::DynamicString* DynamicKey; // 0x30
		::RPG::GameCore::DynamicFloat* NewValue; // 0x38
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetModifierDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetModifierDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetModifierDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetModifierDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
