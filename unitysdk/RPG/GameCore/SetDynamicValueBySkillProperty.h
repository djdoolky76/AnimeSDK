#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueBySkillProperty; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7D3F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA7D6D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7D440)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7D380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBySkillProperty_TypeDefinitionIndex = 23559;

	class SetDynamicValueBySkillProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::System::Boolean GetCurrentSkill; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* SkillTriggerKey; // 0x28
		::RPG::GameCore::SkillPropertyType PropertyType; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* DynamicKey; // 0x38
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueBySkillProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueBySkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueBySkillProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueBySkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
