#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetMechanismBarVisible; }
namespace RPG::GameCore { class TaskContext; }

#define IDDPFOFDEMG_CTOR_OFFSET UNITYSDK_OFFSET(0x15EB5F00)
#define IDDPFOFDEMG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EB5F10)
#define IDDPFOFDEMG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EB5F50)
#define IDDPFOFDEMG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EB5FA0)
#define IDDPFOFDEMG_TICK_OFFSET UNITYSDK_OFFSET(0x15EB5FF0)

inline static constexpr unsigned int IDDPFOFDEMG_TypeDefinitionIndex = 55533;

	class IDDPFOFDEMG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetMechanismBarVisible* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMechanismBarVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMechanismBarVisible*))((::PBYTE)hIl2Cpp + IDDPFOFDEMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDPFOFDEMG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDPFOFDEMG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDPFOFDEMG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDDPFOFDEMG_TICK_OFFSET))(this, a1);
		}

	};
