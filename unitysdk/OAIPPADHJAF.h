#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFilterAliveState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAIPPADHJAF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD27320)
#define OAIPPADHJAF_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBD27340)

	class OAIPPADHJAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFilterAliveState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + OAIPPADHJAF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OAIPPADHJAF_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
