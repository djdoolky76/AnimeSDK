#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDynamicArgConfig; }

#define RPG_GAMECORE_ROGUEDYNAMICARGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99BC90)
#define RPG_GAMECORE_ROGUEDYNAMICARGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99BC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDynamicArgConfig_TypeDefinitionIndex = 19814;

	class RogueDynamicArgConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDYNAMICARGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDynamicArgConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDynamicArgConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDYNAMICARGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
