#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StuffStatsConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_STUFFSTATSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2F2D0)
#define RPG_GAMECORE_STUFFSTATSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB2EC30)

namespace RPG::GameCore
{
	class StuffStatsConfigRow : public ::System::Object
	{
	public:
		::System::String* StatsIconPath; // 0x10
		::RPG::GameCore::StuffStats StatsID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MuseumStatsName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StuffStatsConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StuffStatsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
