#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
namespace RPG::GameCore { class RogueTournEntranceShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace XLua { class LuaTable; }

#define EFMKPPNDPKA_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5D5D0)
#define EFMKPPNDPKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A5D5E0)
#define EFMKPPNDPKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A5D680)
#define EFMKPPNDPKA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A5D790)
#define EFMKPPNDPKA_TICK_OFFSET UNITYSDK_OFFSET(0x13A5D620)
#define EFMKPPNDPKA__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x13A5D7E0)

	class EFMKPPNDPKA : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournEntranceShowUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournEntranceShowUI*))((::PBYTE)hIl2Cpp + EFMKPPNDPKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMKPPNDPKA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFMKPPNDPKA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMKPPNDPKA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMKPPNDPKA_ONTASKRESET_OFFSET))(this);
		}

		::RPG::GameCore::TaskState _OnTaskBegin_b__3_0(::XLua::LuaTable* a1)
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + EFMKPPNDPKA__ONTASKBEGIN_B__3_0_OFFSET))(this, a1);
		}

	};
