#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ForceKill; }
namespace RPG::GameCore { class TaskContext; }

#define KNBDLMIPKKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB570C40)
#define KNBDLMIPKKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB570C50)
#define KNBDLMIPKKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB570C90)
#define KNBDLMIPKKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB571B80)
#define KNBDLMIPKKN_TICK_OFFSET UNITYSDK_OFFSET(0xB571BD0)

inline static constexpr unsigned int KNBDLMIPKKN_TypeDefinitionIndex = 55073;

	class KNBDLMIPKKN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ForceKill* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceKill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceKill*))((::PBYTE)hIl2Cpp + KNBDLMIPKKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBDLMIPKKN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBDLMIPKKN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBDLMIPKKN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNBDLMIPKKN_TICK_OFFSET))(this, a1);
		}

	};
