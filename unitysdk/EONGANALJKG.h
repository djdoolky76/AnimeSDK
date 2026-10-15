#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockFov; }
namespace RPG::GameCore { class TaskContext; }

#define EONGANALJKG_CTOR_OFFSET UNITYSDK_OFFSET(0x155C8BB0)
#define EONGANALJKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C8BE0)

	class EONGANALJKG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockFov* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockFov*))((::PBYTE)hIl2Cpp + EONGANALJKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONGANALJKG_ONTASKBEGIN_OFFSET))(this);
		}

	};
