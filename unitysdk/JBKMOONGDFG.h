#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdvModifyMaxMazeMP; }
namespace RPG::GameCore { class TaskContext; }

#define JBKMOONGDFG_CTOR_OFFSET UNITYSDK_OFFSET(0x165717F0)
#define JBKMOONGDFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16571800)
#define JBKMOONGDFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16571840)
#define JBKMOONGDFG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16571970)
#define JBKMOONGDFG_TICK_OFFSET UNITYSDK_OFFSET(0x165719C0)

inline static constexpr unsigned int JBKMOONGDFG_TypeDefinitionIndex = 57879;

	class JBKMOONGDFG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvModifyMaxMazeMP* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvModifyMaxMazeMP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvModifyMaxMazeMP*))((::PBYTE)hIl2Cpp + JBKMOONGDFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKMOONGDFG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKMOONGDFG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKMOONGDFG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBKMOONGDFG_TICK_OFFSET))(this, a1);
		}

	};
