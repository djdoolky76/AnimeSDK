#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetFetchGridAt; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFDHFBBGLFD_CTOR_OFFSET UNITYSDK_OFFSET(0xE8249F0)
#define DFDHFBBGLFD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE824A60)

	class DFDHFBBGLFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetFetchGridAt* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + DFDHFBBGLFD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DFDHFBBGLFD_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
