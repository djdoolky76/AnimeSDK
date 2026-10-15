#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDamageAttacker; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKODDGCABAK_CTOR_OFFSET UNITYSDK_OFFSET(0x158125E0)
#define FKODDGCABAK_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15812600)

	class FKODDGCABAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapDamageAttacker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + FKODDGCABAK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FKODDGCABAK_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
