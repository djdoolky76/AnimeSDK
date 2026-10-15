#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONREPLAYMODULE___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD70FF20)
#define RPG_CLIENT_MISSIONREPLAYMODULE___C__DISPLAYCLASS18_0___TRYSTARTREPLAYMISSION_B__0_OFFSET UNITYSDK_OFFSET(0xD711350)

namespace RPG::Client
{
	class MissionReplayModule___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* replayInfos; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryStartReplayMission_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE___C__DISPLAYCLASS18_0___TRYSTARTREPLAYMISSION_B__0_OFFSET))(this);
		}

	};
}
