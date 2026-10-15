#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAllCustomUnselectable; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIGEIFHMAFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB41ECC0)
#define KIGEIFHMAFN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB41ED10)

inline static constexpr unsigned int KIGEIFHMAFN_TypeDefinitionIndex = 59145;

	class KIGEIFHMAFN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAllCustomUnselectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + KIGEIFHMAFN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KIGEIFHMAFN_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
