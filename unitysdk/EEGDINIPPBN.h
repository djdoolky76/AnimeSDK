#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideAllEntity; }
namespace RPG::GameCore { class TaskContext; }

#define EEGDINIPPBN_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2C720)
#define EEGDINIPPBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A2C750)

	class EEGDINIPPBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideAllEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideAllEntity*))((::PBYTE)hIl2Cpp + EEGDINIPPBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGDINIPPBN_ONTASKBEGIN_OFFSET))(this);
		}

	};
