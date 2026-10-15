#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetIronTombInfinityHPUI; }
namespace RPG::GameCore { class TaskContext; }

#define LBKBDMOMEKF_CTOR_OFFSET UNITYSDK_OFFSET(0xB600D50)
#define LBKBDMOMEKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB600D80)

	class LBKBDMOMEKF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIronTombInfinityHPUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIronTombInfinityHPUI*))((::PBYTE)hIl2Cpp + LBKBDMOMEKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKBDMOMEKF_ONTASKBEGIN_OFFSET))(this);
		}

	};
