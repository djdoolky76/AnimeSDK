#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireProjectileBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NewFireProjectile; }
namespace RPG::GameCore { class NewProjectileConfig; }

#define RPG_GAMECORE_NEWFIREPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A95C0)
#define RPG_GAMECORE_NEWFIREPROJECTILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8A95E0)
#define RPG_GAMECORE_NEWFIREPROJECTILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A9580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewFireProjectile_TypeDefinitionIndex = 22581;

	class NewFireProjectile : public ::RPG::GameCore::FireProjectileBase
	{
	public:
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREPROJECTILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewFireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREPROJECTILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewFireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREPROJECTILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
