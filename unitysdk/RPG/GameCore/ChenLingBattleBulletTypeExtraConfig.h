#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleBulletTypeExtraConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D582FF0)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5833D0)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5831D0)

namespace RPG::GameCore
{
	class ChenLingBattleBulletTypeExtraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
