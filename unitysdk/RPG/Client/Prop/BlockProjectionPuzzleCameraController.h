#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE6C66E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET UNITYSDK_OFFSET(0xE6BCF00)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE6BD160)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET UNITYSDK_OFFSET(0xE6BBE80)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_FDBDECPJEKF_OFFSET UNITYSDK_OFFSET(0xE6C6690)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xE6C61D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0xE6C6630)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xE6BBD40)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_JAHPNGHJHKL_OFFSET UNITYSDK_OFFSET(0xE6C6150)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_JNKJNDLHKEL_OFFSET UNITYSDK_OFFSET(0xE6C6550)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_KNEAFHFCAFB_OFFSET UNITYSDK_OFFSET(0xE6C64C0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE6C6100)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xE6BE190)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE6C60B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleCameraController_TypeDefinitionIndex = 80946;

	class BlockProjectionPuzzleCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineFreeLook* BEECOOKICFL; // 0x18
		::UnityEngine::Vector2 OENPLHBICCD; // 0x20
		::System::Single DOAMHLGEPEO; // 0x28
		::System::Single HEHAPCCGMIC; // 0x2C
		::System::Single MGMHDHJNJKP; // 0x30
		::System::Single DeltaXFilterRatio; // 0x34
		::System::Single DeltaYFilterRatio; // 0x38
		::System::Single RightStickCameraRotationRatio; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Single GetAxisValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET))(this, a1);
		}

		::System::Void EnableCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET))(this);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET))(this);
		}

		::System::Void DisableCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET))(this);
		}

		::System::Void JNKJNDLHKEL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_JNKJNDLHKEL_OFFSET))(this, a1, a2);
		}

		::System::Void JAHPNGHJHKL(::Cinemachine::AxisState_IInputAxisProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::AxisState_IInputAxisProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_JAHPNGHJHKL_OFFSET))(this, a1);
		}

		::System::Void KNEAFHFCAFB(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_KNEAFHFCAFB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HPNHBGEOGPO(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_HPNHBGEOGPO_OFFSET))(this, a1);
		}

		::System::Void FDBDECPJEKF(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLECAMERACONTROLLER_FDBDECPJEKF_OFFSET))(this, a1);
		}

	};
}
