#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshWeaknessUI; }
namespace RPG::GameCore { class TaskContext; }

#define AIBADJDBJHN_CTOR_OFFSET UNITYSDK_OFFSET(0xEB91D90)
#define AIBADJDBJHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB91DC0)

	class AIBADJDBJHN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshWeaknessUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshWeaknessUI*))((::PBYTE)hIl2Cpp + AIBADJDBJHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBADJDBJHN_ONTASKBEGIN_OFFSET))(this);
		}

	};
