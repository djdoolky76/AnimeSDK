#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapBattleEventCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJOAKINPEII_CTOR_OFFSET UNITYSDK_OFFSET(0x15D269D0)
#define HJOAKINPEII_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15D269F0)

inline static constexpr unsigned int HJOAKINPEII_TypeDefinitionIndex = 59230;

	class HJOAKINPEII
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapBattleEventCaster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + HJOAKINPEII_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HJOAKINPEII_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
