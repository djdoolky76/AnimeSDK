#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardBaseTeamInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardDoubleTeamInfo; }
namespace RPG::GameCore { class FateRinCaseBoardHouguInfo; }

#define RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66FAF0)
#define RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66FB00)
#define RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D670480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardDoubleTeamInfo_TypeDefinitionIndex = 16230;

	class FateRinCaseBoardDoubleTeamInfo : public ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo
	{
	public:
		::RPG::GameCore::FateRinCaseBoardAvatarType Master; // 0x38
		::System::Boolean IsShowMasterTag; // 0x3C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FateRinCaseBoardAvatarType Servant; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FateRinCaseBoardHouguInfo* HouguInfo; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
