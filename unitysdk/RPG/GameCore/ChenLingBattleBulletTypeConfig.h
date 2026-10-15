#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBulletType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleBulletTypeConfig; }
namespace RPG::GameCore { class ChenLingBattleBulletTypeExtraConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5831C0)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D582BD0)

namespace RPG::GameCore
{
	class ChenLingBattleBulletTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingBattleBulletType BulletType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig* BulletTypeExtraConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBulletTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBulletTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
