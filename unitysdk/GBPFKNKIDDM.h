#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RotateLaserPuzzleRing; }
namespace RPG::GameCore { class TaskContext; }

#define GBPFKNKIDDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15959940)
#define GBPFKNKIDDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15959970)

	class GBPFKNKIDDM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RotateLaserPuzzleRing* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RotateLaserPuzzleRing*))((::PBYTE)hIl2Cpp + GBPFKNKIDDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFKNKIDDM_ONTASKBEGIN_OFFSET))(this);
		}

	};
