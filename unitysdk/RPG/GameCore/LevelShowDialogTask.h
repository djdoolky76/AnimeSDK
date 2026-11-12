#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LevelShowDialog; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELSHOWDIALOGTASK_CTOR_OFFSET UNITYSDK_OFFSET(0xF1F7C40)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF1F7C50)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF1F7C90)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF1F7D10)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK_TICK_OFFSET UNITYSDK_OFFSET(0xF1F7D60)
#define RPG_GAMECORE_LEVELSHOWDIALOGTASK__ONDIALOGUECLOSED_OFFSET UNITYSDK_OFFSET(0xF1F7DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelShowDialogTask_TypeDefinitionIndex = 59441;

	class LevelShowDialogTask : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::LevelShowDialog* _ConfigRef; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelShowDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelShowDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnDialogueClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOGTASK__ONDIALOGUECLOSED_OFFSET))(this);
		}

	};
}
