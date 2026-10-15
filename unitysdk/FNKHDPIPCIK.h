#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchUniqueNameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNKHDPIPCIK_CTOR_OFFSET UNITYSDK_OFFSET(0x15875800)
#define FNKHDPIPCIK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15875850)

	class FNKHDPIPCIK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchUniqueNameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + FNKHDPIPCIK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FNKHDPIPCIK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
