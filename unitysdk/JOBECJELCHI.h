#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwordTrainingShowEndingPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define JOBECJELCHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB297700)
#define JOBECJELCHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB297710)
#define JOBECJELCHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB297750)
#define JOBECJELCHI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB297E30)
#define JOBECJELCHI_TICK_OFFSET UNITYSDK_OFFSET(0xB297E80)

inline static constexpr unsigned int JOBECJELCHI_TypeDefinitionIndex = 58758;

	class JOBECJELCHI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwordTrainingShowEndingPerformance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingShowEndingPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingShowEndingPerformance*))((::PBYTE)hIl2Cpp + JOBECJELCHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBECJELCHI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBECJELCHI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBECJELCHI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOBECJELCHI_TICK_OFFSET))(this, a1);
		}

	};
