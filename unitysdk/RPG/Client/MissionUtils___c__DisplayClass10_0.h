#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEAKPLCANOI;
namespace RPG::Client { class MainMissionData; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD719440)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__1_OFFSET UNITYSDK_OFFSET(0xD71D8C0)

namespace RPG::Client
{
	class MissionUtils___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::MainMissionData* trackingMission; // 0x10
		::OEAKPLCANOI* frvInstance; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryAssistWayPointOneClickCompleteTransfer_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__1_OFFSET))(this);
		}

	};
}
