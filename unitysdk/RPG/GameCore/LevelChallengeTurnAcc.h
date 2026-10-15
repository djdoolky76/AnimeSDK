#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelChallengeTurnAcc; }

#define RPG_GAMECORE_LEVELCHALLENGETURNACC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A72F0)
#define RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A7300)
#define RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A7230)

namespace RPG::GameCore
{
	class LevelChallengeTurnAcc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHALLENGETURNACC_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelChallengeTurnAcc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelChallengeTurnAcc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelChallengeTurnAcc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelChallengeTurnAcc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHALLENGETURNACC_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
