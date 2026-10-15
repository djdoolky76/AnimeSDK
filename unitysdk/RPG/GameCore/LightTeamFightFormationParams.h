#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationZOffsetList; }
namespace RPG::GameCore { class LightTeamFightFormationParams; }

#define RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CFBB0)
#define RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CF770)

namespace RPG::GameCore
{
	class LightTeamFightFormationParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single IntervalMin; // 0x10
		::System::Single IntervalMax; // 0x14
		::System::Single ServantIntervalBias; // 0x18
		::System::Single TeamWidthRatioFactor; // 0x1C
		::System::Single WidthRatioForEnemy; // 0x20
		::System::Single WidthConstantForEnemy; // 0x24
		::System::Single LeftAngle; // 0x28
		::System::Single LeftOffsetMax; // 0x2C
		::System::Single RightAngle; // 0x30
		::System::Single RightAngleOffsetRatio; // 0x34
		::System::Single RightDirAdditiveDisRatioForEnemy; // 0x38
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FormationZOffsetList*>* ZOffsetByIndex; // 0x40
		::System::Single ComfortZoneWidth; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LightTeamFightFormationParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LightTeamFightFormationParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
