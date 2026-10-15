#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAttackDetectShapeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAttackDetectCircleConfig; }

#define RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3890F0)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D389100)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3890B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectCircleConfig_TypeDefinitionIndex = 16276;

	class AdventureAttackDetectCircleConfig : public ::RPG::GameCore::AdventureAttackDetectShapeConfig
	{
	public:
		::System::Single MinRadius; // 0x20
		::System::Single MaxRadius; // 0x24
		::System::Single FanAngle; // 0x28
		::System::Single Hight; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAttackDetectCircleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAttackDetectCircleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAttackDetectCircleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAttackDetectCircleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
