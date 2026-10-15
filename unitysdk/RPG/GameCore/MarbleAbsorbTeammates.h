#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleAbsorbTeammates; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEABSORBTEAMMATES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8361A0)
#define RPG_GAMECORE_MARBLEABSORBTEAMMATES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8361B0)
#define RPG_GAMECORE_MARBLEABSORBTEAMMATES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D836150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAbsorbTeammates_TypeDefinitionIndex = 16849;

	class MarbleAbsorbTeammates : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Single AttackFactor; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AttackFactorDynamic; // 0x18
		::System::Single HpFactor; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* HpFactorDynamic; // 0x28
		::System::Single RadiusFactor; // 0x30
		::System::Byte _padding2[0x4];
		::System::String* RadiusFactorDynamic; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEABSORBTEAMMATES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAbsorbTeammates* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAbsorbTeammates*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEABSORBTEAMMATES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAbsorbTeammates* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAbsorbTeammates*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEABSORBTEAMMATES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
