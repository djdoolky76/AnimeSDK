#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKCIJKMEOBK_CTOR_OFFSET UNITYSDK_OFFSET(0x147B4FD0)
#define PKCIJKMEOBK_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x147B4FF0)

inline static constexpr unsigned int PKCIJKMEOBK_TypeDefinitionIndex = 60522;

	class PKCIJKMEOBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapSkillTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + PKCIJKMEOBK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PKCIJKMEOBK_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
