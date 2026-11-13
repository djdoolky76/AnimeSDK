#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialFinish; }

#define BJENIEEJJJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD7AB0)
#define BJENIEEJJJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BAD7AC0)
#define BJENIEEJJJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BAD7B00)
#define BJENIEEJJJM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BAD7B80)
#define BJENIEEJJJM_TICK_OFFSET UNITYSDK_OFFSET(0x1BAD7BD0)

inline static constexpr unsigned int BJENIEEJJJM_TypeDefinitionIndex = 60090;

	class BJENIEEJJJM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TutorialFinish* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialFinish*))((::PBYTE)hIl2Cpp + BJENIEEJJJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJENIEEJJJM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJENIEEJJJM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJENIEEJJJM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJENIEEJJJM_TICK_OFFSET))(this, a1);
		}

	};
