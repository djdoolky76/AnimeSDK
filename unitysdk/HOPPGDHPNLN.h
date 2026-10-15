#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideFieldEffect; }
namespace RPG::GameCore { class TaskContext; }

#define HOPPGDHPNLN_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC01D0)
#define HOPPGDHPNLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DC0200)

	class HOPPGDHPNLN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideFieldEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideFieldEffect*))((::PBYTE)hIl2Cpp + HOPPGDHPNLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPPGDHPNLN_ONTASKBEGIN_OFFSET))(this);
		}

	};
