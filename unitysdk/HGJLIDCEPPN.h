#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvAITarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGJLIDCEPPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9A990)
#define HGJLIDCEPPN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C9AA00)

inline static constexpr unsigned int HGJLIDCEPPN_TypeDefinitionIndex = 59213;

	class HGJLIDCEPPN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvAITarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + HGJLIDCEPPN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HGJLIDCEPPN_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
