#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByIsInPosition; }
namespace RPG::GameCore { class TaskContext; }

#define EEPNFKKGIAP_CTOR_OFFSET UNITYSDK_OFFSET(0x13A424B0)
#define EEPNFKKGIAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A424E0)

	class EEPNFKKGIAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsInPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsInPosition*))((::PBYTE)hIl2Cpp + EEPNFKKGIAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPNFKKGIAP_ONTASKBEGIN_OFFSET))(this);
		}

	};
