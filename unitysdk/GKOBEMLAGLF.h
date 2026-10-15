#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvPillarPuzzleInteractingPillar; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKOBEMLAGLF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9BF60)
#define GKOBEMLAGLF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A9BFD0)

inline static constexpr unsigned int GKOBEMLAGLF_TypeDefinitionIndex = 59101;

	class GKOBEMLAGLF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + GKOBEMLAGLF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GKOBEMLAGLF_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
