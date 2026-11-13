#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetConcat; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMJDOCDNJCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3575E0)
#define HMJDOCDNJCN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A357630)

inline static constexpr unsigned int HMJDOCDNJCN_TypeDefinitionIndex = 60477;

	class HMJDOCDNJCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetConcat* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + HMJDOCDNJCN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HMJDOCDNJCN_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
