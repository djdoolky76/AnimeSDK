#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureFireProjectileBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NewAdventureFireProjectile; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A8500)
#define RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8A8510)
#define RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A84D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewAdventureFireProjectile_TypeDefinitionIndex = 20211;

	class NewAdventureFireProjectile : public ::RPG::GameCore::AdventureFireProjectileBase
	{
	public:
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x40
		::RPG::GameCore::TargetEvaluator* CustomAnchorTarget; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewAdventureFireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewAdventureFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewAdventureFireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewAdventureFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
