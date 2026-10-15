#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ChangeHeartDialModelByScript; }
namespace RPG::GameCore { class TaskContext; }

#define BJHEOCOEJNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB79A240)
#define BJHEOCOEJNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB79A250)
#define BJHEOCOEJNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB79A2A0)
#define BJHEOCOEJNH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB79A3E0)
#define BJHEOCOEJNH_TICK_OFFSET UNITYSDK_OFFSET(0xB79A430)

	class BJHEOCOEJNH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ChangeHeartDialModelByScript* HLLLPAHOFFF; // 0x18
		::RPG::GameCore::TaskContext* OBKLPOKMIEA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeHeartDialModelByScript* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeHeartDialModelByScript*))((::PBYTE)hIl2Cpp + BJHEOCOEJNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHEOCOEJNH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHEOCOEJNH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHEOCOEJNH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJHEOCOEJNH_TICK_OFFSET))(this, a1);
		}

	};
