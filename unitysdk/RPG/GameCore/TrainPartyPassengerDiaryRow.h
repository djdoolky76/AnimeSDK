#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPassengerDiaryRow; }

#define RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC337D0)
#define RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC33670)

namespace RPG::GameCore
{
	class TrainPartyPassengerDiaryRow : public ::System::Object
	{
	public:
		::System::UInt32 DiaryID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DiaryText; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPassengerDiaryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPassengerDiaryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
