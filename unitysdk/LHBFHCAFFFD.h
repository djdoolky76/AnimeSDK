#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerTurnPage; }

#define LHBFHCAFFFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB69E020)
#define LHBFHCAFFFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB69E030)
#define LHBFHCAFFFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB69E070)
#define LHBFHCAFFFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB69E230)
#define LHBFHCAFFFD_TICK_OFFSET UNITYSDK_OFFSET(0xB69E280)

inline static constexpr unsigned int LHBFHCAFFFD_TypeDefinitionIndex = 55768;

	class LHBFHCAFFFD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerTurnPage* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerTurnPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerTurnPage*))((::PBYTE)hIl2Cpp + LHBFHCAFFFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBFHCAFFFD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBFHCAFFFD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBFHCAFFFD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHBFHCAFFFD_TICK_OFFSET))(this, a1);
		}

	};
