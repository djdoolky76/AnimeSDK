#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_B51RACING_B51RACINGFINISHGAMECAMERASETTING_CTOR_OFFSET UNITYSDK_OFFSET(0xC794460)
#define RPG_CLIENT_B51RACING_B51RACINGFINISHGAMECAMERASETTING_GETDELAYSHOWFINISHPAGESECONDS_OFFSET UNITYSDK_OFFSET(0xC794410)

namespace RPG::Client::B51Racing
{
	class B51RacingFinishGameCameraSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _DelayShowFinishPageSeconds; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGFINISHGAMECAMERASETTING_CTOR_OFFSET))(this);
		}

		::System::Single GetDelayShowFinishPageSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGFINISHGAMECAMERASETTING_GETDELAYSHOWFINISHPAGESECONDS_OFFSET))(this);
		}

	};
}
