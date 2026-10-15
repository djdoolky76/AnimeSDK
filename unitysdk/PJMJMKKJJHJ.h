#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MatchThreeCreateLevel; }
namespace RPG::GameCore { class TaskContext; }

#define PJMJMKKJJHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC29C1C0)
#define PJMJMKKJJHJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC29C1D0)
#define PJMJMKKJJHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC29C210)
#define PJMJMKKJJHJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC29C310)
#define PJMJMKKJJHJ_TICK_OFFSET UNITYSDK_OFFSET(0xC29C360)

	class PJMJMKKJJHJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MatchThreeCreateLevel* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MatchThreeCreateLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MatchThreeCreateLevel*))((::PBYTE)hIl2Cpp + PJMJMKKJJHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMJMKKJJHJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMJMKKJJHJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMJMKKJJHJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJMJMKKJJHJ_TICK_OFFSET))(this, a1);
		}

	};
