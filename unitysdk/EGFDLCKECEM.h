#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsRogueTournLastRoom; }
namespace RPG::GameCore { class TaskContext; }

#define EGFDLCKECEM_CTOR_OFFSET UNITYSDK_OFFSET(0x14508240)
#define EGFDLCKECEM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14508270)

inline static constexpr unsigned int EGFDLCKECEM_TypeDefinitionIndex = 57986;

	class EGFDLCKECEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + EGFDLCKECEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFDLCKECEM_EVALUATE_OFFSET))(this);
		}

	};
