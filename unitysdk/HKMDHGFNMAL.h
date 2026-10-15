#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvFakeAvatar; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKMDHGFNMAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D41FC0)
#define HKMDHGFNMAL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D42030)

inline static constexpr unsigned int HKMDHGFNMAL_TypeDefinitionIndex = 59094;

	class HKMDHGFNMAL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvFakeAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + HKMDHGFNMAL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HKMDHGFNMAL_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
