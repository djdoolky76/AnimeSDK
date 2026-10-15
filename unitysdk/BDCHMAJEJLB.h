#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class PMEPACFLODP;
namespace RPG::GameCore { class MemoryVisionPuzzleInit; }
namespace RPG::GameCore { class TaskContext; }

#define BDCHMAJEJLB_CTOR_OFFSET UNITYSDK_OFFSET(0x162EC6E0)
#define BDCHMAJEJLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162EC720)
#define BDCHMAJEJLB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162EC7C0)
#define BDCHMAJEJLB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162ECA40)
#define BDCHMAJEJLB_TICK_OFFSET UNITYSDK_OFFSET(0x162ECA90)

	class BDCHMAJEJLB : public ::GELIALJDFBL
	{
	public:
		::PMEPACFLODP* PNMFAOJNNIC; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::MemoryVisionPuzzleInit* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MemoryVisionPuzzleInit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MemoryVisionPuzzleInit*))((::PBYTE)hIl2Cpp + BDCHMAJEJLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHMAJEJLB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHMAJEJLB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHMAJEJLB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDCHMAJEJLB_TICK_OFFSET))(this, a1);
		}

	};
