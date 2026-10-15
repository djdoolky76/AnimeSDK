#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLevelEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDJAOGFBKIH_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A5800)
#define MDJAOGFBKIH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8A5850)

inline static constexpr unsigned int MDJAOGFBKIH_TypeDefinitionIndex = 59227;

	class MDJAOGFBKIH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchLevelEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + MDJAOGFBKIH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MDJAOGFBKIH_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
