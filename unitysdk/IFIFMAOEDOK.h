#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ReleaseCharacterHUDVisibleControl; }
namespace RPG::GameCore { class TaskContext; }

#define IFIFMAOEDOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15F18600)
#define IFIFMAOEDOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F18630)

	class IFIFMAOEDOK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*))((::PBYTE)hIl2Cpp + IFIFMAOEDOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIFMAOEDOK_ONTASKBEGIN_OFFSET))(this);
		}

	};
