#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournLayerRoomRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNLAYERROOMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3E7B0)
#define RPG_GAMECORE_ROGUETOURNLAYERROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3E570)

namespace RPG::GameCore
{
	class RogueTournLayerRoomRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Door2; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Door3; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Door1; // 0x20
		::System::UInt32 LayerID; // 0x28
		::System::UInt32 RoomIndex; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYERROOMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournLayerRoomRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournLayerRoomRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYERROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
