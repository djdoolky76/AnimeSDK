#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace RPG::GameCore { class ChimeraWorkFireBullet; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAWORKFIREBULLET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B11D0)
#define RPG_GAMECORE_CHIMERAWORKFIREBULLET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B11E0)
#define RPG_GAMECORE_CHIMERAWORKFIREBULLET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B1180)

namespace RPG::GameCore
{
	class ChimeraWorkFireBullet : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* BulletEffectPath; // 0x20
		::System::String* HitEffectPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKFIREBULLET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkFireBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkFireBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKFIREBULLET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkFireBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkFireBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKFIREBULLET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
