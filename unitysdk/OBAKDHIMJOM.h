#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FormationMoveSetStreamSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define OBAKDHIMJOM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD322B0)
#define OBAKDHIMJOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD322E0)

inline static constexpr unsigned int OBAKDHIMJOM_TypeDefinitionIndex = 58134;

	class OBAKDHIMJOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveSetStreamSpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveSetStreamSpeed*))((::PBYTE)hIl2Cpp + OBAKDHIMJOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAKDHIMJOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
