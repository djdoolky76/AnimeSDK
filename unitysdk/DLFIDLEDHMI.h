#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBattleItemProgressInfo; }
namespace RPG::GameCore { class TaskContext; }

#define DLFIDLEDHMI_CTOR_OFFSET UNITYSDK_OFFSET(0xF89EAA0)
#define DLFIDLEDHMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF89EAD0)

	class DLFIDLEDHMI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleItemProgressInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + DLFIDLEDHMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFIDLEDHMI_ONTASKBEGIN_OFFSET))(this);
		}

	};
