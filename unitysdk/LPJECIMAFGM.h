#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvTriggerEffectList; }
namespace RPG::GameCore { class TaskContext; }

#define LPJECIMAFGM_CTOR_OFFSET UNITYSDK_OFFSET(0xB821D60)
#define LPJECIMAFGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB821D90)

	class LPJECIMAFGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerEffectList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + LPJECIMAFGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJECIMAFGM_ONTASKBEGIN_OFFSET))(this);
		}

	};
