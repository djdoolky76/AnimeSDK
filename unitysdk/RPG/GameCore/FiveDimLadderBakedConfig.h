#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimLadderBakedConfig; }

#define RPG_GAMECORE_FIVEDIMLADDERBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D697FF0)
#define RPG_GAMECORE_FIVEDIMLADDERBAKEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D697DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLadderBakedConfig_TypeDefinitionIndex = 16655;

	class FiveDimLadderBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ClimbSpeed; // 0x10
		::System::Single LadderFlipInitSpeed; // 0x14
		::System::Single LadderFlipTotalDuration; // 0x18
		::System::Single JumpInitSpeed; // 0x1C
		::System::Single JumpCutExemptSpeed; // 0x20
		::System::Single JumpCutMinHeight; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLadderBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLadderBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERBAKEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
