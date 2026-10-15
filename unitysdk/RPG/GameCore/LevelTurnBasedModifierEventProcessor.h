#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPHINJGCEAO.h"

#define RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F67D0)
#define RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE6F6530)
#define RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_RPG_IREFERENCE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6F64E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnBasedModifierEventProcessor_TypeDefinitionIndex = 56222;

	class LevelTurnBasedModifierEventProcessor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_CTOR_OFFSET))(this);
		}

		::System::Void RPG_IReference_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_RPG_IREFERENCE_CLEAR_OFFSET))(this);
		}

		::System::Void Execute(::KPHINJGCEAO a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPHINJGCEAO))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_EXECUTE_OFFSET))(this, a1);
		}

	};
}
