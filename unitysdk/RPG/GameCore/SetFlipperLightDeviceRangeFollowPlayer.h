#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetFlipperLightDeviceRangeFollowPlayer; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2FA0)
#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB2FF0)
#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB2F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFlipperLightDeviceRangeFollowPlayer_TypeDefinitionIndex = 22343;

	class SetFlipperLightDeviceRangeFollowPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Follow; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* DevicePropTarget; // 0x20
		::RPG::GameCore::TargetEvaluator* RangeScaleTarget; // 0x28
		::System::Single ScaleMultiplier; // 0x30
		::System::Boolean IsInside; // 0x34
		::System::Byte _padding1[0x3];
		::System::Single LimitRange; // 0x38
		::System::Single FollowDistance; // 0x3C
		::System::Boolean EnableSecondEdge; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
