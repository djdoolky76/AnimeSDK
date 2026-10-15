#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLockTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDJHLMEOFFF_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED6E20)
#define IDJHLMEOFFF_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15ED6E40)

	class IDJHLMEOFFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchLockTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + IDJHLMEOFFF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + IDJHLMEOFFF_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
