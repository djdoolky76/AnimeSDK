#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchRelationGroupMember; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGOFNAFOGAB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9C58F0)
#define JGOFNAFOGAB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB9C5940)

inline static constexpr unsigned int JGOFNAFOGAB_TypeDefinitionIndex = 60437;

	class JGOFNAFOGAB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchRelationGroupMember* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchRelationGroupMember*))((::PBYTE)hIl2Cpp + JGOFNAFOGAB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JGOFNAFOGAB_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
