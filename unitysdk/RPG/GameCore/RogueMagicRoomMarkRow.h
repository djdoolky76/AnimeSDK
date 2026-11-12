#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicMarkType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRoomType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicRoomMarkRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICROOMMARKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC1ED70)
#define RPG_GAMECORE_ROGUEMAGICROOMMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC1EAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicRoomMarkRow_TypeDefinitionIndex = 15020;

	class RogueMagicRoomMarkRow : public ::System::Object
	{
	public:
		::System::String* ToastIcon; // 0x10
		::System::String* RoomIconEffect; // 0x18
		::System::String* RoomTypeIcon; // 0x20
		::RPG::Client::TextID RoomTypeName; // 0x28
		::RPG::GameCore::RogueMagicMarkType MarkType; // 0x38
		::RPG::GameCore::RogueMagicRoomType RoomType; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICROOMMARKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicRoomMarkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicRoomMarkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICROOMMARKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
