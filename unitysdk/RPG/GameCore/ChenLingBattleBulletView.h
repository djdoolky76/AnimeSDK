#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleAttachPointConfig; }
namespace RPG::GameCore { class ChenLingBattleBulletView; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583430)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETVIEW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D582CF0)

namespace RPG::GameCore
{
	class ChenLingBattleBulletView : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BulletPrefabPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* EffectTiers; // 0x18
		::RPG::GameCore::ChenLingBattleAttachPointConfig* FireAttachPoint; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBulletView* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBulletView*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETVIEW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
