#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetWaypointIgnoreLock; }
namespace RPG::GameCore { class TaskContext; }

#define ILPGIBBDCDK_CTOR_OFFSET UNITYSDK_OFFSET(0x164CBD60)
#define ILPGIBBDCDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164CBD90)

	class ILPGIBBDCDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetWaypointIgnoreLock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetWaypointIgnoreLock*))((::PBYTE)hIl2Cpp + ILPGIBBDCDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPGIBBDCDK_ONTASKBEGIN_OFFSET))(this);
		}

	};
