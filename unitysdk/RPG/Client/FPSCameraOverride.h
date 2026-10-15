#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"
class FINNKPCHBDI;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FPSCAMERAOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xCE5A400)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_GGJHBNJNOOL_OFFSET UNITYSDK_OFFSET(0xCE5A070)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCE5A180)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCE5A100)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCE59F00)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_PREVIEW_OFFSET UNITYSDK_OFFSET(0xCE5A250)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_REVERT_OFFSET UNITYSDK_OFFSET(0xCE5A370)

namespace RPG::Client
{
	inline static constexpr unsigned int FPSCameraOverride_TypeDefinitionIndex = 70588;

	class FPSCameraOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* TargetRenderCamera; // 0x18
		::UnityEngine::GameObject* TargetRenderObjects; // 0x20
		::UnityEngine::Vector4 Offset; // 0x28
		::System::Single CameraFieldOfView; // 0x38
		::System::Boolean _Preview; // 0x3C
		::System::Byte _padding0[0x3];
		::FINNKPCHBDI* LJNPGFBOBAB; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Preview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_PREVIEW_OFFSET))(this);
		}

		::System::Void Revert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_REVERT_OFFSET))(this);
		}

		::System::Void GGJHBNJNOOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_GGJHBNJNOOL_OFFSET))(this);
		}

	};
}
