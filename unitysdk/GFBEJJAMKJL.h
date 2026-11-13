#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsBattleEventEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GFBEJJAMKJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4856E0)
#define GFBEJJAMKJL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B485710)

inline static constexpr unsigned int GFBEJJAMKJL_TypeDefinitionIndex = 55801;

	class GFBEJJAMKJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + GFBEJJAMKJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBEJJAMKJL_EVALUATE_OFFSET))(this);
		}

	};
