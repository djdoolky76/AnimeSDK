#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AttachPreshowDamageTypeForSkill; }
namespace RPG::GameCore { class TaskContext; }

#define HLJLIANGNBA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D62C40)
#define HLJLIANGNBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D62C70)

	class HLJLIANGNBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachPreshowDamageTypeForSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*))((::PBYTE)hIl2Cpp + HLJLIANGNBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJLIANGNBA_ONTASKBEGIN_OFFSET))(this);
		}

	};
