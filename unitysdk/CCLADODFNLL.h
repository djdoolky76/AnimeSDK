#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillSubTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCLADODFNLL_CTOR_OFFSET UNITYSDK_OFFSET(0xC74B670)
#define CCLADODFNLL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC74B6C0)

inline static constexpr unsigned int CCLADODFNLL_TypeDefinitionIndex = 59133;

	class CCLADODFNLL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*))((::PBYTE)hIl2Cpp + CCLADODFNLL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CCLADODFNLL_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
