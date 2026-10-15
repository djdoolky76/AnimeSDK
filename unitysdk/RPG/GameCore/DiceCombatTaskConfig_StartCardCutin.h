#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_StartCardCutin; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D613890)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6138A0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D613800)

namespace RPG::GameCore
{
	class DiceCombatTaskConfig_StartCardCutin : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCARDCUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
