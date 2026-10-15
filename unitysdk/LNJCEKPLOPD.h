#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNextTurnOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNJCEKPLOPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E45A0)
#define LNJCEKPLOPD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7E45F0)

inline static constexpr unsigned int LNJCEKPLOPD_TypeDefinitionIndex = 59185;

	class LNJCEKPLOPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + LNJCEKPLOPD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LNJCEKPLOPD_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
