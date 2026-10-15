#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ST_Parkour_ByCompareProjectileHitCount; }
namespace RPG::GameCore { class TaskContext; }

#define BJIHEBFLHIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A1490)
#define BJIHEBFLHIJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7A14C0)

	class BJIHEBFLHIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + BJIHEBFLHIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHEBFLHIJ_EVALUATE_OFFSET))(this);
		}

	};
