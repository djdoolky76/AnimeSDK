#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyRewardConfigRow; }

#define RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC07240)
#define RPG_GAMECORE_TRAINPARTYREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC07040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyRewardConfigRow_TypeDefinitionIndex = 15330;

	class TrainPartyRewardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 RewardID; // 0x14
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 RequireStar; // 0x28
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
