#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MuteMonsterLastKill; }
namespace RPG::GameCore { class TaskContext; }

#define DFHLFDLCDIA_CTOR_OFFSET UNITYSDK_OFFSET(0xE82DD30)
#define DFHLFDLCDIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE82DD40)
#define DFHLFDLCDIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE82DD80)
#define DFHLFDLCDIA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE82DF40)
#define DFHLFDLCDIA_TICK_OFFSET UNITYSDK_OFFSET(0xE82DF90)

inline static constexpr unsigned int DFHLFDLCDIA_TypeDefinitionIndex = 58234;

	class DFHLFDLCDIA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MuteMonsterLastKill* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MuteMonsterLastKill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MuteMonsterLastKill*))((::PBYTE)hIl2Cpp + DFHLFDLCDIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHLFDLCDIA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHLFDLCDIA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHLFDLCDIA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFHLFDLCDIA_TICK_OFFSET))(this, a1);
		}

	};
