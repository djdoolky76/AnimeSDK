#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvMonster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJIAPANMMCC_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A0AE0)
#define BJIAPANMMCC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7A0B50)

	class BJIAPANMMCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvMonster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + BJIAPANMMCC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BJIAPANMMCC_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
