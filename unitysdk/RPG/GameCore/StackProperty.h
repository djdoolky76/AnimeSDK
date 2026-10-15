#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackProperty; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD5A40)
#define RPG_GAMECORE_STACKPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD5A50)
#define RPG_GAMECORE_STACKPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD5A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackProperty_TypeDefinitionIndex = 23561;

	class StackProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AbilityProperty Property; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* PropertyValue; // 0x28
		::System::Boolean IncludeLimbo; // 0x30
		::System::Boolean Silence; // 0x31
		::System::Boolean IsRefresh; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
