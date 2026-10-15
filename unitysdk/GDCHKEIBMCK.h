#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvTrackNpcSoundTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define GDCHKEIBMCK_CTOR_OFFSET UNITYSDK_OFFSET(0x15994F40)
#define GDCHKEIBMCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15994F70)

	class GDCHKEIBMCK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTrackNpcSoundTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTrackNpcSoundTrigger*))((::PBYTE)hIl2Cpp + GDCHKEIBMCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCHKEIBMCK_ONTASKBEGIN_OFFSET))(this);
		}

	};
