#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireProjectileBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FireProjectile; }
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_FIREPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ABF50)
#define RPG_GAMECORE_FIREPROJECTILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ABF70)
#define RPG_GAMECORE_FIREPROJECTILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ABF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireProjectile_TypeDefinitionIndex = 22580;

	class FireProjectile : public ::RPG::GameCore::FireProjectileBase
	{
	public:
		::RPG::GameCore::ProjectileData* Projectile; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
