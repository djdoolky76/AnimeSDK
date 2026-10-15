#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireWaveProjectileBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FireWaveProjectile; }
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_FIREWAVEPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC9B0)
#define RPG_GAMECORE_FIREWAVEPROJECTILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AC9C0)
#define RPG_GAMECORE_FIREWAVEPROJECTILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AC970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireWaveProjectile_TypeDefinitionIndex = 22583;

	class FireWaveProjectile : public ::RPG::GameCore::FireWaveProjectileBase
	{
	public:
		::RPG::GameCore::ProjectileData* Projectile; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireWaveProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireWaveProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
