#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAllUnselectable; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEGEJOAOEAO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2CC40)
#define OEGEJOAOEAO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE2CC90)

	class OEGEJOAOEAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAllUnselectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + OEGEJOAOEAO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OEGEJOAOEAO_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
