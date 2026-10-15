#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowWaypointByProp; }
namespace RPG::GameCore { class TaskContext; }

#define FMFOBLOJMGO_CTOR_OFFSET UNITYSDK_OFFSET(0x15853960)
#define FMFOBLOJMGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15853990)

	class FMFOBLOJMGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowWaypointByProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowWaypointByProp*))((::PBYTE)hIl2Cpp + FMFOBLOJMGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFOBLOJMGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
