#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAttackTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHDAGBDFBCB_CTOR_OFFSET UNITYSDK_OFFSET(0x15775950)
#define FHDAGBDFBCB_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15775970)

	class FHDAGBDFBCB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapAttackTargetList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + FHDAGBDFBCB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FHDAGBDFBCB_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
