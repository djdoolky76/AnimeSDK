#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LevelAudioState; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELAUDIOSTATETASK_CTOR_OFFSET UNITYSDK_OFFSET(0xF1E3130)
#define RPG_GAMECORE_LEVELAUDIOSTATETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF1E3140)
#define RPG_GAMECORE_LEVELAUDIOSTATETASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF1E3180)
#define RPG_GAMECORE_LEVELAUDIOSTATETASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF1E3660)
#define RPG_GAMECORE_LEVELAUDIOSTATETASK_TICK_OFFSET UNITYSDK_OFFSET(0xF1E36B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioStateTask_TypeDefinitionIndex = 59434;

	class LevelAudioStateTask : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::LevelAudioState* _ConfigRef; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelAudioState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK_TICK_OFFSET))(this, a1);
		}

	};
}
