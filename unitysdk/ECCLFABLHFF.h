#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetLastKillFinish; }
namespace RPG::GameCore { class TaskContext; }

#define ECCLFABLHFF_CTOR_OFFSET UNITYSDK_OFFSET(0x12D08940)
#define ECCLFABLHFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D08950)
#define ECCLFABLHFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D08990)
#define ECCLFABLHFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12D08A20)
#define ECCLFABLHFF_TICK_OFFSET UNITYSDK_OFFSET(0x12D08A70)

inline static constexpr unsigned int ECCLFABLHFF_TypeDefinitionIndex = 58550;

	class ECCLFABLHFF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetLastKillFinish* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLastKillFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLastKillFinish*))((::PBYTE)hIl2Cpp + ECCLFABLHFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCLFABLHFF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCLFABLHFF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCLFABLHFF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECCLFABLHFF_TICK_OFFSET))(this, a1);
		}

	};
