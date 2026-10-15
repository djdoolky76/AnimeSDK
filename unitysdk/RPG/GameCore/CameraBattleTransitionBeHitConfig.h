#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CameraBattleTransitionBeHitConfig; }

#define RPG_GAMECORE_CAMERABATTLETRANSITIONBEHITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D555550)
#define RPG_GAMECORE_CAMERABATTLETRANSITIONBEHITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D555330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraBattleTransitionBeHitConfig_TypeDefinitionIndex = 20426;

	class CameraBattleTransitionBeHitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MiddleShotDistance; // 0x10
		::System::Single LongShotDistance; // 0x14
		::System::Single CloseShotAimDistanceWeight; // 0x18
		::System::Single MiddleShotAimDistanceWeight; // 0x1C
		::System::Single LongShotAimDistanceWeight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERABATTLETRANSITIONBEHITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CameraBattleTransitionBeHitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CameraBattleTransitionBeHitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERABATTLETRANSITIONBEHITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
