#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class AdventureModifyTeamPlayerSP; }
namespace RPG::GameCore { class TaskContext; }

#define ANELNDKPFFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1558A070)
#define ANELNDKPFFP_NHPGBFLLCCH_OFFSET UNITYSDK_OFFSET(0x1558A6D0)
#define ANELNDKPFFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1558A0A0)

inline static constexpr unsigned int ANELNDKPFFP_TypeDefinitionIndex = 57905;

	class ANELNDKPFFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureModifyTeamPlayerSP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureModifyTeamPlayerSP*))((::PBYTE)hIl2Cpp + ANELNDKPFFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANELNDKPFFP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NHPGBFLLCCH(::RPG::Client::MemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + ANELNDKPFFP_NHPGBFLLCCH_OFFSET))(this, a1);
		}

	};
