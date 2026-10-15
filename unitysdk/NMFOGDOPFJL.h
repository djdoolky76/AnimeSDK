#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventureModifyMazeMP; }
namespace RPG::GameCore { class TaskContext; }

#define NMFOGDOPFJL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC82CC0)
#define NMFOGDOPFJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC82CD0)
#define NMFOGDOPFJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC82D10)
#define NMFOGDOPFJL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC82E50)
#define NMFOGDOPFJL_TICK_OFFSET UNITYSDK_OFFSET(0xBC82EA0)

inline static constexpr unsigned int NMFOGDOPFJL_TypeDefinitionIndex = 57903;

	class NMFOGDOPFJL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureModifyMazeMP* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureModifyMazeMP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureModifyMazeMP*))((::PBYTE)hIl2Cpp + NMFOGDOPFJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFOGDOPFJL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFOGDOPFJL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFOGDOPFJL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMFOGDOPFJL_TICK_OFFSET))(this, a1);
		}

	};
