#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class NotifyFarmUnlock; }
namespace RPG::GameCore { class TaskContext; }

#define BOAKFPMPBPB_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE70B0)
#define BOAKFPMPBPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDE70E0)

	class BOAKFPMPBPB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyFarmUnlock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyFarmUnlock*))((::PBYTE)hIl2Cpp + BOAKFPMPBPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOAKFPMPBPB_ONTASKBEGIN_OFFSET))(this);
		}

	};
