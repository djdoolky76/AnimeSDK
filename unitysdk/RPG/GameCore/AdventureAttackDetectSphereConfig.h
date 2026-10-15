#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAttackDetectShapeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAttackDetectSphereConfig; }

#define RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3896F0)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D389700)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3898C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectSphereConfig_TypeDefinitionIndex = 16275;

	class AdventureAttackDetectSphereConfig : public ::RPG::GameCore::AdventureAttackDetectShapeConfig
	{
	public:
		::System::Single Radius; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAttackDetectSphereConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAttackDetectSphereConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAttackDetectSphereConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAttackDetectSphereConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
