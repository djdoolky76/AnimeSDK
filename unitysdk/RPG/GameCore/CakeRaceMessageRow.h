#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceMessageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceMessageRow; }

#define RPG_GAMECORE_CAKERACEMESSAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D551100)
#define RPG_GAMECORE_CAKERACEMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D550EC0)

namespace RPG::GameCore
{
	class CakeRaceMessageRow : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceMessageType MessageType; // 0x10
		::System::Boolean CanPlayerUse; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 MessageID; // 0x18
		::System::UInt32 CatID; // 0x1C
		::RPG::Client::TextID MessageText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMESSAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceMessageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceMessageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMESSAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
