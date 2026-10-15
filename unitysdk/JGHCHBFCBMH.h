#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGHCHBFCBMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB19A150)
#define JGHCHBFCBMH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB19A1A0)

	class JGHCHBFCBMH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchFateRinCardSkillTargetList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*))((::PBYTE)hIl2Cpp + JGHCHBFCBMH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JGHCHBFCBMH_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
