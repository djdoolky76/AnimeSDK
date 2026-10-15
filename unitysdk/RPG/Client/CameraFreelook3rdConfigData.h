#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APANODGHDHP;
class CLEKGJHBDAB;
class DLEODCKNBBI;
class JAOHEHBCBGN;
namespace RPG::Client { class CameraFreelook3rdConfigData; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }

#define RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_BBFLOGIBELJ_OFFSET UNITYSDK_OFFSET(0xC936F70)
#define RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC932900)
#define RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC936DA0)

namespace RPG::Client
{
	class CameraFreelook3rdConfigData : public ::System::Object
	{
	public:
		::DLEODCKNBBI* BaseChangeData; // 0x10
		::JAOHEHBCBGN* FOVChangeData; // 0x18
		::JAOHEHBCBGN* ZoomChangeData; // 0x20
		::JAOHEHBCBGN* AxisYChangeData; // 0x28
		::CLEKGJHBDAB* ExtraParamsChangeData; // 0x30
		::APANODGHDHP* LookAtOffsetChangeData; // 0x38
		::APANODGHDHP* FollowDampChangeData; // 0x40
		::APANODGHDHP* LookAtDampChangeData; // 0x48
		::System::UInt32 DampPriority; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::GameCore::VCameraFreelook3rdConfig* Config; // 0x58
		::System::Void _ctor(::RPG::GameCore::VCameraFreelook3rdConfig* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void BBFLOGIBELJ(::RPG::Client::CameraFreelook3rdConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFreelook3rdConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_BBFLOGIBELJ_OFFSET))(this, a1);
		}

	};
}
