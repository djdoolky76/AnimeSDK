#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPetPartyRole; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPOFJHKNGPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C9530)
#define KPOFJHKNGPM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB5C95A0)

inline static constexpr unsigned int KPOFJHKNGPM_TypeDefinitionIndex = 53520;

	class KPOFJHKNGPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchPetPartyRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPetPartyRole*))((::PBYTE)hIl2Cpp + KPOFJHKNGPM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KPOFJHKNGPM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
