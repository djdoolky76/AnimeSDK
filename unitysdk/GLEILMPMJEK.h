#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDummyEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLEILMPMJEK_CTOR_OFFSET UNITYSDK_OFFSET(0x15AAF1E0)
#define GLEILMPMJEK_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15AAF200)

	class GLEILMPMJEK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapDummyEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + GLEILMPMJEK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GLEILMPMJEK_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
