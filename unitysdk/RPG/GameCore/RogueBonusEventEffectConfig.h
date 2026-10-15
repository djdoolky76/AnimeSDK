#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueBonusEventEffectConfig; }

#define RPG_GAMECORE_ROGUEBONUSEVENTEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AB680)
#define RPG_GAMECORE_ROGUEBONUSEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AB640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBonusEventEffectConfig_TypeDefinitionIndex = 17903;

	class RogueBonusEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEVENTEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueBonusEventEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueBonusEventEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
