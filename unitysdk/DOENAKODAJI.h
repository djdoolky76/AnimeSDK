#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RetrySwordTrainingFinalBattle; }
namespace RPG::GameCore { class TaskContext; }

#define DOENAKODAJI_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE1EB0)
#define DOENAKODAJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE1EC0)
#define DOENAKODAJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FE1F00)
#define DOENAKODAJI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11FE1F80)
#define DOENAKODAJI_TICK_OFFSET UNITYSDK_OFFSET(0x11FE1FD0)

	class DOENAKODAJI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RetrySwordTrainingFinalBattle* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RetrySwordTrainingFinalBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RetrySwordTrainingFinalBattle*))((::PBYTE)hIl2Cpp + DOENAKODAJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENAKODAJI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENAKODAJI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENAKODAJI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOENAKODAJI_TICK_OFFSET))(this, a1);
		}

	};
