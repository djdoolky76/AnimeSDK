#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapCreatedBattleEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOONMGBJLEH_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB2180)
#define HOONMGBJLEH_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15DB21A0)

inline static constexpr unsigned int HOONMGBJLEH_TypeDefinitionIndex = 59232;

	class HOONMGBJLEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapCreatedBattleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + HOONMGBJLEH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HOONMGBJLEH_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
