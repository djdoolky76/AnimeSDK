#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class DebateManager; }
namespace RPG::GameCore { class DebateCostChangce; }
namespace RPG::GameCore { class TaskContext; }

#define JCCPFILJCNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1656D2C0)
#define JCCPFILJCNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1656D4D0)
#define JCCPFILJCNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1656D2D0)
#define JCCPFILJCNO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1656D520)
#define JCCPFILJCNO_TICK_OFFSET UNITYSDK_OFFSET(0x1656D570)

inline static constexpr unsigned int JCCPFILJCNO_TypeDefinitionIndex = 52725;

	class JCCPFILJCNO : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::DebateManager* OGPNBADIHKM; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::DebateCostChangce* OFKGLJOAMLD; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DebateCostChangce* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DebateCostChangce*))((::PBYTE)hIl2Cpp + JCCPFILJCNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPFILJCNO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPFILJCNO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPFILJCNO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCCPFILJCNO_TICK_OFFSET))(this, a1);
		}

	};
