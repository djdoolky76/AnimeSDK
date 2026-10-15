#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvGroupFetchTargetByStringList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLHHBAFIDJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB245260)
#define JLHHBAFIDJF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2452D0)

inline static constexpr unsigned int JLHHBAFIDJF_TypeDefinitionIndex = 59103;

	class JLHHBAFIDJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::AdvGroupFetchTargetByStringList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + JLHHBAFIDJF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JLHHBAFIDJF_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
