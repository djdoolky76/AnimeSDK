#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowRaidFinishUI; }
namespace RPG::GameCore { class TaskContext; }

#define KHCEMLDNKAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FF300)
#define KHCEMLDNKAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3FF4B0)
#define KHCEMLDNKAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3FF310)
#define KHCEMLDNKAI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3FF460)
#define KHCEMLDNKAI_TICK_OFFSET UNITYSDK_OFFSET(0xB3FF4F0)

	class KHCEMLDNKAI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ShowRaidFinishUI* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRaidFinishUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRaidFinishUI*))((::PBYTE)hIl2Cpp + KHCEMLDNKAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCEMLDNKAI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCEMLDNKAI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCEMLDNKAI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHCEMLDNKAI_TICK_OFFSET))(this, a1);
		}

	};
