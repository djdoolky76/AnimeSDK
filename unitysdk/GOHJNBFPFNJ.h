#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchParamEntityByIndex; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOHJNBFPFNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B30AE0)
#define GOHJNBFPFNJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B30B50)

inline static constexpr unsigned int GOHJNBFPFNJ_TypeDefinitionIndex = 59223;

	class GOHJNBFPFNJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchParamEntityByIndex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + GOHJNBFPFNJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GOHJNBFPFNJ_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
