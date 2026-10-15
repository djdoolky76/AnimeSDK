#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingTREventType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingTREventRow; }
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGTREVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D434FC0)
#define RPG_GAMECORE_B51RACINGTREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D434BE0)

namespace RPG::GameCore
{
	class B51RacingTREventRow : public ::System::Object
	{
	public:
		::System::String* AvatarIconPath; // 0x10
		::System::UInt32 MaxCount; // 0x18
		::System::UInt32 Priority; // 0x1C
		::System::UInt32 DriverID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TRContent; // 0x28
		::System::Single TypeCD; // 0x38
		::System::UInt32 ID; // 0x3C
		::RPG::Client::TextID TRName; // 0x40
		::System::UInt32 VoiceID; // 0x50
		::RPG::GameCore::B51RacingTREventType Type; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTREVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::B51RacingTREventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::B51RacingTREventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
