#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchModifierOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFCHMGHAJJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB15F810)
#define BFCHMGHAJJI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB15F860)

inline static constexpr unsigned int BFCHMGHAJJI_TypeDefinitionIndex = 59208;

	class BFCHMGHAJJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchModifierOwner* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + BFCHMGHAJJI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BFCHMGHAJJI_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
