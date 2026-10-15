#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCustomStringOnDialogEnd; }

#define JGDIAMBPDGA_CTOR_OFFSET UNITYSDK_OFFSET(0xB1987A0)
#define JGDIAMBPDGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1987B0)
#define JGDIAMBPDGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1987F0)
#define JGDIAMBPDGA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB198AA0)
#define JGDIAMBPDGA_TICK_OFFSET UNITYSDK_OFFSET(0xB198AF0)

inline static constexpr unsigned int JGDIAMBPDGA_TypeDefinitionIndex = 58775;

	class JGDIAMBPDGA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerCustomStringOnDialogEnd* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCustomStringOnDialogEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCustomStringOnDialogEnd*))((::PBYTE)hIl2Cpp + JGDIAMBPDGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDIAMBPDGA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDIAMBPDGA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDIAMBPDGA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JGDIAMBPDGA_TICK_OFFSET))(this, a1);
		}

	};
