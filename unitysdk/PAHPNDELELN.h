#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareLittleGameLevelVarFixPoint; }
namespace RPG::GameCore { class TaskContext; }

#define PAHPNDELELN_CTOR_OFFSET UNITYSDK_OFFSET(0xC8CC920)
#define PAHPNDELELN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC8CC950)

inline static constexpr unsigned int PAHPNDELELN_TypeDefinitionIndex = 54129;

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
