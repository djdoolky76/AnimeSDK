#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightSettleRankType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSettleRankRow; }

#define RPG_GAMECORE_GRIDFIGHTSETTLERANKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D741AA0)
#define RPG_GAMECORE_GRIDFIGHTSETTLERANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D741870)

namespace RPG::GameCore
{
	class GridFightSettleRankRow : public ::System::Object
	{
	public:
		::System::UInt32 Rank_RightInterval; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::GameCore::GridFightSettleRankType SettleRankType; // 0x18
		::System::UInt32 Rank_LeftInterval; // 0x1C
		::RPG::Client::TextID RankName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSETTLERANKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSettleRankRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSettleRankRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSETTLERANKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
