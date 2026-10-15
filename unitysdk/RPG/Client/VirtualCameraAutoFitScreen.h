#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineVirtualCamera; }

#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_CTOR_OFFSET UNITYSDK_OFFSET(0xE44FAD0)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_REINIT_OFFSET UNITYSDK_OFFSET(0xE44FA20)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_SETFITRATIOX_OFFSET UNITYSDK_OFFSET(0xE44FA70)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_STARTUPDATE_OFFSET UNITYSDK_OFFSET(0xE44F9D0)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_STOPUPDATE_OFFSET UNITYSDK_OFFSET(0xE44F900)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_UPDATETRACKOBJECTOFFSET_OFFSET UNITYSDK_OFFSET(0xE44F950)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_UPDATE_OFFSET UNITYSDK_OFFSET(0xE44EC90)

namespace RPG::Client
{
	class VirtualCameraAutoFitScreen : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 TrackObjectOffset; // 0x18
		::System::Boolean DisableAdaptOver16by9; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Matrix4x4 CKMKEFEKJLF; // 0x28
		::UnityEngine::Vector3 BMHDKPJKJEM; // 0x68
		::UnityEngine::Vector3 IDHBBKJGGKO; // 0x74
		::Cinemachine::CinemachineVirtualCamera* EAJFHBDCFFO; // 0x80
		::System::Boolean IKOHLHDGFKH; // 0x88
		::System::Boolean BMHLFMDMFMG; // 0x89
		::System::Boolean DIOEAJEHHND; // 0x8A
		::System::Byte _padding1[0x1];
		::System::Single OFAAKGLLPOL; // 0x8C
		// static const ::System::Object DBNMBDKNJKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateTrackObjectOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_UPDATETRACKOBJECTOFFSET_OFFSET))(this, a1);
		}

		::System::Void StartUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_STARTUPDATE_OFFSET))(this);
		}

		::System::Void StopUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_STOPUPDATE_OFFSET))(this);
		}

		::System::Void ReInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_REINIT_OFFSET))(this);
		}

		::System::Void SetFitRatioX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_SETFITRATIOX_OFFSET))(this, a1);
		}

	};
}
