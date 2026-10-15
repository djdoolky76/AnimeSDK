#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OverrideLightDeviceFollowColliderMode; }
namespace RPG::GameCore { class TaskContext; }

#define FMCHOAHPOGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1584E090)
#define FMCHOAHPOGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1584E1B0)
#define FMCHOAHPOGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1584E0A0)
#define FMCHOAHPOGE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1584E1F0)
#define FMCHOAHPOGE_TICK_OFFSET UNITYSDK_OFFSET(0x1584E240)

	class FMCHOAHPOGE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::OverrideLightDeviceFollowColliderMode* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode*))((::PBYTE)hIl2Cpp + FMCHOAHPOGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCHOAHPOGE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCHOAHPOGE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCHOAHPOGE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMCHOAHPOGE_TICK_OFFSET))(this, a1);
		}

	};
