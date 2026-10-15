#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasSpareTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define IODEFIMLAJO_CTOR_OFFSET UNITYSDK_OFFSET(0x164FF040)
#define IODEFIMLAJO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164FF070)

	class IODEFIMLAJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + IODEFIMLAJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IODEFIMLAJO_EVALUATE_OFFSET))(this);
		}

	};
