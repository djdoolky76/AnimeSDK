#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicLayerRoomRow; }

#define RPG_GAMECORE_ROGUEMAGICLAYERROOMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D4C30)
#define RPG_GAMECORE_ROGUEMAGICLAYERROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D4B10)

namespace RPG::GameCore
{
	class RogueMagicLayerRoomRow : public ::System::Object
	{
	public:
		::System::UInt32 LayerID; // 0x10
		::System::UInt32 RoomIndex; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYERROOMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicLayerRoomRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicLayerRoomRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYERROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
