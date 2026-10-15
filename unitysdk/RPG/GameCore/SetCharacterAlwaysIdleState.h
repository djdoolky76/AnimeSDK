#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterAlwaysIdleState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6C270)
#define RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6C280)
#define RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6C240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterAlwaysIdleState_TypeDefinitionIndex = 22764;

	class SetCharacterAlwaysIdleState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean On; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterAlwaysIdleState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterAlwaysIdleState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterAlwaysIdleState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterAlwaysIdleState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
