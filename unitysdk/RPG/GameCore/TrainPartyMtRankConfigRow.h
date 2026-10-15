#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyMtRankConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYMTRANKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC33250)
#define RPG_GAMECORE_TRAINPARTYMTRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC33010)

namespace RPG::GameCore
{
	class TrainPartyMtRankConfigRow : public ::System::Object
	{
	public:
		::System::String* RankPrefabPath; // 0x10
		::RPG::Client::TextID RankName; // 0x18
		::System::UInt32 RankScore; // 0x28
		::System::UInt32 RankNum; // 0x2C
		::System::UInt32 Rank; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTRANKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyMtRankConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyMtRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
