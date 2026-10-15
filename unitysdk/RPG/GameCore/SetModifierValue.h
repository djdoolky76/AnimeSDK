#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetModifierValue; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMODIFIERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8D300)
#define RPG_GAMECORE_SETMODIFIERVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8D390)
#define RPG_GAMECORE_SETMODIFIERVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8D250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetModifierValue_TypeDefinitionIndex = 22669;

	class SetModifierValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* ModifierName; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::RPG::GameCore::ModifierValueType ValueType; // 0x2C
		::RPG::GameCore::DynamicFloat* Value; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
