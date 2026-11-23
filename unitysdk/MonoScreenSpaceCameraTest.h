#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoLookDevCameraRel_EF8F775C3FDA2430.h"
#include "unitysdk/MonoScreenSpaceCameraTest_AD1197D8EBDDE4CC.h"
#include "unitysdk/MonoScreenSpaceCameraTest_F2C976EF606FEEDC.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MONOSCREENSPACECAMERATEST_E90CA55B05F225D4_OFFSET UNITYSDK_OFFSET(0x16BD820)
#define MONOSCREENSPACECAMERATEST_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x16BD760)
#define MONOSCREENSPACECAMERATEST_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x16BD3F0)
#define MONOSCREENSPACECAMERATEST_F915A51342D4D7EF_OFFSET UNITYSDK_OFFSET(0x16BE950)
#define MONOSCREENSPACECAMERATEST__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE910)

inline static constexpr unsigned int MonoScreenSpaceCameraTest_TypeDefinitionIndex = 501;

class MonoScreenSpaceCameraTest : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Camera* TargetCamera; // 0x20
	::UnityEngine::Transform* LookTargetA; // 0x28
	::UnityEngine::Transform* LookTargetB; // 0x30
	::MonoScreenSpaceCameraTest_F2C976EF606FEEDC Mode; // 0x38
	::UnityEngine::Vector2 TargetA; // 0x3C
	::UnityEngine::Vector2 TargetB; // 0x44
	::UnityEngine::Vector2 ResultA; // 0x4C
	::UnityEngine::Vector2 ResultB; // 0x54
	::System::Single B47AB65B553C0FD6; // 0x5C
	::System::Single F5F5D039D7BDABE1; // 0x60
	::MonoLookDevCameraRel_EF8F775C3FDA2430 BFE8C2E1F1993414; // 0x64
	::System::Single Theta; // 0x80
	::System::Single Phi; // 0x84
	::MonoScreenSpaceCameraTest_AD1197D8EBDDE4CC AB93AC2D1EF20E94; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCREENSPACECAMERATEST__CTOR_OFFSET))(this);
	}

	::System::Void F5E407B60CCCAC07()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCREENSPACECAMERATEST_F5E407B60CCCAC07_OFFSET))(this);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCREENSPACECAMERATEST_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void E90CA55B05F225D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCREENSPACECAMERATEST_E90CA55B05F225D4_OFFSET))(this);
	}

	static ::System::Single F915A51342D4D7EF(::System::Single F0CEBBB186782829, ::System::Single BAF2499E05581CE0)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOSCREENSPACECAMERATEST_F915A51342D4D7EF_OFFSET))(F0CEBBB186782829, BAF2499E05581CE0);
	}
};
