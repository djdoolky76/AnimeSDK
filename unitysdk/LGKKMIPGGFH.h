#pragma once
#include "unitysdk/unitysdk.h"
class KOFKLJILCOE;
namespace RPG::GameCore { class TaskContext; }

#define LGKKMIPGGFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB69A270)
#define LGKKMIPGGFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB69A2A0)

	class LGKKMIPGGFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KOFKLJILCOE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KOFKLJILCOE*))((::PBYTE)hIl2Cpp + LGKKMIPGGFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKKMIPGGFH_ONTASKBEGIN_OFFSET))(this);
		}

	};
