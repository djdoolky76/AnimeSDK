#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddBehaviorFlagForModifier; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D385670)
#define RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D385680)
#define RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D385640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddBehaviorFlagForModifier_TypeDefinitionIndex = 23629;

	class AddBehaviorFlagForModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x28
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* AddBehaviorFlags; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddBehaviorFlagForModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddBehaviorFlagForModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
