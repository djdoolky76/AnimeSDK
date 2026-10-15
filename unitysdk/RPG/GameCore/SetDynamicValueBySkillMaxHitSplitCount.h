#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueBySkillMaxHitSplitCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7D170)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA7D370)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7D180)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7D140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBySkillMaxHitSplitCount_TypeDefinitionIndex = 23594;

	class SetDynamicValueBySkillMaxHitSplitCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLMAXHITSPLITCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
