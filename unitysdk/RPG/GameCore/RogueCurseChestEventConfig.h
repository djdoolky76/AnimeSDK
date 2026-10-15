#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCurseChestEventConfig; }

#define RPG_GAMECORE_ROGUECURSECHESTEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2870)
#define RPG_GAMECORE_ROGUECURSECHESTEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCurseChestEventConfig_TypeDefinitionIndex = 17908;

	class RogueCurseChestEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCurseChestEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCurseChestEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
