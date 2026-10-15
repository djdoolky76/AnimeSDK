#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialSetMonopolyPauseState; }

#define DKMMMLPPHNH_CTOR_OFFSET UNITYSDK_OFFSET(0xF88A070)
#define DKMMMLPPHNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF88A150)
#define DKMMMLPPHNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF88A080)
#define DKMMMLPPHNH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF88A100)
#define DKMMMLPPHNH_TICK_OFFSET UNITYSDK_OFFSET(0xF88A1C0)

	class DKMMMLPPHNH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TutorialSetMonopolyPauseState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialSetMonopolyPauseState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialSetMonopolyPauseState*))((::PBYTE)hIl2Cpp + DKMMMLPPHNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMMLPPHNH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMMLPPHNH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMMLPPHNH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKMMMLPPHNH_TICK_OFFSET))(this, a1);
		}

	};
