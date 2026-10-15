#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueLayerEffectListConfig; }

#define RPG_GAMECORE_ROGUELAYEREFFECTLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D22F0)
#define RPG_GAMECORE_ROGUELAYEREFFECTLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9D22B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueLayerEffectListConfig_TypeDefinitionIndex = 17923;

	class RogueLayerEffectListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUELAYEREFFECTLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueLayerEffectListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueLayerEffectListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUELAYEREFFECTLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
