#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsProjectileHitTarget; }
namespace RPG::GameCore { class TaskContext; }

#define MHKKMDNFGOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB945360)
#define MHKKMDNFGOP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB945390)

	class MHKKMDNFGOP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + MHKKMDNFGOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKKMDNFGOP_EVALUATE_OFFSET))(this);
		}

	};
