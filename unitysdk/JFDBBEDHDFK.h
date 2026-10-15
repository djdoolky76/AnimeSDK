#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchDataViewUISelectEnter; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFDBBEDHDFK_CTOR_OFFSET UNITYSDK_OFFSET(0x16646A30)
#define JFDBBEDHDFK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16646A80)

inline static constexpr unsigned int JFDBBEDHDFK_TypeDefinitionIndex = 59252;

	class JFDBBEDHDFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchDataViewUISelectEnter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + JFDBBEDHDFK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JFDBBEDHDFK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
