#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueLayerEffectConfig; }

#define RPG_GAMECORE_ROGUELAYEREFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC1BAF0)
#define RPG_GAMECORE_ROGUELAYEREFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC1BAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueLayerEffectConfig_TypeDefinitionIndex = 18091;

	class RogueLayerEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUELAYEREFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueLayerEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueLayerEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUELAYEREFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
