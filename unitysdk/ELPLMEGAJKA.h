#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PauseEntityFollowAttach; }
namespace RPG::GameCore { class TaskContext; }

#define ELPLMEGAJKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1551E0C0)
#define ELPLMEGAJKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1551E0F0)

inline static constexpr unsigned int ELPLMEGAJKA_TypeDefinitionIndex = 55256;

	class ELPLMEGAJKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseEntityFollowAttach* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseEntityFollowAttach*))((::PBYTE)hIl2Cpp + ELPLMEGAJKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPLMEGAJKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
