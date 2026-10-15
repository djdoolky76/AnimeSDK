#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardRelationType.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardTeamRelationInfo; }

#define RPG_GAMECORE_FATERINCASEBOARDTEAMRELATIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69E790)
#define RPG_GAMECORE_FATERINCASEBOARDTEAMRELATIONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69E600)

namespace RPG::GameCore
{
	class FateRinCaseBoardTeamRelationInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardTeamType FromTeamType; // 0x10
		::RPG::GameCore::FateRinCaseBoardTeamType ToTeamType; // 0x14
		::RPG::GameCore::FateRinCaseBoardRelationType RelationType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTEAMRELATIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTEAMRELATIONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
