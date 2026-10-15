#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchActionDelayExceed; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKEFKJIDIPM_CTOR_OFFSET UNITYSDK_OFFSET(0xC2ABDF0)
#define PKEFKJIDIPM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC2ABE40)

inline static constexpr unsigned int PKEFKJIDIPM_TypeDefinitionIndex = 59146;

	class PKEFKJIDIPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchActionDelayExceed* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + PKEFKJIDIPM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PKEFKJIDIPM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
