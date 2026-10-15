#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardBaseTeamInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardSingleTeamInfo; }

#define RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66FE20)
#define RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66FE30)
#define RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D670B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardSingleTeamInfo_TypeDefinitionIndex = 16229;

	class FateRinCaseBoardSingleTeamInfo : public ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo
	{
	public:
		::RPG::GameCore::FateRinCaseBoardAvatarType Avatar; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardSingleTeamInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardSingleTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardSingleTeamInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardSingleTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
