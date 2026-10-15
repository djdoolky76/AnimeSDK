#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MoveVirtualCameraOnDollyPath; }
namespace RPG::GameCore { class TaskContext; }

#define MKDFCHINHFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB98D2A0)
#define MKDFCHINHFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB98D2B0)
#define MKDFCHINHFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB98D2F0)
#define MKDFCHINHFG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB98D5F0)
#define MKDFCHINHFG_TICK_OFFSET UNITYSDK_OFFSET(0xB98D640)

	class MKDFCHINHFG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MoveVirtualCameraOnDollyPath* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveVirtualCameraOnDollyPath* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveVirtualCameraOnDollyPath*))((::PBYTE)hIl2Cpp + MKDFCHINHFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDFCHINHFG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDFCHINHFG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDFCHINHFG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKDFCHINHFG_TICK_OFFSET))(this, a1);
		}

	};
