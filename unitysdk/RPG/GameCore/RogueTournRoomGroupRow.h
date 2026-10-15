#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournRoomGroupRow; }

#define RPG_GAMECORE_ROGUETOURNROOMGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA41190)
#define RPG_GAMECORE_ROGUETOURNROOMGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA41040)

namespace RPG::GameCore
{
	class RogueTournRoomGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueTournRoomType>* RoomTypeList; // 0x10
		::System::UInt32 RoomGroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournRoomGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournRoomGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
