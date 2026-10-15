#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEMISSIONBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xDA98E20)

namespace RPG::Client
{
	class PenaconyEndmostChronicleMissionBinder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 EndmostChronicleMissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEMISSIONBINDER_CTOR_OFFSET))(this);
		}

	};
}
