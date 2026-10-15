#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SetAbilityTagMapping; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETABILITYTAGMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA64730)
#define RPG_GAMECORE_SETABILITYTAGMAPPING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA64740)
#define RPG_GAMECORE_SETABILITYTAGMAPPING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA64700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAbilityTagMapping_TypeDefinitionIndex = 22714;

	class SetAbilityTagMapping : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* AbilityTag; // 0x20
		::RPG::GameCore::DynamicString* AbilityName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETABILITYTAGMAPPING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAbilityTagMapping* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAbilityTagMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETABILITYTAGMAPPING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAbilityTagMapping* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAbilityTagMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETABILITYTAGMAPPING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
