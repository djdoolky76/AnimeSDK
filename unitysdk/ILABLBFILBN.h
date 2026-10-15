#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyEvolveBuildProperty; }
namespace RPG::GameCore { class TaskContext; }

#define ILABLBFILBN_CTOR_OFFSET UNITYSDK_OFFSET(0x164A1710)
#define ILABLBFILBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164A1740)

	class ILABLBFILBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyEvolveBuildProperty*))((::PBYTE)hIl2Cpp + ILABLBFILBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILABLBFILBN_ONTASKBEGIN_OFFSET))(this);
		}

	};
