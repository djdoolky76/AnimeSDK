#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EraFlipperBattleAreaOverrideConfig; }

#define RPG_GAMECORE_ERAFLIPPERBATTLEAREAOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D653670)
#define RPG_GAMECORE_ERAFLIPPERBATTLEAREAOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D653500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EraFlipperBattleAreaOverrideConfig_TypeDefinitionIndex = 16617;

	class EraFlipperBattleAreaOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EraStateType AffectEraState; // 0x10
		::System::UInt32 AffectBattleAreaID; // 0x14
		::System::UInt32 OverrideConfigID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPPERBATTLEAREAOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EraFlipperBattleAreaOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EraFlipperBattleAreaOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPPERBATTLEAREAOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
