#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPerformanceCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE46EE0)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE46EF0)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE46D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceCharacter_TypeDefinitionIndex = 16415;

	class TrainPartyPerformanceCharacter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::UInt32 AnchorID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
