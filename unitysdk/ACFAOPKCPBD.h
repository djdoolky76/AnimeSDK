#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetRemoveUnselectable; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACFAOPKCPBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB11C9E0)
#define ACFAOPKCPBD_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB11CA00)

	class ACFAOPKCPBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetRemoveUnselectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + ACFAOPKCPBD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ACFAOPKCPBD_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
