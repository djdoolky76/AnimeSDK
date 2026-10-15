#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueChestEffectConfig; }

#define RPG_GAMECORE_ROGUECHESTEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B0860)
#define RPG_GAMECORE_ROGUECHESTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B0820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestEffectConfig_TypeDefinitionIndex = 17905;

	class RogueChestEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueChestEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueChestEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
