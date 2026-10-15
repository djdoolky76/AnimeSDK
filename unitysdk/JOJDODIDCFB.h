#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBreak; }

#define JOJDODIDCFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A0EF0)
#define JOJDODIDCFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2A0F20)

	class JOJDODIDCFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBreak* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBreak*))((::PBYTE)hIl2Cpp + JOJDODIDCFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJDODIDCFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
