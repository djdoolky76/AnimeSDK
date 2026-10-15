#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimLedgeBakedConfig; }

#define RPG_GAMECORE_FIVEDIMLEDGEBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5CF0)
#define RPG_GAMECORE_FIVEDIMLEDGEBAKEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C5BE0)

namespace RPG::GameCore
{
	class FiveDimLedgeBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single LedgeHeight; // 0x10
		::System::Single LedgeFlipHeight; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEDGEBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLedgeBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLedgeBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEDGEBAKEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
