#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_FireStimulus; }
namespace RPG::GameCore { class TaskContext; }

#define HMLLBJHDOLO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D87E70)
#define HMLLBJHDOLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D87EA0)
#define HMLLBJHDOLO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D87EF0)
#define HMLLBJHDOLO_TICK_OFFSET UNITYSDK_OFFSET(0x15D87F40)

	class HMLLBJHDOLO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_FireStimulus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_FireStimulus*))((::PBYTE)hIl2Cpp + HMLLBJHDOLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLLBJHDOLO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLLBJHDOLO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMLLBJHDOLO_TICK_OFFSET))(this, a1);
		}

	};
