#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearEntityFollowAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define NAGDGKGMIKA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA99A10)
#define NAGDGKGMIKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA99A40)

	class NAGDGKGMIKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + NAGDGKGMIKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGDGKGMIKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
