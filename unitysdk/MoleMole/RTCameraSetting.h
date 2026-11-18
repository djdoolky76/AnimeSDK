#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraSetting.h"

#define MOLEMOLE_RTCAMERASETTING_DDGNFJDLOKA_OFFSET UNITYSDK_OFFSET(0x198D0DF0)
#define MOLEMOLE_RTCAMERASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x198D0DE0)

namespace MoleMole
{
	inline static constexpr unsigned int RTCameraSetting_TypeDefinitionIndex = 59494;

	class RTCameraSetting : public ::MoleMole::CameraSetting
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RTCAMERASETTING__CTOR_OFFSET))(this);
		}

		static ::MoleMole::RTCameraSetting* DDGNFJDLOKA()
		{
			return ((::MoleMole::RTCameraSetting*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_RTCAMERASETTING_DDGNFJDLOKA_OFFSET))();
		}
	};
}
