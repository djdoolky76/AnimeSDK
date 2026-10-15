#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParkourTalkType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourTriggerEventContentRow; }
namespace System { class String; }

#define RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F0290)
#define RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F0080)

namespace RPG::GameCore
{
	class ParkourTriggerEventContentRow : public ::System::Object
	{
	public:
		::System::String* SpritePath; // 0x10
		::RPG::Client::TextID TextContent; // 0x18
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::ParkourTalkType TriggerShowType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourTriggerEventContentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourTriggerEventContentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
