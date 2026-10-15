#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueChestEffectListConfig; }

#define RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B08B0)
#define RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B0870)

namespace RPG::GameCore
{
	class RogueChestEffectListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueChestEffectListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueChestEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
