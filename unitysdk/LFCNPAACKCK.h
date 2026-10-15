#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDamageDefender; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFCNPAACKCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB663950)
#define LFCNPAACKCK_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB663970)

inline static constexpr unsigned int LFCNPAACKCK_TypeDefinitionIndex = 59116;

	class LFCNPAACKCK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapDamageDefender* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + LFCNPAACKCK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LFCNPAACKCK_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
