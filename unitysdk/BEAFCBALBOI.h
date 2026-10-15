#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDynamicEntityParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEAFCBALBOI_CTOR_OFFSET UNITYSDK_OFFSET(0x16308DF0)
#define BEAFCBALBOI_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16308ED0)

	class BEAFCBALBOI
	{
	public:
		::RPG::GameCore::StringHash GNJKBPJIEFI; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetMapDynamicEntityParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + BEAFCBALBOI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BEAFCBALBOI_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
