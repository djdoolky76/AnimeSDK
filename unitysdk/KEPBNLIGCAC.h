#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerUINotify; }

#define KEPBNLIGCAC_CTOR_OFFSET UNITYSDK_OFFSET(0xB384230)
#define KEPBNLIGCAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB384260)

	class KEPBNLIGCAC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerUINotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerUINotify*))((::PBYTE)hIl2Cpp + KEPBNLIGCAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPBNLIGCAC_ONTASKBEGIN_OFFSET))(this);
		}

	};
