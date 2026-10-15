#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class ClockParkStoryTriggerAsideDialog; }
namespace RPG::GameCore { class TaskContext; }

#define ALDAENJKPFL_CPMNKHCPNIB_OFFSET UNITYSDK_OFFSET(0x15562AB0)
#define ALDAENJKPFL_CTOR_OFFSET UNITYSDK_OFFSET(0x15562980)
#define ALDAENJKPFL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15562B80)
#define ALDAENJKPFL_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15562990)
#define ALDAENJKPFL_ONSKIP_OFFSET UNITYSDK_OFFSET(0x155629A0)
#define ALDAENJKPFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15562C20)
#define ALDAENJKPFL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15562D60)
#define ALDAENJKPFL_TICK_OFFSET UNITYSDK_OFFSET(0x15562BC0)

	class ALDAENJKPFL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ClockParkStoryTriggerAsideDialog* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog*))((::PBYTE)hIl2Cpp + ALDAENJKPFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDAENJKPFL_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDAENJKPFL_ONSKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDAENJKPFL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ALDAENJKPFL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDAENJKPFL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDAENJKPFL_ONTASKRESET_OFFSET))(this);
		}

		::RPG::Client::TextID CPMNKHCPNIB()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDAENJKPFL_CPMNKHCPNIB_OFFSET))(this);
		}

	};
