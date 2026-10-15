#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEBFJNFNBAP;

#define RPG_CLIENT_MISSIONMODULE_MISSIONCUSTOMVALUECLIENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD6DF250)

namespace RPG::Client
{
	class MissionModule_MissionCustomValueClient : public ::System::Object
	{
	public:
		::FEBFJNFNBAP* MissionCustomValue; // 0x10
		::System::UInt32 SubMissionID; // 0x18
		::System::Void _ctor(::FEBFJNFNBAP* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::FEBFJNFNBAP*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_MISSIONCUSTOMVALUECLIENT_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
