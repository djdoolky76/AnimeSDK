#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeleportToRotatableRegion; }

#define NAPJGMJOLAF_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB8B80)
#define NAPJGMJOLAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAB8B90)
#define NAPJGMJOLAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAB8C60)
#define NAPJGMJOLAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAB8C10)
#define NAPJGMJOLAF_TICK_OFFSET UNITYSDK_OFFSET(0xBAB8F10)

	class NAPJGMJOLAF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TeleportToRotatableRegion* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeleportToRotatableRegion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeleportToRotatableRegion*))((::PBYTE)hIl2Cpp + NAPJGMJOLAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPJGMJOLAF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPJGMJOLAF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPJGMJOLAF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPJGMJOLAF_TICK_OFFSET))(this, a1);
		}

	};
