#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTeamLockTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTEAMLOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC6FE0)
#define RPG_GAMECORE_SETTEAMLOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC6FF0)
#define RPG_GAMECORE_SETTEAMLOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC6FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTeamLockTarget_TypeDefinitionIndex = 22706;

	class SetTeamLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMLOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTeamLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTeamLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMLOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTeamLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTeamLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMLOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
