#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CustomTeamFormationConfig; }
namespace RPG::GameCore { class SetCharacterCustomTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define BJDNELAGGAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB798A60)
#define BJDNELAGGAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB798A90)

	class BJDNELAGGAD
	{
	public:
		::RPG::GameCore::CustomTeamFormationConfig* IADLJCKJEIM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + BJDNELAGGAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDNELAGGAD_ONTASKBEGIN_OFFSET))(this);
		}

	};
