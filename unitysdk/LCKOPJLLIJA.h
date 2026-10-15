#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearPropagateBeingAttackInTeam; }
namespace RPG::GameCore { class TaskContext; }

#define LCKOPJLLIJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB618210)
#define LCKOPJLLIJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB618240)

inline static constexpr unsigned int LCKOPJLLIJA_TypeDefinitionIndex = 55271;

	class LCKOPJLLIJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearPropagateBeingAttackInTeam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + LCKOPJLLIJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKOPJLLIJA_ONTASKBEGIN_OFFSET))(this);
		}

	};
