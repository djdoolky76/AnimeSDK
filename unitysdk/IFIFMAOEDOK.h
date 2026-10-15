#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ReleaseCharacterHUDVisibleControl; }
namespace RPG::GameCore { class TaskContext; }

#define IFIFMAOEDOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0C600)
#define IFIFMAOEDOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F0C630)

inline static constexpr unsigned int IFIFMAOEDOK_TypeDefinitionIndex = 55296;

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
