#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCylinderColliderConfig; }

#define RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54E5A0)
#define RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54E5B0)
#define RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54E550)

namespace RPG::GameCore
{
	class CakeRaceCylinderColliderConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Single Radius; // 0x10
		::System::Single Height; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCylinderColliderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCylinderColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCylinderColliderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCylinderColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
