#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3D/UI3DVirtualCameraBase.h"
namespace RPG::GameCore { class UI3DCameraFreeLookState; }
namespace System { class Type; }

#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAFREELOOK_CTOR_OFFSET UNITYSDK_OFFSET(0xE3522A0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAFREELOOK_GET_CAMERASTATE_OFFSET UNITYSDK_OFFSET(0xE352160)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAFREELOOK_RESOLVECAMERASTATETYPE_OFFSET UNITYSDK_OFFSET(0xE352240)

namespace RPG::Client::UI3D
{
	class UI3DVirtualCameraFreeLook : public ::RPG::Client::UI3D::UI3DVirtualCameraBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAFREELOOK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::UI3DCameraFreeLookState* get_CameraState()
		{
			return ((::RPG::GameCore::UI3DCameraFreeLookState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAFREELOOK_GET_CAMERASTATE_OFFSET))(this);
		}

		::System::Type* ResolveCameraStateType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAFREELOOK_RESOLVECAMERASTATETYPE_OFFSET))(this);
		}

	};
}
