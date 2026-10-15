#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMiracleConfig; }

#define RPG_GAMECORE_ROGUEMIRACLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AD560)
#define RPG_GAMECORE_ROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AD520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleConfig_TypeDefinitionIndex = 17930;

	class RogueMiracleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
