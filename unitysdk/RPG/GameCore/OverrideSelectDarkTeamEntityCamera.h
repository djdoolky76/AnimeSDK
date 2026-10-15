#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideSelectDarkTeamEntityCamera; }

#define RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E8EE0)
#define RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E8EF0)
#define RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E8EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSelectDarkTeamEntityCamera_TypeDefinitionIndex = 22760;

	class OverrideSelectDarkTeamEntityCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ChooseEnemyTargetLookAtWeight; // 0x18
		::System::Single ChooseEnemyTargetLookAtWeightByTeamWidth; // 0x1C
		::System::Single ChooseEnemyTargetDisToCenterWeight; // 0x20
		::System::Single ChooseEnemyTargetDisToCenterImpairment; // 0x24
		::System::Single ChooseEnemyTargetLookAtAmplitude; // 0x28
		::System::Single ChooseEnemyTargetCenterOffset1; // 0x2C
		::System::Single ChooseEnemyTargetCenterOffset2; // 0x30
		::System::Single ChooseEnemyTargetCenterOffset3; // 0x34
		::RPG::MVector3 ChooseEnemyTargetMaxDeflection; // 0x38
		::System::Single AimDumpY; // 0x44
		::System::Boolean Override; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
