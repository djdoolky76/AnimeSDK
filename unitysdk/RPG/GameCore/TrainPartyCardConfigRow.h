#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCardConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCARDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2F540)
#define RPG_GAMECORE_TRAINPARTYCARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC2F270)

namespace RPG::GameCore
{
	class TrainPartyCardConfigRow : public ::System::Object
	{
	public:
		::System::String* CardEffectJson; // 0x10
		::System::String* CardActJson; // 0x18
		::System::String* CardImage; // 0x20
		::System::UInt32 CardID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CardName; // 0x30
		::System::UInt32 PassengerID; // 0x40
		::System::UInt32 Rarity; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCardConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCardConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
