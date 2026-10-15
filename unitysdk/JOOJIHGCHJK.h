#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvAllNPCMonsters; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOOJIHGCHJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2AEAE0)
#define JOOJIHGCHJK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2AEB30)

inline static constexpr unsigned int JOOJIHGCHJK_TypeDefinitionIndex = 59083;

	class JOOJIHGCHJK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + JOOJIHGCHJK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JOOJIHGCHJK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
