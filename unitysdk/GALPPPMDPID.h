#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckRogueExploreWin; }
namespace RPG::GameCore { class TaskContext; }

#define GALPPPMDPID_CTOR_OFFSET UNITYSDK_OFFSET(0x15942400)
#define GALPPPMDPID_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15942430)

inline static constexpr unsigned int GALPPPMDPID_TypeDefinitionIndex = 57972;

	class GALPPPMDPID
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + GALPPPMDPID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GALPPPMDPID_EVALUATE_OFFSET))(this);
		}

	};
