#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonExpScoreRow; }

#define RPG_GAMECORE_GRIDFIGHTSEASONEXPSCOREROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D740820)
#define RPG_GAMECORE_GRIDFIGHTSEASONEXPSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D740600)

namespace RPG::GameCore
{
	class GridFightSeasonExpScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 DivisionID; // 0x10
		::System::UInt32 WeeklyScore; // 0x14
		::System::UInt32 ChapterID; // 0x18
		::System::UInt32 Exp; // 0x1C
		::System::UInt32 SectionID; // 0x20
		::System::UInt32 ScoreRuleID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONEXPSCOREROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSeasonExpScoreRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSeasonExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONEXPSCOREROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
