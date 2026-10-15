#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopTimeline; }
namespace RPG::GameCore { class TaskContext; }

#define MLAPLADNCKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A50D0)
#define MLAPLADNCKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9A5100)

	class MLAPLADNCKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopTimeline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopTimeline*))((::PBYTE)hIl2Cpp + MLAPLADNCKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAPLADNCKE_ONTASKBEGIN_OFFSET))(this);
		}

	};
