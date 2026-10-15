#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideLightDeviceFollowColliderMode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E7A20)
#define RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E7A60)
#define RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E79C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideLightDeviceFollowColliderMode_TypeDefinitionIndex = 22344;

	class OverrideLightDeviceFollowColliderMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* DevicePropTarget; // 0x18
		::System::Boolean IsReset; // 0x20
		::System::Boolean Inverse; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
