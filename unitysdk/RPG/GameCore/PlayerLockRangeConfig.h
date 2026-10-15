#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerLockRangeConfig; }

#define RPG_GAMECORE_PLAYERLOCKRANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D908B50)
#define RPG_GAMECORE_PLAYERLOCKRANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D908560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerLockRangeConfig_TypeDefinitionIndex = 17617;

	class PlayerLockRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Radius; // 0x10
		::System::Single FanAngle; // 0x14
		::System::Single InfoRadiusOffset; // 0x18
		::System::Single AttackFanAngle; // 0x1C
		::RPG::MVector3 Offset; // 0x20
		::System::Single DistanceRatio; // 0x2C
		::System::Single AngleRatio; // 0x30
		::System::Single PlayerOriginWeight; // 0x34
		::System::Single CameraOriginWeight; // 0x38
		::System::Single PlayerInputWeight; // 0x3C
		::System::Single PlayerDistanceWeight; // 0x40
		::System::Single CameraDistanceWeight; // 0x44
		::System::Single MonsterWeight; // 0x48
		::System::Single UnLockTime; // 0x4C
		::System::Single UnLockRatio; // 0x50
		::System::Single LockHeightLimit; // 0x54
		::System::Boolean EnableInViewportCheck; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKRANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerLockRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerLockRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLOCKRANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
