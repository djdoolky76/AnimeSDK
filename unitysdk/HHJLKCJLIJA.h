#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchBloodLinkTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHJLKCJLIJA_CTOR_OFFSET UNITYSDK_OFFSET(0x15CCFD70)
#define HHJLKCJLIJA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CCFDC0)

inline static constexpr unsigned int HHJLKCJLIJA_TypeDefinitionIndex = 59142;

	class HHJLKCJLIJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchBloodLinkTargets* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + HHJLKCJLIJA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HHJLKCJLIJA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
