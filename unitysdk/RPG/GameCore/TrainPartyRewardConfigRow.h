#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyRewardConfigRow; }

#define RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC34AF0)
#define RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC348F0)

namespace RPG::GameCore
{
	class TrainPartyRewardConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 RequireStar; // 0x20
		::System::UInt32 RewardID; // 0x24
		::System::UInt32 Level; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyRewardConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
