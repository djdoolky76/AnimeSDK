#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvPropEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNPCOHLCDLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE1DC0)
#define BNPCOHLCDLM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDE1E10)

inline static constexpr unsigned int BNPCOHLCDLM_TypeDefinitionIndex = 59086;

	class BNPCOHLCDLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvPropEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + BNPCOHLCDLM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BNPCOHLCDLM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
