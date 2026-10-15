#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCBlockIntroRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BB590)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9BAD60)

namespace RPG::GameCore
{
	class RogueDLCBlockIntroRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueSubMode>* SubType; // 0x10
		::System::String* BlockIntroIcon; // 0x18
		::System::String* BlockTypeChessBoardColor; // 0x20
		::System::UInt32 Sort; // 0x28
		::System::UInt32 BlockIntroID; // 0x2C
		::RPG::Client::TextID BlockIntroDesc; // 0x30
		::System::UInt32 IntroGroup; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BlockIntroName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCBlockIntroRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCBlockIntroRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
