#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTeamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICKOHFEPMNG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E44DC0)
#define ICKOHFEPMNG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E44E10)

inline static constexpr unsigned int ICKOHFEPMNG_TypeDefinitionIndex = 59216;

	class ICKOHFEPMNG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchTeamEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + ICKOHFEPMNG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ICKOHFEPMNG_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
