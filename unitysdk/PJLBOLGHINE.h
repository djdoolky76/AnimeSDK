#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipPowerSprint; }

#define PJLBOLGHINE_CTOR_OFFSET UNITYSDK_OFFSET(0xC299AE0)
#define PJLBOLGHINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC299AF0)
#define PJLBOLGHINE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC299B90)
#define PJLBOLGHINE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC299BE0)
#define PJLBOLGHINE_TICK_OFFSET UNITYSDK_OFFSET(0xC299B30)

	class PJLBOLGHINE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::TravelShipPowerSprint* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipPowerSprint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipPowerSprint*))((::PBYTE)hIl2Cpp + PJLBOLGHINE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLBOLGHINE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJLBOLGHINE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLBOLGHINE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLBOLGHINE_ONTASKRESET_OFFSET))(this);
		}

	};
