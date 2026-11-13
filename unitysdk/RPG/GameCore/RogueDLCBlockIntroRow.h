#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCBlockIntroRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F573AF0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F573280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockIntroRow_TypeDefinitionIndex = 14939;

	class RogueDLCBlockIntroRow : public ::System::Object
	{
	public:
		::System::String* BlockTypeChessBoardColor; // 0x10
		::System::String* BlockIntroIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::RogueSubMode>* SubType; // 0x20
		::System::UInt32 BlockIntroID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BlockIntroDesc; // 0x30
		::RPG::Client::TextID BlockIntroName; // 0x40
		::System::UInt32 Sort; // 0x50
		::System::UInt32 IntroGroup; // 0x54
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
