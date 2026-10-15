#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchInstigator; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBHEOOINMDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C04480)
#define HBHEOOINMDL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C044F0)

inline static constexpr unsigned int HBHEOOINMDL_TypeDefinitionIndex = 59214;

	class HBHEOOINMDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchInstigator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + HBHEOOINMDL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HBHEOOINMDL_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
