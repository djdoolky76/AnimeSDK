#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchSnapshotEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAPEBCLCKOB_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC7BE0)
#define DAPEBCLCKOB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFC7C30)

inline static constexpr unsigned int DAPEBCLCKOB_TypeDefinitionIndex = 59128;

	class DAPEBCLCKOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchSnapshotEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchSnapshotEntityList*))((::PBYTE)hIl2Cpp + DAPEBCLCKOB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DAPEBCLCKOB_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
