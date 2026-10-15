#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByMotionHitColliderWall; }
namespace RPG::GameCore { class TaskContext; }

#define FOMGJFBGFDM_CTOR_OFFSET UNITYSDK_OFFSET(0x158FAF20)
#define FOMGJFBGFDM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158FAF50)

	class FOMGJFBGFDM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + FOMGJFBGFDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGJFBGFDM_EVALUATE_OFFSET))(this);
		}

	};
