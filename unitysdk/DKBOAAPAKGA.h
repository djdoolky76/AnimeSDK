#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorTimer; }

#define DKBOAAPAKGA_CTOR_OFFSET UNITYSDK_OFFSET(0xF254ED0)
#define DKBOAAPAKGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF254EE0)
#define DKBOAAPAKGA_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xF254F20)
#define DKBOAAPAKGA_ONSKIP_OFFSET UNITYSDK_OFFSET(0xF255070)
#define DKBOAAPAKGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF254F30)
#define DKBOAAPAKGA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF254FC0)
#define DKBOAAPAKGA_TICK_OFFSET UNITYSDK_OFFSET(0xF255010)

	class DKBOAAPAKGA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitFloorTimer* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorTimer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorTimer*))((::PBYTE)hIl2Cpp + DKBOAAPAKGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBOAAPAKGA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBOAAPAKGA_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBOAAPAKGA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBOAAPAKGA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKBOAAPAKGA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBOAAPAKGA_ONSKIP_OFFSET))(this);
		}

	};
