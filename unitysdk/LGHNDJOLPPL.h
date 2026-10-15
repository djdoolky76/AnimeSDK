#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNpcMonsterWithMazeBuff; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGHNDJOLPPL_BEPKHIKFAIG_OFFSET UNITYSDK_OFFSET(0xB697E80)
#define LGHNDJOLPPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB697CE0)
#define LGHNDJOLPPL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB697D50)

	class LGHNDJOLPPL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + LGHNDJOLPPL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LGHNDJOLPPL_EVALUATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean BEPKHIKFAIG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LGHNDJOLPPL_BEPKHIKFAIG_OFFSET))(this, a1);
		}

	};
