#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvOnTargetLost; }
namespace RPG::GameCore { class TaskContext; }

#define CFGOCHEAFMC_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4B320)
#define CFGOCHEAFMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC4B350)

	class CFGOCHEAFMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOnTargetLost* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOnTargetLost*))((::PBYTE)hIl2Cpp + CFGOCHEAFMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGOCHEAFMC_ONTASKBEGIN_OFFSET))(this);
		}

	};
