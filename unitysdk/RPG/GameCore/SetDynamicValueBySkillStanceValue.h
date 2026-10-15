#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueBySkillStanceValue; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAAFB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAAB270)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAAFC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAAF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBySkillStanceValue_TypeDefinitionIndex = 22774;

	class SetDynamicValueBySkillStanceValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillTarget; // 0x18
		::System::String* SkillName; // 0x20
		::System::String* KeyOfStanceAll; // 0x28
		::System::String* KeyOfStanceOne; // 0x30
		::System::String* KeyOfStanceSpread; // 0x38
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueBySkillStanceValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueBySkillStanceValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueBySkillStanceValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueBySkillStanceValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
