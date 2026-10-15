#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondChessLayerConfig; }

#define RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2130)
#define RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B2140)
#define RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B20F0)

namespace RPG::GameCore
{
	class RogueCondChessLayerConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondChessLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondChessLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondChessLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondChessLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
