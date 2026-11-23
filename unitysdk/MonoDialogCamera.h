#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoDialogCamera_B3A372FB46A5C968.h"
#include "unitysdk/MonoDialogCamera_E82B1EC8A3965668.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MONODIALOGCAMERA_EDFEC32D3FB386DC_OFFSET UNITYSDK_OFFSET(0x18F0860)
#define MONODIALOGCAMERA_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x18F0920)
#define MONODIALOGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F14E0)

inline static constexpr unsigned int MonoDialogCamera_TypeDefinitionIndex = 1433;

class MonoDialogCamera : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Camera* TargetCamera; // 0x20
	::System::Single FieldOfView; // 0x28
	::System::Byte _padding0[0x4];
	::UnityEngine::Transform* RoleA; // 0x30
	::System::Single HeadHeightA; // 0x38
	::System::Single HeadYa; // 0x3C
	::System::Single HeadXa; // 0x40
	::System::Single FootYa; // 0x44
	::System::Single HeadYaw; // 0x48
	::System::Single HeadPitch; // 0x4C
	::UnityEngine::Vector2 HeadScreenResult; // 0x50
	::MonoDialogCamera_E82B1EC8A3965668 SingleStyle; // 0x58
	::MonoDialogCamera_B3A372FB46A5C968 TwoStyle; // 0x5C
	::UnityEngine::Transform* RoleB; // 0x60
	::System::Single HeadXb; // 0x68

	::System::Void F5E407B60CCCAC07()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODIALOGCAMERA_F5E407B60CCCAC07_OFFSET))(this);
	}

	::System::Single EDFEC32D3FB386DC(::System::Single AA4A9021EEE39ABA, ::System::Single E1E84CB0832EFE32, ::System::Single FCDA8237243FE9D1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONODIALOGCAMERA_EDFEC32D3FB386DC_OFFSET))(this, AA4A9021EEE39ABA, E1E84CB0832EFE32, FCDA8237243FE9D1);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODIALOGCAMERA__CTOR_OFFSET))(this);
	}
};
