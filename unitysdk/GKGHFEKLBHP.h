#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByAlertLevel; }
namespace RPG::GameCore { class TaskContext; }

#define GKGHFEKLBHP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A96A60)
#define GKGHFEKLBHP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A96A90)

	class GKGHFEKLBHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + GKGHFEKLBHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGHFEKLBHP_EVALUATE_OFFSET))(this);
		}

	};
