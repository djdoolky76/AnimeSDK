#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchDataViewUISelectLeave; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLGBFEDDODM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF00F50)
#define OLGBFEDDODM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF00FA0)

inline static constexpr unsigned int OLGBFEDDODM_TypeDefinitionIndex = 59253;

	class OLGBFEDDODM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchDataViewUISelectLeave* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + OLGBFEDDODM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OLGBFEDDODM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
