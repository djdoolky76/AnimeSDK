#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchDialogueEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMOGFMFNOBA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA40610)
#define CMOGFMFNOBA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDA40680)

inline static constexpr unsigned int CMOGFMFNOBA_TypeDefinitionIndex = 59095;

	class CMOGFMFNOBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchDialogueEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + CMOGFMFNOBA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CMOGFMFNOBA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
