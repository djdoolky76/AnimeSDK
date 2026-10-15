#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyPerformanceCharacter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPerformanceDefineCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC06570)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC06580)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC06B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceDefineCharacter_TypeDefinitionIndex = 16259;

	class TrainPartyPerformanceDefineCharacter : public ::RPG::GameCore::TrainPartyPerformanceCharacter
	{
	public:
		::System::String* CharacterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceDefineCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceDefineCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceDefineCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceDefineCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEDEFINECHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
