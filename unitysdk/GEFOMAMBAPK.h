#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DebateInitialize; }
namespace RPG::GameCore { class TaskContext; }

#define GEFOMAMBAPK_CTOR_OFFSET UNITYSDK_OFFSET(0x159D49F0)
#define GEFOMAMBAPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159D4A00)
#define GEFOMAMBAPK_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0x159D4D30)
#define GEFOMAMBAPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159D4A50)
#define GEFOMAMBAPK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159D4C80)
#define GEFOMAMBAPK_TICK_OFFSET UNITYSDK_OFFSET(0x159D4CD0)

	class GEFOMAMBAPK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::DebateInitialize* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DebateInitialize* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DebateInitialize*))((::PBYTE)hIl2Cpp + GEFOMAMBAPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFOMAMBAPK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFOMAMBAPK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFOMAMBAPK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEFOMAMBAPK_TICK_OFFSET))(this, a1);
		}

		::System::Void IJMONDLGAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFOMAMBAPK_IJMONDLGAIP_OFFSET))(this);
		}

	};
