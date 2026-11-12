#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournExpScoreRow; }

#define RPG_GAMECORE_ROGUETOURNEXPSCOREROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4B530)
#define RPG_GAMECORE_ROGUETOURNEXPSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC4B3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExpScoreRow_TypeDefinitionIndex = 15128;

	class RogueTournExpScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 ScoreExpID; // 0x10
		::System::UInt32 WeeklyScore; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 Exp; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXPSCOREROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournExpScoreRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXPSCOREROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
