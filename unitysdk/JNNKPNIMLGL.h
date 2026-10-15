#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapPosWithOffset; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNNKPNIMLGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB28E320)
#define JNNKPNIMLGL_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB28E340)

	class JNNKPNIMLGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapPosWithOffset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapPosWithOffset*))((::PBYTE)hIl2Cpp + JNNKPNIMLGL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JNNKPNIMLGL_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
