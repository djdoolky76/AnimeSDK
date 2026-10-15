#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentPlayerMazeSkillLockTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BGIEEPJLBOG_CTOR_OFFSET UNITYSDK_OFFSET(0xB189980)
#define BGIEEPJLBOG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1899F0)

inline static constexpr unsigned int BGIEEPJLBOG_TypeDefinitionIndex = 59097;

	class BGIEEPJLBOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + BGIEEPJLBOG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BGIEEPJLBOG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
