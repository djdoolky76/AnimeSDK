#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleResource; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleBulletConfig; }
namespace RPG::GameCore { class ChenLingBattleBulletTypeConfig; }
namespace RPG::GameCore { class ChenLingBattleBulletView; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D582BC0)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D580460)

namespace RPG::GameCore
{
	class ChenLingBattleBulletConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingBattleBulletTypeConfig* BulletTypeConfig; // 0x10
		::RPG::GameCore::ChenLingBattleBulletView* BulletView; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleResource*>* OnHitResource; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* Duration; // 0x28
		::RPG::GameCore::BaseChenLingBattleValueGetter* Speed; // 0x30
		::System::Boolean EnableRetarget; // 0x38
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint RetargetMinDistance; // 0x40
		::RPG::GameCore::FixPoint RetargetAngle; // 0x48
		::RPG::GameCore::FixPoint RetargetMaxDistance; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBulletConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBulletConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
