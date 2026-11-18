#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6F9640)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ANCHORELEVATION_OFFSET UNITYSDK_OFFSET(0x6F95F0)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ANCHORPOLAR_OFFSET UNITYSDK_OFFSET(0x42FDC0)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_FINALANCHORELEVATIONRATIO_OFFSET UNITYSDK_OFFSET(0x6F9610)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_FINALRADIUSAPPEND_OFFSET UNITYSDK_OFFSET(0x6F9620)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ROTATIONCAMZDELTA_OFFSET UNITYSDK_OFFSET(0x5C9C10)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_JKPMJIKEAPD_OFFSET UNITYSDK_OFFSET(0x6F96E0)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ANCHORELEVATION_OFFSET UNITYSDK_OFFSET(0x6F9600)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ANCHORPOLAR_OFFSET UNITYSDK_OFFSET(0x6F95E0)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ROTATIONCAMZDELTA_OFFSET UNITYSDK_OFFSET(0x5C9C20)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6F9630)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13048970)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraFollowCalcData_TypeDefinitionIndex = 49563;

	struct alignas(4) CameraFollowCalcData
	{
		static ::MoleMole::Cameras::CameraFollowCalcData* StaticGet_Default()
		{
			return (::MoleMole::Cameras::CameraFollowCalcData*)Il2CppClass::FromTypeDefinitionIndex(CameraFollowCalcData_TypeDefinitionIndex)->GetStaticField(0xFFB0);
		}
		::System::Single cameraFov; // 0x10
		::System::Single cameraLocateRatio; // 0x14
		::System::Single anchorRadiusAppend; // 0x18
		::System::Single anchorRadius; // 0x1C
		::System::Single _anchorPolar; // 0x20
		::System::Single _anchorElevationRatio; // 0x24
		::System::Single anchorOverrunElevationRatioDelta; // 0x28
		::System::Single anchorElevationDeltaRatio; // 0x2C
		::UnityEngine::Vector3 camPosOffsetDelta; // 0x30
		::System::Single _rotationCamZDelta; // 0x3C
		::UnityEngine::Vector3 lookAtPositionOffset; // 0x40
		::UnityEngine::Vector3 followPositionOffset; // 0x4C
		::System::Single platformLocalAnchorPolar; // 0x58
		::System::Boolean platformLocalAnchorPolarValid; // 0x5C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA__CCTOR_OFFSET))();
		}

		::System::Void set_anchorPolar(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ANCHORPOLAR_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_anchorPolar()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ANCHORPOLAR_OFFSET))(this);
		}

		::System::Single get_anchorElevation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ANCHORELEVATION_OFFSET))(this);
		}

		::System::Void set_anchorElevation(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ANCHORELEVATION_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_FinalAnchorElevationRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_FINALANCHORELEVATIONRATIO_OFFSET))(this);
		}

		::System::Void set_rotationCamZDelta(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ROTATIONCAMZDELTA_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_rotationCamZDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ROTATIONCAMZDELTA_OFFSET))(this);
		}

		::System::Single get_finalRadiusAppend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_FINALRADIUSAPPEND_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_TOSTRING_OFFSET))(this);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_DPIHOJBBGLA_OFFSET))(this);
		}

		/*
		::System::Void JKPMJIKEAPD(::MoleMole::Cameras::CameraFollowCalcData& LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraFollowCalcData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_JKPMJIKEAPD_OFFSET))(this, LJBPECKCCEA);
		}
		*/
	};
}
