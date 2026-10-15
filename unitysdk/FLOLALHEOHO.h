#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareLittleGameLevelVarShort; }
namespace RPG::GameCore { class TaskContext; }

#define FLOLALHEOHO_CTOR_OFFSET UNITYSDK_OFFSET(0x158433B0)
#define FLOLALHEOHO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158433E0)

	class FLOLALHEOHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + FLOLALHEOHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOLALHEOHO_EVALUATE_OFFSET))(this);
		}

	};
