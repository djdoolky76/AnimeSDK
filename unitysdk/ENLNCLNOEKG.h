#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapPartEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENLNCLNOEKG_CTOR_OFFSET UNITYSDK_OFFSET(0x155B2110)
#define ENLNCLNOEKG_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x155B2130)

inline static constexpr unsigned int ENLNCLNOEKG_TypeDefinitionIndex = 59140;

	class ENLNCLNOEKG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapPartEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + ENLNCLNOEKG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ENLNCLNOEKG_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
