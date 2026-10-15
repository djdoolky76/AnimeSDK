#pragma once
#include "unitysdk/unitysdk.h"
class IFHFADIDGGD;
namespace RPG::GameCore { class TaskContext; }

#define IDENGNLDMHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15EC6CE0)
#define IDENGNLDMHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EC6D10)

	class IDENGNLDMHJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IFHFADIDGGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IFHFADIDGGD*))((::PBYTE)hIl2Cpp + IDENGNLDMHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENGNLDMHJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
