#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MatchThreeCreateLevel; }
namespace RPG::GameCore { class TaskContext; }

#define PJMJMKKJJHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC2947A0)
#define PJMJMKKJJHJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2947B0)
#define PJMJMKKJJHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2947F0)
#define PJMJMKKJJHJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2948F0)
#define PJMJMKKJJHJ_TICK_OFFSET UNITYSDK_OFFSET(0xC294940)

inline static constexpr unsigned int PJMJMKKJJHJ_TypeDefinitionIndex = 55173;

	class PJMJMKKJJHJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MatchThreeCreateLevel* OFKGLJOAMLD; // 0x20
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
