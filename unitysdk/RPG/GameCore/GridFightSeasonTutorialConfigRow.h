#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonTutorialConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSEASONTUTORIALCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA60C90)
#define RPG_GAMECORE_GRIDFIGHTSEASONTUTORIALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA60B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonTutorialConfigRow_TypeDefinitionIndex = 13705;

	class GridFightSeasonTutorialConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 IsAllowSelectDifficult; // 0x14
		::System::UInt32 IsAllowSellAllRole; // 0x18
		::System::UInt32 SeasonID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTUTORIALCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSeasonTutorialConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSeasonTutorialConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTUTORIALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
