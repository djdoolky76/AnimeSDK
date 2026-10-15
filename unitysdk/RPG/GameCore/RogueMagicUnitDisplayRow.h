#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicUnitDisplayRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D7D10)
#define RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D7B50)

namespace RPG::GameCore
{
	class RogueMagicUnitDisplayRow : public ::System::Object
	{
	public:
		::System::String* MagicUnitIcon; // 0x10
		::RPG::Client::TextID MagicUnitName; // 0x18
		::System::UInt32 MagicUnitID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicUnitDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicUnitDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
