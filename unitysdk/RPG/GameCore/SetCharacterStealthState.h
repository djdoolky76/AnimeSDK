#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterStealthState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9BDD0)
#define RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9BDE0)
#define RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9BD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterStealthState_TypeDefinitionIndex = 22954;

	class SetCharacterStealthState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsStealthState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterStealthState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterStealthState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterStealthState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterStealthState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
