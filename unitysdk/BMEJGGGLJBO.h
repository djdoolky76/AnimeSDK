#pragma once
#include "unitysdk/unitysdk.h"
class EILOGENDCCG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetAlias; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMEJGGGLJBO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA31B0)
#define BMEJGGGLJBO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBDA3310)

	class BMEJGGGLJBO
	{
	public:
		::EILOGENDCCG* IEPCIODGJJD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetAlias* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + BMEJGGGLJBO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BMEJGGGLJBO_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
