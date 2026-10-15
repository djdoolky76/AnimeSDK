#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueLayerEffectConfig; }

#define RPG_GAMECORE_ROGUELAYEREFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D22A0)
#define RPG_GAMECORE_ROGUELAYEREFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9D2260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueLayerEffectConfig_TypeDefinitionIndex = 17922;

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
