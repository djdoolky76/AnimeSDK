#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvSkillTargetEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBKFIMHDIGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF1D00)
#define PBKFIMHDIGA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFF1D50)

	class PBKFIMHDIGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvSkillTargetEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*))((::PBYTE)hIl2Cpp + PBKFIMHDIGA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PBKFIMHDIGA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
