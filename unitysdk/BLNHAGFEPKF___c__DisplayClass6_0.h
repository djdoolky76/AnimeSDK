#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MissionModule; }

#define BLNHAGFEPKF___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7EB80)
#define BLNHAGFEPKF___C__DISPLAYCLASS6_0___ACCEPTANDTRACKPREMISSION_B__0_OFFSET UNITYSDK_OFFSET(0xBA7ED60)

	class BLNHAGFEPKF___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule* missionModule; // 0x10
		::System::UInt32 preMissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNHAGFEPKF___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcceptAndTrackPreMission_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNHAGFEPKF___C__DISPLAYCLASS6_0___ACCEPTANDTRACKPREMISSION_B__0_OFFSET))(this);
		}

	};
