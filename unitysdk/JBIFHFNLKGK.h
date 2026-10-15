#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialLockPlayerAction; }

#define JBIFHFNLKGK_CTOR_OFFSET UNITYSDK_OFFSET(0x16570C90)
#define JBIFHFNLKGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16570CC0)

inline static constexpr unsigned int JBIFHFNLKGK_TypeDefinitionIndex = 58825;

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
