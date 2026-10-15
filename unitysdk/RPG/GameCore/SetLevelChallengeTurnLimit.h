#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeTurnLimitType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetLevelChallengeTurnLimit; }

#define RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8A240)
#define RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8A250)
#define RPG_GAMECORE_SETLEVELCHALLENGETURNLIMIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8A210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLevelChallengeTurnLimit_TypeDefinitionIndex = 23133;

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
