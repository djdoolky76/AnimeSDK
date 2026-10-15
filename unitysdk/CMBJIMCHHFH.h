#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapBattleEventCreator; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMBJIMCHHFH_CTOR_OFFSET UNITYSDK_OFFSET(0xDA24640)
#define CMBJIMCHHFH_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xDA24660)

inline static constexpr unsigned int CMBJIMCHHFH_TypeDefinitionIndex = 59231;

	class CMBJIMCHHFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapBattleEventCreator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + CMBJIMCHHFH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CMBJIMCHHFH_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
