#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyGridFightCustomProperty; }
namespace RPG::GameCore { class TaskContext; }

#define NMHPBAMNAJE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC86350)
#define NMHPBAMNAJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC86380)

	class NMHPBAMNAJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyGridFightCustomProperty*))((::PBYTE)hIl2Cpp + NMHPBAMNAJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHPBAMNAJE_ONTASKBEGIN_OFFSET))(this);
		}

	};
