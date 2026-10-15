#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchActualOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPKIMPAAIBN_CTOR_OFFSET UNITYSDK_OFFSET(0x12658280)
#define DPKIMPAAIBN_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x126582A0)

	class DPKIMPAAIBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchActualOwner* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + DPKIMPAAIBN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DPKIMPAAIBN_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
