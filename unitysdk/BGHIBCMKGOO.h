#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFloorCustomFloat; }
namespace RPG::GameCore { class TaskContext; }

#define BGHIBCMKGOO_CTOR_OFFSET UNITYSDK_OFFSET(0xB188C80)
#define BGHIBCMKGOO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB188CB0)

	class BGHIBCMKGOO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + BGHIBCMKGOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGHIBCMKGOO_EVALUATE_OFFSET))(this);
		}

	};
