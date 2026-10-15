#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckCharacterFly; }
namespace RPG::GameCore { class TaskContext; }

#define HNMCIFIOMDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA10F0)
#define HNMCIFIOMDJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DA1120)

	class HNMCIFIOMDJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + HNMCIFIOMDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMCIFIOMDJ_EVALUATE_OFFSET))(this);
		}

	};
