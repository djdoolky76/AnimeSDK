#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BlinkToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define JKGJNHPLGHK_CTOR_OFFSET UNITYSDK_OFFSET(0xB21C4B0)
#define JKGJNHPLGHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB21C4C0)
#define JKGJNHPLGHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB21C510)
#define JKGJNHPLGHK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB21C6F0)
#define JKGJNHPLGHK_TICK_OFFSET UNITYSDK_OFFSET(0xB21C740)

	class JKGJNHPLGHK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::BlinkToPosition* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlinkToPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlinkToPosition*))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JKGJNHPLGHK_TICK_OFFSET))(this, a1);
		}

	};
