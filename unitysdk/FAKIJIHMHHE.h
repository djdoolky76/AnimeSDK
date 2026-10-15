#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTurnActionEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAKIJIHMHHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15676FB0)
#define FAKIJIHMHHE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15677000)

inline static constexpr unsigned int FAKIJIHMHHE_TypeDefinitionIndex = 59111;

	class FAKIJIHMHHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchTurnActionEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + FAKIJIHMHHE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FAKIJIHMHHE_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
