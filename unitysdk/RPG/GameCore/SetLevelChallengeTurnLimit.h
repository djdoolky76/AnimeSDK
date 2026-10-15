#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeTurnLimitType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetLevelChallengeTurnLimit; }

#define RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB7AE0)
#define RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB7AF0)
#define RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB7AB0)

namespace RPG::GameCore
{
	class SetLevelChallengeTurnLimit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChallengeTurnLimitType LimitType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* LimitCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLevelChallengeTurnLimit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLevelChallengeTurnLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLevelChallengeTurnLimit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLevelChallengeTurnLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
