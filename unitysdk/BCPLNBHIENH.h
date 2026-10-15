#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RecordAutoLayoutSnapShot; }
namespace RPG::GameCore { class TaskContext; }

#define BCPLNBHIENH_CTOR_OFFSET UNITYSDK_OFFSET(0x162EA790)
#define BCPLNBHIENH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162EA7C0)

	class BCPLNBHIENH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RecordAutoLayoutSnapShot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RecordAutoLayoutSnapShot*))((::PBYTE)hIl2Cpp + BCPLNBHIENH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPLNBHIENH_ONTASKBEGIN_OFFSET))(this);
		}

	};
