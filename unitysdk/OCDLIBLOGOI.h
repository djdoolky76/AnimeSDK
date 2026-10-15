#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapTargetInTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCDLIBLOGOI_CTOR_OFFSET UNITYSDK_OFFSET(0xBD5A660)
#define OCDLIBLOGOI_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBD5A680)

	class OCDLIBLOGOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapTargetInTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + OCDLIBLOGOI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OCDLIBLOGOI_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
