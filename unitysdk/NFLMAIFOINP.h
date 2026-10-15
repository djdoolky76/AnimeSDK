#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchUnstageTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFLMAIFOINP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB94380)
#define NFLMAIFOINP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB943D0)

inline static constexpr unsigned int NFLMAIFOINP_TypeDefinitionIndex = 59182;

	class NFLMAIFOINP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchUnstageTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + NFLMAIFOINP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NFLMAIFOINP_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
