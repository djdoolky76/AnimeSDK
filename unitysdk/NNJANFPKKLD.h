#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapTeamFormation; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNJANFPKKLD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA9490)
#define NNJANFPKKLD_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBCA94B0)

inline static constexpr unsigned int NNJANFPKKLD_TypeDefinitionIndex = 59249;

	class NNJANFPKKLD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapTeamFormation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + NNJANFPKKLD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NNJANFPKKLD_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
