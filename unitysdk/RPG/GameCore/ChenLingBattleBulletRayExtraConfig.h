#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBulletTypeExtraConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleBulletRayExtraConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583050)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D583060)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D583000)

namespace RPG::GameCore
{
	class ChenLingBattleBulletRayExtraConfig : public ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig
	{
	public:
		::System::Boolean IsPiercing; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::BaseChenLingBattleValueGetter* CollisionRadius; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Attenuation; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* BulletNumber; // 0x28
		::RPG::GameCore::BaseChenLingBattleValueGetter* BulletDeflectionAngle; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBulletRayExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBulletRayExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBulletRayExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBulletRayExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
