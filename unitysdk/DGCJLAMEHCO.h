#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvNpcEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGCJLAMEHCO_CTOR_OFFSET UNITYSDK_OFFSET(0xE838A30)
#define DGCJLAMEHCO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE838A80)

inline static constexpr unsigned int DGCJLAMEHCO_TypeDefinitionIndex = 59088;

	class DGCJLAMEHCO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvNpcEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + DGCJLAMEHCO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DGCJLAMEHCO_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
