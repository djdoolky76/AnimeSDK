#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherRuleTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D325AD0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D325660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatSpecialRuleRow_TypeDefinitionIndex = 11270;

	class ActivityDiceCombatSpecialRuleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GlossaryIDList; // 0x10
		::Il2CppArray<::System::Single>* AIEffectWeightList; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* ParamList; // 0x28
		::System::String* SpecialRuleJson; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID Desc; // 0x48
		::RPG::GameCore::DiceCombatWeatherRuleTag RuleTag; // 0x58
		::System::UInt32 SpecialRuleID; // 0x5C
		::RPG::GameCore::DiceCombatWeatherShowType ShowType; // 0x60
		::System::UInt32 ModifierID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSPECIALRULEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
