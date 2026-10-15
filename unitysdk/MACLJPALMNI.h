#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchParamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MACLJPALMNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB842170)
#define MACLJPALMNI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8421C0)

inline static constexpr unsigned int MACLJPALMNI_TypeDefinitionIndex = 59219;

	class MACLJPALMNI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchParamEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + MACLJPALMNI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MACLJPALMNI_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
