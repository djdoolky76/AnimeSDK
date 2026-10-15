#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ECCKLFIHNOH;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialBlockAndWait; }

#define LGKLDJIMGBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB69A300)
#define LGKLDJIMGBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB69A310)
#define LGKLDJIMGBP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB69A350)
#define LGKLDJIMGBP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB69A440)
#define LGKLDJIMGBP_TICK_OFFSET UNITYSDK_OFFSET(0xB69A490)

	class LGKLDJIMGBP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TutorialBlockAndWait* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::ECCKLFIHNOH* GEGNDMIMMNL; // 0x28
		::System::Boolean PPNAOINLDDP; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single MBEHHALAIHO; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialBlockAndWait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialBlockAndWait*))((::PBYTE)hIl2Cpp + LGKLDJIMGBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKLDJIMGBP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKLDJIMGBP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKLDJIMGBP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LGKLDJIMGBP_TICK_OFFSET))(this, a1);
		}

	};
