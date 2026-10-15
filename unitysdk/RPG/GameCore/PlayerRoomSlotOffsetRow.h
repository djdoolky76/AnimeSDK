#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomSlotOffsetRow; }

#define RPG_GAMECORE_PLAYERROOMSLOTOFFSETROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90E4E0)
#define RPG_GAMECORE_PLAYERROOMSLOTOFFSETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D90E3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomSlotOffsetRow_TypeDefinitionIndex = 14551;

	class PlayerRoomSlotOffsetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* Offset; // 0x10
		::System::UInt32 SlotID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMSLOTOFFSETROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerRoomSlotOffsetRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerRoomSlotOffsetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMSLOTOFFSETROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
