#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapLockTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFNNFNKJCJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB686140)
#define LFNNFNKJCJJ_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB686160)

	class LFNNFNKJCJJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapLockTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + LFNNFNKJCJJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LFNNFNKJCJJ_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
