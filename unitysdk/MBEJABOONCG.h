#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchMazeBuffTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBEJABOONCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB85A010)
#define MBEJABOONCG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB85A080)

inline static constexpr unsigned int MBEJABOONCG_TypeDefinitionIndex = 59234;

	class MBEJABOONCG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchMazeBuffTargets* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + MBEJABOONCG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MBEJABOONCG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
