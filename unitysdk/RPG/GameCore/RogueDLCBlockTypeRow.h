#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCBlockTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BC560)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9BBE10)

namespace RPG::GameCore
{
	class RogueDLCBlockTypeRow : public ::System::Object
	{
	public:
		::System::String* BlockTypeIcon; // 0x10
		::System::String* BlockTypeChessBoardColor; // 0x18
		::System::String* BlockTypeChessBoardIcon; // 0x20
		::System::UInt32 BlockTypeID; // 0x28
		::System::UInt32 BlockIntroID; // 0x2C
		::RPG::Client::TextID BlockTypeNameID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCBlockTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCBlockTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
