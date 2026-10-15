#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceWaitVoteEnd; }

#define RPG_GAMECORE_CAKERACEWAITVOTEEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D554400)
#define RPG_GAMECORE_CAKERACEWAITVOTEEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D554410)
#define RPG_GAMECORE_CAKERACEWAITVOTEEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D554340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitVoteEnd_TypeDefinitionIndex = 24301;

	class CakeRaceWaitVoteEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITVOTEEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitVoteEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitVoteEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITVOTEEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitVoteEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitVoteEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITVOTEEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
