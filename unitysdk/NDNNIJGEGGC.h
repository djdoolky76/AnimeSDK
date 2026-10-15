#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideWaypointByProp; }
namespace RPG::GameCore { class TaskContext; }

#define NDNNIJGEGGC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB53E10)
#define NDNNIJGEGGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB53E40)

	class NDNNIJGEGGC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideWaypointByProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideWaypointByProp*))((::PBYTE)hIl2Cpp + NDNNIJGEGGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNNIJGEGGC_ONTASKBEGIN_OFFSET))(this);
		}

	};
