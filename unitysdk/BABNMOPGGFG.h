#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTrailblazer; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BABNMOPGGFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15BCE5C0)
#define BABNMOPGGFG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15BCE610)

inline static constexpr unsigned int BABNMOPGGFG_TypeDefinitionIndex = 59152;

	class BABNMOPGGFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchTrailblazer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + BABNMOPGGFG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BABNMOPGGFG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
