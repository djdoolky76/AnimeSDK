#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvNPC; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKGLBBCHMIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB4BBE70)
#define KKGLBBCHMIM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4BBEE0)

	class KKGLBBCHMIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvNPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + KKGLBBCHMIM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KKGLBBCHMIM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
