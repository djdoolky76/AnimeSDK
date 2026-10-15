#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionChangeRobinRadiusByVote; }

#define RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5485C0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5485D0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D548570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionChangeRobinRadiusByVote_TypeDefinitionIndex = 18345;

	class CakeRaceActionChangeRobinRadiusByVote : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Int32 MinVoteCount; // 0x10
		::System::Int32 MaxVoteCount; // 0x14
		::System::Int32 AddRadiusPerVote; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
