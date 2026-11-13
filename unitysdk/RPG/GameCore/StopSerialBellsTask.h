#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StopSerialBells; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_STOPSERIALBELLSTASK_CTOR_OFFSET UNITYSDK_OFFSET(0x12063850)
#define RPG_GAMECORE_STOPSERIALBELLSTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12063860)
#define RPG_GAMECORE_STOPSERIALBELLSTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x120638A0)
#define RPG_GAMECORE_STOPSERIALBELLSTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12063900)
#define RPG_GAMECORE_STOPSERIALBELLSTASK_TICK_OFFSET UNITYSDK_OFFSET(0x12063950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopSerialBellsTask_TypeDefinitionIndex = 60004;

	class StopSerialBellsTask : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StopSerialBells* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopSerialBells* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopSerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK_TICK_OFFSET))(this, a1);
		}

	};
}
