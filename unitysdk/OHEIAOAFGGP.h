#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAbilityTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHEIAOAFGGP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5B7A0)
#define OHEIAOAFGGP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE5B7F0)

inline static constexpr unsigned int OHEIAOAFGGP_TypeDefinitionIndex = 59211;

	class OHEIAOAFGGP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAbilityTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + OHEIAOAFGGP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OHEIAOAFGGP_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
