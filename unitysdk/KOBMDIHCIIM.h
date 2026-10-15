#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEntityStopTurnInPlace; }
namespace RPG::GameCore { class TaskContext; }

#define KOBMDIHCIIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB590500)
#define KOBMDIHCIIM_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB590630)
#define KOBMDIHCIIM_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB590640)
#define KOBMDIHCIIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB590530)

	class KOBMDIHCIIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityStopTurnInPlace* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityStopTurnInPlace*))((::PBYTE)hIl2Cpp + KOBMDIHCIIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBMDIHCIIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBMDIHCIIM_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBMDIHCIIM_ONSKIP_OFFSET))(this);
		}

	};
