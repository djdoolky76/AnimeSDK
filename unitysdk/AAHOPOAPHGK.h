#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMazeMapUI; }

#define AAHOPOAPHGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C7480)
#define AAHOPOAPHGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0C7490)
#define AAHOPOAPHGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C74D0)
#define AAHOPOAPHGK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0C7620)
#define AAHOPOAPHGK_TICK_OFFSET UNITYSDK_OFFSET(0xB0C7670)

inline static constexpr unsigned int AAHOPOAPHGK_TypeDefinitionIndex = 53450;

	class AAHOPOAPHGK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerMazeMapUI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMazeMapUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMazeMapUI*))((::PBYTE)hIl2Cpp + AAHOPOAPHGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHOPOAPHGK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHOPOAPHGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHOPOAPHGK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAHOPOAPHGK_TICK_OFFSET))(this, a1);
		}

	};
