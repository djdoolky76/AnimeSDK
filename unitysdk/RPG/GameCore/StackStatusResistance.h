#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackStatusResistance; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKSTATUSRESISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD7080)
#define RPG_GAMECORE_STACKSTATUSRESISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD7090)
#define RPG_GAMECORE_STACKSTATUSRESISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD7050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackStatusResistance_TypeDefinitionIndex = 22682;

	class StackStatusResistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Resistance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSRESISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackStatusResistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackStatusResistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSRESISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackStatusResistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackStatusResistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSRESISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
