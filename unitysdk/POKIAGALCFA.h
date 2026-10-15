#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LittleGameSpeedLineEffect; }
namespace RPG::GameCore { class TaskContext; }

#define POKIAGALCFA_CTOR_OFFSET UNITYSDK_OFFSET(0xC36E310)
#define POKIAGALCFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC36E340)

	class POKIAGALCFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameSpeedLineEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameSpeedLineEffect*))((::PBYTE)hIl2Cpp + POKIAGALCFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKIAGALCFA_ONTASKBEGIN_OFFSET))(this);
		}

	};
