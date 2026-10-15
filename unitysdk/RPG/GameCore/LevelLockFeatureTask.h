#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LevelLockFeature; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELLOCKFEATURETASK_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F39D0)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE6F39E0)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE6F3A20)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE6F3AC0)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_TICK_OFFSET UNITYSDK_OFFSET(0xE6F3B10)

namespace RPG::GameCore
{
	class LevelLockFeatureTask : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LevelLockFeature* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelLockFeature* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelLockFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_TICK_OFFSET))(this, a1);
		}

	};
}
