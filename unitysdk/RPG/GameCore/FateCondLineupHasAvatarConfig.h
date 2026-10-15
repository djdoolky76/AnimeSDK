#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateCondLineupHasAvatarConfig; }

#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69AB30)
#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69AB40)
#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69AAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondLineupHasAvatarConfig_TypeDefinitionIndex = 19250;

	class FateCondLineupHasAvatarConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondLineupHasAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondLineupHasAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondLineupHasAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondLineupHasAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
