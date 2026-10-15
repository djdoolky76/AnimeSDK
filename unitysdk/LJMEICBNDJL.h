#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetColliderCenterFollowAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define LJMEICBNDJL_CTOR_OFFSET UNITYSDK_OFFSET(0xB720EA0)
#define LJMEICBNDJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB720ED0)

	class LJMEICBNDJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetColliderCenterFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetColliderCenterFollowAttachPoint*))((::PBYTE)hIl2Cpp + LJMEICBNDJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMEICBNDJL_ONTASKBEGIN_OFFSET))(this);
		}

	};
