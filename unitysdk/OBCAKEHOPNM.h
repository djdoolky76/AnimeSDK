#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvChaseBailuSetDoor; }
namespace RPG::GameCore { class TaskContext; }

#define OBCAKEHOPNM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD36F60)
#define OBCAKEHOPNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD36F90)

	class OBCAKEHOPNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvChaseBailuSetDoor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvChaseBailuSetDoor*))((::PBYTE)hIl2Cpp + OBCAKEHOPNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCAKEHOPNM_ONTASKBEGIN_OFFSET))(this);
		}

	};
