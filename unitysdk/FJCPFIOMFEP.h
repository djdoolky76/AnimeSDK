#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PerformanceReplay_SetFloorSavedValue; }
namespace RPG::GameCore { class TaskContext; }

#define FJCPFIOMFEP_CTOR_OFFSET UNITYSDK_OFFSET(0x157C2630)
#define FJCPFIOMFEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157C2660)

	class FJCPFIOMFEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue*))((::PBYTE)hIl2Cpp + FJCPFIOMFEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCPFIOMFEP_ONTASKBEGIN_OFFSET))(this);
		}

	};
