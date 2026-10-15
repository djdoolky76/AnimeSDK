#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentDamageAttacker; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKGJJIODMMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB990E50)
#define MKGJJIODMMJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB990EC0)

inline static constexpr unsigned int MKGJJIODMMJ_TypeDefinitionIndex = 59117;

	class MKGJJIODMMJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentDamageAttacker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + MKGJJIODMMJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MKGJJIODMMJ_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
