#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerOutfitSlotRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYEROUTFITSLOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D909100)
#define RPG_GAMECORE_PLAYEROUTFITSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D908E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerOutfitSlotRow_TypeDefinitionIndex = 14513;

	class PlayerOutfitSlotRow : public ::System::Object
	{
	public:
		::System::String* VirtualCameraPath; // 0x10
		::System::String* SlotIconPath; // 0x18
		::RPG::GameCore::PlayerOutfitSlotType SlotType; // 0x20
		::System::UInt32 SlotTipsIntroID; // 0x24
		::RPG::Client::TextID SlotName; // 0x28
		::RPG::GameCore::AvatarBaseType LimitBaseType; // 0x38
		::System::UInt32 DefaultOutfitID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITSLOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerOutfitSlotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerOutfitSlotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITSLOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
