#pragma once
#include "unitysdk/unitysdk.h"
class ELBMEFNEMHP;
namespace RPG::GameCore { class TaskContext; }

#define IAEFDOENKIP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E02360)
#define IAEFDOENKIP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E02390)

	class IAEFDOENKIP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELBMEFNEMHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELBMEFNEMHP*))((::PBYTE)hIl2Cpp + IAEFDOENKIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEFDOENKIP_ONTASKBEGIN_OFFSET))(this);
		}

	};
