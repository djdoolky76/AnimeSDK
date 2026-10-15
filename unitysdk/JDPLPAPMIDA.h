#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvLockTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDPLPAPMIDA_CTOR_OFFSET UNITYSDK_OFFSET(0x16611E60)
#define JDPLPAPMIDA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16611ED0)

inline static constexpr unsigned int JDPLPAPMIDA_TypeDefinitionIndex = 59212;

	class JDPLPAPMIDA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvLockTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + JDPLPAPMIDA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JDPLPAPMIDA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
