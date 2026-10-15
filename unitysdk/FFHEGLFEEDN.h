#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowFightFestMainRaceUpgradeResultDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define FFHEGLFEEDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1573D0C0)
#define FFHEGLFEEDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1573D120)

	class FFHEGLFEEDN
	{
	public:
		::System::String* NAGANHMPPIJ; // 0x28
		::System::String* NCPLADMECNB; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFightFestMainRaceUpgradeResultDialog*))((::PBYTE)hIl2Cpp + FFHEGLFEEDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHEGLFEEDN_ONTASKBEGIN_OFFSET))(this);
		}

	};
