#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionChangeWaitTimeByVote; }

#define RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5488D0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5488E0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D548880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionChangeWaitTimeByVote_TypeDefinitionIndex = 18337;

	class CakeRaceActionChangeWaitTimeByVote : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Int32 VoteThreshold; // 0x10
		::System::Int32 MinWaitTime1; // 0x14
		::System::Int32 MaxWaitTime1; // 0x18
		::System::Int32 BaseWaitAdd1; // 0x1C
		::System::Int32 MinWaitTime2; // 0x20
		::System::Int32 MaxWaitTime2; // 0x24
		::System::Int32 BaseWaitAdd2; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
