#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKALL_OFFSET UNITYSDK_OFFSET(0x8DE100)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x8DDFE0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x8DE070)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x8DDE30)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x8DDD10)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKPIVOTROTATION_OFFSET UNITYSDK_OFFSET(0x8DDDA0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKRADIUS_OFFSET UNITYSDK_OFFSET(0x8DDEC0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x8DDF50)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E005500)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GETLOCALCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x8DDCE0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x8A9FD0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x8DCD70)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x8DCE80)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x36C210)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x5C9C10)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x8DCD90)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x8DDB80)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x8DD670)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCALCAMERATOPIVOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x8DDD00)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x8DD7D0)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCATION_OFFSET UNITYSDK_OFFSET(0x8DCE90)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x8DDA40)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x8DD410)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETPIVOTROTATION_OFFSET UNITYSDK_OFFSET(0x8DD540)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETRADIUS_OFFSET UNITYSDK_OFFSET(0x8DD900)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETROTATION_OFFSET UNITYSDK_OFFSET(0x8DD180)
#define PIPELINECAMERA_LOCALSCREENCAMERADATA_SETSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x8DDA50)

namespace PipelineCamera
{
	inline static constexpr unsigned int LocalScreenCameraData_TypeDefinitionIndex = 36262;

	struct alignas(4) LocalScreenCameraData
	{
		::UnityEngine::Vector3 _pivotLocation; // 0x10
		::UnityEngine::Quaternion _pivotRotation; // 0x1C
		::UnityEngine::Quaternion _localRotation; // 0x2C
		::System::Single _radius; // 0x3C
		::UnityEngine::Vector2 _screenOffset; // 0x40
		::System::Single _aspectRatio; // 0x48
		::System::Single _fieldOfView; // 0x4C

		::UnityEngine::Vector3 get_Location()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_LOCATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Single get_FieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PivotLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_RADIUS_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GET_OFFSET_OFFSET))(this);
		}

		::System::Boolean SetLocation(::UnityEngine::Vector3& location)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCATION_OFFSET))(this, location);
		}

		::System::Void SetRotation(::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETROTATION_OFFSET))(this, rotation);
		}

		::System::Void SetPivotLocation(::UnityEngine::Vector3& pivotLocation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETPIVOTLOCATION_OFFSET))(this, pivotLocation);
		}

		::System::Void SetPivotRotation(::UnityEngine::Quaternion& pivotRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETPIVOTROTATION_OFFSET))(this, pivotRotation);
		}

		::System::Void SetFieldOfView(::System::Single fieldOfView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETFIELDOFVIEW_OFFSET))(this, fieldOfView);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion& localRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCALROTATION_OFFSET))(this, localRotation);
		}

		::System::Void SetRadius(::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETRADIUS_OFFSET))(this, radius);
		}

		::System::Boolean SetOffset(::UnityEngine::Vector2& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETOFFSET_OFFSET))(this, value);
		}

		::System::Void SetScreenOffset(::UnityEngine::Vector2& screenOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETSCREENOFFSET_OFFSET))(this, screenOffset);
		}

		::System::Void SetAspectRatio(::System::Single aspectRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETASPECTRATIO_OFFSET))(this, aspectRatio);
		}

		::UnityEngine::Vector3 GetLocalCameraToPivotInternal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_GETLOCALCAMERATOPIVOTINTERNAL_OFFSET))(this);
		}

		::System::Boolean SetLocalCameraToPivotInternal(::UnityEngine::Vector3& localCameraToPivot)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_SETLOCALCAMERATOPIVOTINTERNAL_OFFSET))(this, localCameraToPivot);
		}

		::System::Void CheckPivotLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKPIVOTLOCATION_OFFSET))(this);
		}

		::System::Void CheckPivotRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKPIVOTROTATION_OFFSET))(this);
		}

		::System::Void CheckLocalRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKLOCALROTATION_OFFSET))(this);
		}

		::System::Void CheckRadius()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKRADIUS_OFFSET))(this);
		}

		::System::Void CheckScreenOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKSCREENOFFSET_OFFSET))(this);
		}

		::System::Void CheckAspectRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKASPECTRATIO_OFFSET))(this);
		}

		::System::Void CheckFieldOfView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKFIELDOFVIEW_OFFSET))(this);
		}

		::System::Void CheckAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CHECKALL_OFFSET))(this);
		}

		/*
		static ::PipelineCamera::LocalScreenCameraData Create(::UnityEngine::Vector3& pivotLocation, ::UnityEngine::Quaternion& pivotRotation, ::UnityEngine::Quaternion& localRotation, ::System::Single radius, ::UnityEngine::Vector2& screenOffset, ::System::Single fieldOfView, ::System::Single aspectRatio)
		{
			return ((::PipelineCamera::LocalScreenCameraData(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_LOCALSCREENCAMERADATA_CREATE_OFFSET))(pivotLocation, pivotRotation, localRotation, radius, screenOffset, fieldOfView, aspectRatio);
		}
		*/
	};
}
