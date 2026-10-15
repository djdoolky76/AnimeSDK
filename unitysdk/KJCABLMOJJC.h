#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GMGJDEHGNGK;
namespace RPG::GameCore { class TaskContext; }

#define KJCABLMOJJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB43C010)
#define KJCABLMOJJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB43C020)
#define KJCABLMOJJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB43C070)
#define KJCABLMOJJC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB43C7B0)
#define KJCABLMOJJC_TICK_OFFSET UNITYSDK_OFFSET(0xB43C800)

	class KJCABLMOJJC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::GMGJDEHGNGK* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GMGJDEHGNGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GMGJDEHGNGK*))((::PBYTE)hIl2Cpp + KJCABLMOJJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCABLMOJJC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCABLMOJJC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCABLMOJJC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJCABLMOJJC_TICK_OFFSET))(this, a1);
		}

	};
