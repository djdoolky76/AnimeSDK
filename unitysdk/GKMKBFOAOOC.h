#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapPartOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKMKBFOAOOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA2A40)
#define GKMKBFOAOOC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15AA2A60)

	class GKMKBFOAOOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapPartOwnerEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + GKMKBFOAOOC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GKMKBFOAOOC_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
