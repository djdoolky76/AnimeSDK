#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropInitFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define LGMFLHBJIBM_CTOR_OFFSET UNITYSDK_OFFSET(0xB69C8F0)
#define LGMFLHBJIBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB69C920)

	class LGMFLHBJIBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropInitFarmElement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitFarmElement*))((::PBYTE)hIl2Cpp + LGMFLHBJIBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFLHBJIBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
