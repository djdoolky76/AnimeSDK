#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyPerformanceCharacter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPerformanceCommonCharacter; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC33D30)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC33D40)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC34140)

namespace RPG::GameCore
{
	class TrainPartyPerformanceCommonCharacter : public ::RPG::GameCore::TrainPartyPerformanceCharacter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceCommonCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceCommonCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceCommonCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceCommonCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECOMMONCHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
