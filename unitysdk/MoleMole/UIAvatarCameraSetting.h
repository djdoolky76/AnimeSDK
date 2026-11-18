#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraRotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraOverrideOption.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraChangeType; }

#define MOLEMOLE_UIAVATARCAMERASETTING_CLONE_OFFSET UNITYSDK_OFFSET(0x19D33970)
#define MOLEMOLE_UIAVATARCAMERASETTING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x19D33880)
#define MOLEMOLE_UIAVATARCAMERASETTING_GET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0x19D33810)
#define MOLEMOLE_UIAVATARCAMERASETTING_SET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0x19D33820)
#define MOLEMOLE_UIAVATARCAMERASETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D33A30)
#define MOLEMOLE_UIAVATARCAMERASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19D33A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCameraSetting_TypeDefinitionIndex = 91081;

	class UIAvatarCameraSetting : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_muteEdit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_TypeDefinitionIndex)->GetStaticField(0x131F0);
		}
		::MoleMole::CameraChangeType* ChangeType; // 0x10
		::UnityEngine::Vector3 TargetOffset; // 0x18
		::System::Boolean renderVolumetricFog; // 0x24
		::System::Boolean ApplyLookAtPoint; // 0x25
		::System::Byte _padding0[0x2];
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption OpaqueTexture; // 0x28
		::UnityEngine::Vector3 LookAtPointOffset; // 0x2C
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption NormalTexture; // 0x38
		::UnityEngine::Rect CameraRect; // 0x3C
		::System::Single uiFxExtraAlphaWeight; // 0x4C
		::System::Single CameraYaw; // 0x50
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption DepthTexture; // 0x54
		::System::Single CameraRoll; // 0x58
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode Anti_aliasing; // 0x5C
		::MoleMole::CameraRotType CameraRotTypeAxisY; // 0x60
		::System::Single CameraFOV; // 0x64
		::System::Boolean DrawGizmos; // 0x68
		::System::Boolean EnableExternalSetting; // 0x69
		::System::Boolean RenderShadows; // 0x6A
		::System::Boolean ApplyLUTAfterEverything; // 0x6B
		::UnityEngine::Vector3 CameraOffset; // 0x6C
		::System::Single CameraPith; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING__CCTOR_OFFSET))();
		}

		::System::Single get_CameraOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_GET_CAMERAOFFSETY_OFFSET))(this);
		}

		::System::Void set_CameraOffsetY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_SET_CAMERAOFFSETY_OFFSET))(this, value);
		}

		::System::Void CopyFrom(::MoleMole::UIAvatarCameraSetting* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarCameraSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_COPYFROM_OFFSET))(this, other);
		}

		::MoleMole::UIAvatarCameraSetting* Clone()
		{
			return ((::MoleMole::UIAvatarCameraSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_CLONE_OFFSET))(this);
		}
	};
}
