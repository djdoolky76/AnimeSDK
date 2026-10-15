#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardBaseTeamInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardHouguInfo; }
namespace RPG::GameCore { class FateRinCaseBoardTripleTeamInfo; }

#define RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D670080)
#define RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D670090)
#define RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D670D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardTripleTeamInfo_TypeDefinitionIndex = 16231;

	class FateRinCaseBoardTripleTeamInfo : public ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo
	{
	public:
		::RPG::GameCore::FateRinCaseBoardAvatarType Master; // 0x38
		::System::Boolean IsShowMasterTag; // 0x3C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FateRinCaseBoardAvatarType Servant; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FateRinCaseBoardHouguInfo* HouguInfo1; // 0x48
		::RPG::GameCore::FateRinCaseBoardAvatarType Master2; // 0x50
		::System::Boolean IsShowMaster2Tag; // 0x54
		::System::Byte _padding2[0x3];
		::RPG::GameCore::FateRinCaseBoardHouguInfo* HouguInfo2; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardTripleTeamInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardTripleTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardTripleTeamInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardTripleTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
