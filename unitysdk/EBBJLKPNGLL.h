#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LockStepStatus; }
namespace RPG::GameCore { class TaskContext; }

#define EBBJLKPNGLL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE38A0)
#define EBBJLKPNGLL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CE38B0)
#define EBBJLKPNGLL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CE38F0)
#define EBBJLKPNGLL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CE39F0)
#define EBBJLKPNGLL_TICK_OFFSET UNITYSDK_OFFSET(0x12CE3A40)

inline static constexpr unsigned int EBBJLKPNGLL_TypeDefinitionIndex = 55150;

	class EBBJLKPNGLL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LockStepStatus* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockStepStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockStepStatus*))((::PBYTE)hIl2Cpp + EBBJLKPNGLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLKPNGLL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLKPNGLL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJLKPNGLL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBBJLKPNGLL_TICK_OFFSET))(this, a1);
		}

	};
