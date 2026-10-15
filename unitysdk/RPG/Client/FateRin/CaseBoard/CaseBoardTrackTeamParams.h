#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDTRACKTEAMPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xCF989C0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardTrackTeamParams_TypeDefinitionIndex = 80807;

	class CaseBoardTrackTeamParams : public ::System::Object
	{
	public:
		::System::Boolean IsTrack; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FateRinCaseBoardTeamType TeamType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDTRACKTEAMPARAMS_CTOR_OFFSET))(this);
		}

	};
}
