#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterEnhancedStateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterEnhancedState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9A590)
#define RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9A5D0)
#define RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9A530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterEnhancedState_TypeDefinitionIndex = 23198;

	class SetCharacterEnhancedState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::CharacterEnhancedStateType Type; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterEnhancedState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterEnhancedState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterEnhancedState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterEnhancedState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERENHANCEDSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
