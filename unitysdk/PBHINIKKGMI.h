#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSnapshotEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBHINIKKGMI_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEE7F0)
#define PBHINIKKGMI_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBFEE810)

	class PBHINIKKGMI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapSnapshotEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + PBHINIKKGMI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PBHINIKKGMI_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
