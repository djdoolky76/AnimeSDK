#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillIndicatorTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGOEJPIEMHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1451EFE0)
#define EGOEJPIEMHI_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1451F000)

	class EGOEJPIEMHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapSkillIndicatorTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + EGOEJPIEMHI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EGOEJPIEMHI_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
