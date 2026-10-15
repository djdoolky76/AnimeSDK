#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetEffectAnimSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define KJGGMKCBDHG_CTOR_OFFSET UNITYSDK_OFFSET(0xB449B00)
#define KJGGMKCBDHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB449B10)
#define KJGGMKCBDHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB449B50)
#define KJGGMKCBDHG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB449DD0)
#define KJGGMKCBDHG_TICK_OFFSET UNITYSDK_OFFSET(0xB449E20)

	class KJGGMKCBDHG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetEffectAnimSpeed* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimSpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimSpeed*))((::PBYTE)hIl2Cpp + KJGGMKCBDHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGGMKCBDHG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGGMKCBDHG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGGMKCBDHG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJGGMKCBDHG_TICK_OFFSET))(this, a1);
		}

	};
