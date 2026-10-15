#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKFJCCOALIN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2D260)
#define NKFJCCOALIN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC2D2B0)

inline static constexpr unsigned int NKFJCCOALIN_TypeDefinitionIndex = 59237;

	class NKFJCCOALIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchOwnerEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + NKFJCCOALIN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NKFJCCOALIN_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
