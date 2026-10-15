#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ActivityElationHideCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define KPNPMCMFEAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5CE7B0)
#define KPNPMCMFEAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5CE7E0)

	class KPNPMCMFEAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActivityElationHideCutIn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActivityElationHideCutIn*))((::PBYTE)hIl2Cpp + KPNPMCMFEAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNPMCMFEAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
