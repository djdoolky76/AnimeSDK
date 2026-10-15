#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig; }

#define RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD559D60)
#define RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER___C__DISPLAYCLASS1_0__APPLYROOMTYPEPOSITIONS_B__0_OFFSET UNITYSDK_OFFSET(0xD55A0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapOnlinePlayRoomIconPositionController___c__DisplayClass1_0_TypeDefinitionIndex = 72812;

	class MapOnlinePlayRoomIconPositionController___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::CBPDACMBHGL roomType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ApplyRoomTypePositions_b__0(::RPG::Client::MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER___C__DISPLAYCLASS1_0__APPLYROOMTYPEPOSITIONS_B__0_OFFSET))(this, a1);
		}

	};
}
