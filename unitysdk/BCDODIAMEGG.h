#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeMonsterName; }
namespace RPG::GameCore { class TaskContext; }

#define BCDODIAMEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA5650)
#define BCDODIAMEGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EA5680)

	class BCDODIAMEGG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeMonsterName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeMonsterName*))((::PBYTE)hIl2Cpp + BCDODIAMEGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDODIAMEGG_ONTASKBEGIN_OFFSET))(this);
		}

	};
