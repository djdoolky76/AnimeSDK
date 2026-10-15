#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageTextMobilePoolConfig; }
namespace RPG::GameCore { class DamageTextTeamPoolConfig; }

#define RPG_GAMECORE_DAMAGETEXTMOBILEPOOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F2630)
#define RPG_GAMECORE_DAMAGETEXTMOBILEPOOLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F2570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTextMobilePoolConfig_TypeDefinitionIndex = 17143;

	class DamageTextMobilePoolConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DamageTextTeamPoolConfig* LightTeam; // 0x10
		::RPG::GameCore::DamageTextTeamPoolConfig* NonLightTeam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTMOBILEPOOLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageTextMobilePoolConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageTextMobilePoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTMOBILEPOOLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
