#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueChestEffectListConfig; }

#define RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D982F50)
#define RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D982F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestEffectListConfig_TypeDefinitionIndex = 17906;

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
