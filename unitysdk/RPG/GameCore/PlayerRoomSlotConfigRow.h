#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SlotDisplayType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomSlotConfigRow; }

#define RPG_GAMECORE_PLAYERROOMSLOTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF78590)
#define RPG_GAMECORE_PLAYERROOMSLOTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EF782B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomSlotConfigRow_TypeDefinitionIndex = 14700;

	class PlayerRoomSlotConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TagList; // 0x10
		::Il2CppArray<::RPG::GameCore::SlotDisplayType>* TypeList; // 0x18
		::System::UInt32 CameraStaticID; // 0x20
		::System::UInt32 SubArea; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 SortID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMSLOTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerRoomSlotConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerRoomSlotConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMSLOTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
