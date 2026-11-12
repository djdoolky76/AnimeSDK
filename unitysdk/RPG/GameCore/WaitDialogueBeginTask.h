#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueBegin; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_CTOR_OFFSET UNITYSDK_OFFSET(0xF33FEB0)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF33FF40)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF340060)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF3401C0)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_TICK_OFFSET UNITYSDK_OFFSET(0xF340280)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK__ONDIALOGUEBEGIN_OFFSET UNITYSDK_OFFSET(0xF3402E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueBeginTask_TypeDefinitionIndex = 60154;

	class WaitDialogueBeginTask : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::WaitDialogueBegin* _ConfigRef; // 0x20
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x28
		::KFELGAIGHAP* _BeginCallback; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDialogueBegin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnDialogueBegin(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK__ONDIALOGUEBEGIN_OFFSET))(this, a1);
		}

	};
}
