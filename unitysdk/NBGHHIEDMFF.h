#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapGridNearby; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBGHHIEDMFF_CTOR_OFFSET UNITYSDK_OFFSET(0xBABA390)
#define NBGHHIEDMFF_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBABA3B0)

inline static constexpr unsigned int NBGHHIEDMFF_TypeDefinitionIndex = 53810;

	class NBGHHIEDMFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapGridNearby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + NBGHHIEDMFF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NBGHHIEDMFF_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
