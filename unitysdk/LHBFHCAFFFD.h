#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerTurnPage; }

#define LHBFHCAFFFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB5AD0)
#define LHBFHCAFFFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BCB5AE0)
#define LHBFHCAFFFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BCB5B20)
#define LHBFHCAFFFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BCB5CE0)
#define LHBFHCAFFFD_TICK_OFFSET UNITYSDK_OFFSET(0x1BCB5D30)

inline static constexpr unsigned int LHBFHCAFFFD_TypeDefinitionIndex = 56971;

	class LHBFHCAFFFD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerTurnPage* OFKGLJOAMLD; // 0x20
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
