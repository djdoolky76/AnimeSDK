#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetFetchTargetInArea; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJMJAJJNICG_CTOR_OFFSET UNITYSDK_OFFSET(0xB45BD20)
#define KJMJAJJNICG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB45BD90)

	class KJMJAJJNICG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetFetchTargetInArea* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetFetchTargetInArea*))((::PBYTE)hIl2Cpp + KJMJAJJNICG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KJMJAJJNICG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
