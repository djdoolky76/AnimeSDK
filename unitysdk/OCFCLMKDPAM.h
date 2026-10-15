#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ForceRefreshCamera; }
namespace RPG::GameCore { class TaskContext; }

#define OCFCLMKDPAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD5F8E0)
#define OCFCLMKDPAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD5F910)

	class OCFCLMKDPAM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceRefreshCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceRefreshCamera*))((::PBYTE)hIl2Cpp + OCFCLMKDPAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFCLMKDPAM_ONTASKBEGIN_OFFSET))(this);
		}

	};
