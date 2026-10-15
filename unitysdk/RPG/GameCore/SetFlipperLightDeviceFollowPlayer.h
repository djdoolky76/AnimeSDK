#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetFlipperLightDeviceFollowPlayer; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2A90)
#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB2AD0)
#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB2A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFlipperLightDeviceFollowPlayer_TypeDefinitionIndex = 22342;

	class SetFlipperLightDeviceFollowPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* DevicePropTarget; // 0x18
		::RPG::GameCore::TargetEvaluator* PointPropSource; // 0x20
		::RPG::GameCore::TargetEvaluator* PointPropTarget; // 0x28
		::System::String* DeviceFollowAttachPoint; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLightToSourceEndCallBack; // 0x38
		::System::String* AimAttachPoint; // 0x40
		::RPG::MVector3 FollowOffset; // 0x48
		::RPG::MVector3 AimOffset; // 0x54
		::System::Boolean Follow; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
