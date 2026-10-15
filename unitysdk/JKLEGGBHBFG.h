#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTutorialFinish; }
namespace RPG::GameCore { class TaskContext; }

#define JKLEGGBHBFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB21F930)
#define JKLEGGBHBFG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB21F960)

inline static constexpr unsigned int JKLEGGBHBFG_TypeDefinitionIndex = 57988;

	class JKLEGGBHBFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + JKLEGGBHBFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLEGGBHBFG_EVALUATE_OFFSET))(this);
		}

	};
