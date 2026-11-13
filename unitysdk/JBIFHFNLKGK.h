#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialLockPlayerAction; }

#define JBIFHFNLKGK_CTOR_OFFSET UNITYSDK_OFFSET(0x19A73310)
#define JBIFHFNLKGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A73340)

inline static constexpr unsigned int JBIFHFNLKGK_TypeDefinitionIndex = 60093;

	class JBIFHFNLKGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialLockPlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialLockPlayerAction*))((::PBYTE)hIl2Cpp + JBIFHFNLKGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIFHFNLKGK_ONTASKBEGIN_OFFSET))(this);
		}

	};
