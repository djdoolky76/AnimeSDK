#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeV2PvpScoreData; }

#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE01C4E0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__DISPLAYCLASS4_0__GETSCOREDATA_B__0_OFFSET UNITYSDK_OFFSET(0xE01CF30)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpScoreInfos___c__DisplayClass4_0_TypeDefinitionIndex = 67983;

	class MatchThreeV2PvpScoreInfos___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 finalRank; // 0x10
		::RPG::GameCore::MatchThreeScoreType scoreType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetScoreData_b__0(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__DISPLAYCLASS4_0__GETSCOREDATA_B__0_OFFSET))(this, a1);
		}

	};
}
