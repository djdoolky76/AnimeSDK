#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCFPGFDHIEO_CTOR_OFFSET UNITYSDK_OFFSET(0xB3356C0)
#define KCFPGFDHIEO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB335710)

	class KCFPGFDHIEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCaster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCaster*))((::PBYTE)hIl2Cpp + KCFPGFDHIEO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KCFPGFDHIEO_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
