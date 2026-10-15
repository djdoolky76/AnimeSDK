#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetGameplayBGMEmotionState; }
namespace System { class String; }

#define RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB48B0)
#define RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB48C0)
#define RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB4880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetGameplayBGMEmotionState_TypeDefinitionIndex = 20752;

	class SetGameplayBGMEmotionState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StateName; // 0x18
		::System::Boolean Reset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGameplayBGMEmotionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGameplayBGMEmotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGameplayBGMEmotionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGameplayBGMEmotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGAMEPLAYBGMEMOTIONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
