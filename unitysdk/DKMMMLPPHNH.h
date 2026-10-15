#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialSetMonopolyPauseState; }

#define DKMMMLPPHNH_CTOR_OFFSET UNITYSDK_OFFSET(0xF884690)
#define DKMMMLPPHNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF884770)
#define DKMMMLPPHNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF8846A0)
#define DKMMMLPPHNH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF884720)
#define DKMMMLPPHNH_TICK_OFFSET UNITYSDK_OFFSET(0xF8847E0)

inline static constexpr unsigned int DKMMMLPPHNH_TypeDefinitionIndex = 58829;

	class DKMMMLPPHNH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TutorialSetMonopolyPauseState* OFKGLJOAMLD; // 0x20
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
