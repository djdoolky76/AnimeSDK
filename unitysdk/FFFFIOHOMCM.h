#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetFetchTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFFFIOHOMCM_CTOR_OFFSET UNITYSDK_OFFSET(0x15734970)
#define FFFFIOHOMCM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157349E0)

	class FFFFIOHOMCM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetFetchTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + FFFFIOHOMCM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FFFFIOHOMCM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
