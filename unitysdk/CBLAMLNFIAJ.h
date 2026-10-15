#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillActualAttacker; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBLAMLNFIAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC4AF430)
#define CBLAMLNFIAJ_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC4AF450)

	class CBLAMLNFIAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapSkillActualAttacker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + CBLAMLNFIAJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CBLAMLNFIAJ_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
