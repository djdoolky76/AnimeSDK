#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueBonusEventConfig; }

#define RPG_GAMECORE_ROGUEBONUSEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D97DCD0)
#define RPG_GAMECORE_ROGUEBONUSEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D97DC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBonusEventConfig_TypeDefinitionIndex = 17904;

	class RogueBonusEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueBonusEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueBonusEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
