#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PauseTimeRewindTarget; }
namespace RPG::GameCore { class TaskContext; }

#define AHCJCOPLBPH_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7A860)
#define AHCJCOPLBPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB7A890)

	class AHCJCOPLBPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseTimeRewindTarget*))((::PBYTE)hIl2Cpp + AHCJCOPLBPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCJCOPLBPH_ONTASKBEGIN_OFFSET))(this);
		}

	};
