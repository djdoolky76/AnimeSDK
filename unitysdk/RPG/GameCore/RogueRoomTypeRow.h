#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueRoomTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEROOMTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2D9D0)
#define RPG_GAMECORE_ROGUEROOMTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA2D120)

namespace RPG::GameCore
{
	class RogueRoomTypeRow : public ::System::Object
	{
	public:
		::System::String* RoomIconEffect; // 0x10
		::System::String* RogueRoomTypeIcon; // 0x18
		::RPG::Client::TextID RogueRoomTypeTextmapID; // 0x20
		::RPG::Client::TextID RoomTypeDescTextmapID2; // 0x30
		::RPG::Client::TextID RoomTypeDescTextmapID; // 0x40
		::System::Boolean IsSuper; // 0x50
		::System::Boolean MapShowType; // 0x51
		::System::Byte _padding0[0x2];
		::System::UInt32 RogueRoomType; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueRoomTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueRoomTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
