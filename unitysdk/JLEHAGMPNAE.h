#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapMoveTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLEHAGMPNAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB23D4A0)
#define JLEHAGMPNAE_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB23D4C0)

	class JLEHAGMPNAE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapMoveTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + JLEHAGMPNAE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JLEHAGMPNAE_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
