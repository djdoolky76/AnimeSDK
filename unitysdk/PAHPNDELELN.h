#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareLittleGameLevelVarFixPoint; }
namespace RPG::GameCore { class TaskContext; }

#define PAHPNDELELN_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC9D30)
#define PAHPNDELELN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFC9D60)

	class PAHPNDELELN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*))((::PBYTE)hIl2Cpp + PAHPNDELELN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHPNDELELN_EVALUATE_OFFSET))(this);
		}

	};
