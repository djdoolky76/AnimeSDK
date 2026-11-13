#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDTRACKTEAMPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BB5F0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardTrackTeamParams_TypeDefinitionIndex = 83586;

	class CaseBoardTrackTeamParams : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinCaseBoardTeamType TeamType; // 0x10
		::System::Boolean IsTrack; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDTRACKTEAMPARAMS_CTOR_OFFSET))(this);
		}

	};
}
