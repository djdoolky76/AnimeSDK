#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByInTurnBasedGameModeState; }
namespace RPG::GameCore { class TaskContext; }

#define IMPHOPJFNEH_CTOR_OFFSET UNITYSDK_OFFSET(0x164D61D0)
#define IMPHOPJFNEH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164D6200)

inline static constexpr unsigned int IMPHOPJFNEH_TypeDefinitionIndex = 54632;

	class IMPHOPJFNEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + IMPHOPJFNEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPHOPJFNEH_EVALUATE_OFFSET))(this);
		}

	};
