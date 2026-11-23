#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/LensSettings_B26DE5CDA82784AA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Camera_FAA897B6FC42BCF3.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }

#define CINEMACHINE_LENSSETTINGS_FROMCAMERA_OFFSET UNITYSDK_OFFSET(0x2A79060)
#define CINEMACHINE_LENSSETTINGS_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x2A797D0)
#define CINEMACHINE_LENSSETTINGS_GET_ISPHYSICALCAMERA_OFFSET UNITYSDK_OFFSET(0x2A79850)
#define CINEMACHINE_LENSSETTINGS_GET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x2A79870)
#define CINEMACHINE_LENSSETTINGS_GET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x2340B00)
#define CINEMACHINE_LENSSETTINGS_LERP_OFFSET UNITYSDK_OFFSET(0x2A791D0)
#define CINEMACHINE_LENSSETTINGS_SET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x1F98520)
#define CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x2A79420)
#define CINEMACHINE_LENSSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2A79680)
#define CINEMACHINE_LENSSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A79700)
#define CINEMACHINE_LENSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2A79780)

namespace Cinemachine
{
	inline static constexpr unsigned int LensSettings_TypeDefinitionIndex = 18439;

	struct alignas(4) LensSettings
	{
		static ::Cinemachine::LensSettings* StaticGet_Default()
		{
			return (::Cinemachine::LensSettings*)Il2CppClass::FromTypeDefinitionIndex(LensSettings_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Single FieldOfView; // 0x10
		::System::Single OrthographicSize; // 0x14
		::System::Single NearClipPlane; // 0x18
		::System::Single FarClipPlane; // 0x1C
		::System::Single Dutch; // 0x20
		::Cinemachine::LensSettings_B26DE5CDA82784AA ModeOverride; // 0x24
		::UnityEngine::Vector2 LensShift; // 0x28
		::UnityEngine::Camera_FAA897B6FC42BCF3 GateFit; // 0x30
		::System::Single FocusDistance; // 0x34
		::UnityEngine::Vector2 m_SensorSize; // 0x38
		::System::Boolean m_OrthoFromCamera; // 0x40
		::System::Boolean m_PhysicalFromCamera; // 0x41

		::System::Single get_Aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ASPECT_OFFSET))(this);
		}

		/*
		static ::Cinemachine::LensSettings FromCamera(::UnityEngine::Camera* F81027C04BB6BF7F)
		{
			return ((::Cinemachine::LensSettings(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_FROMCAMERA_OFFSET))(F81027C04BB6BF7F);
		}
		*/

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_VALIDATE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Single B728D7E6AC71D9D8, ::System::Single BECEFC75A81DBD61, ::System::Single BE2F572B3C83A9C2, ::System::Single ED31881B459FECBC, ::System::Single F5087A1F8A008595)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS__CTOR_OFFSET))(this, B728D7E6AC71D9D8, BECEFC75A81DBD61, BE2F572B3C83A9C2, ED31881B459FECBC, F5087A1F8A008595);
		}

		::System::Void set_SensorSize(::UnityEngine::Vector2 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_SENSORSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_Orthographic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ORTHOGRAPHIC_OFFSET))(this);
		}

		::System::Void SnapshotCameraReadOnlyProperties(::UnityEngine::Camera* E929054BCEC2CE82)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET))(this, E929054BCEC2CE82);
		}

		::UnityEngine::Vector2 get_SensorSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_SENSORSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsPhysicalCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ISPHYSICALCAMERA_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS__CCTOR_OFFSET))();
		}

		/*
		static ::Cinemachine::LensSettings Lerp(::Cinemachine::LensSettings A719B2D4CCBE2406, ::Cinemachine::LensSettings AE5A5B4332D3D047, ::System::Single BBCFEC7DB309E927)
		{
			return ((::Cinemachine::LensSettings(*)(::Cinemachine::LensSettings, ::Cinemachine::LensSettings, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_LERP_OFFSET))(A719B2D4CCBE2406, AE5A5B4332D3D047, BBCFEC7DB309E927);
		}
		*/
	};
}
