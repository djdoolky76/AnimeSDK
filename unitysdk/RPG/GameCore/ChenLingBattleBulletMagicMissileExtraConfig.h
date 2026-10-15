#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBulletTypeExtraConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleBezierPointConfig; }
namespace RPG::GameCore { class ChenLingBattleBulletMagicMissileExtraConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D582EB0)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D582EC0)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D582E60)

namespace RPG::GameCore
{
	class ChenLingBattleBulletMagicMissileExtraConfig : public ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChenLingBattleBezierPointConfig*>* ControlPoints; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* ExtraCountAdd; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
