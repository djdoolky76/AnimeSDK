#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByGridFightTraitSelectedCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define PCPIHAJMCBO_CTOR_OFFSET UNITYSDK_OFFSET(0xC00ACE0)
#define PCPIHAJMCBO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC00AD10)

	class PCPIHAJMCBO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + PCPIHAJMCBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPIHAJMCBO_EVALUATE_OFFSET))(this);
		}

	};
