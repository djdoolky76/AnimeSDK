#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPuzzleEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGFBGLMNIPF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9E350)
#define NGFBGLMNIPF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB9E3C0)

inline static constexpr unsigned int NGFBGLMNIPF_TypeDefinitionIndex = 59107;

	class NGFBGLMNIPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchPuzzleEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + NGFBGLMNIPF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NGFBGLMNIPF_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
