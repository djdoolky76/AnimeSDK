#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1ED7EF70)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1ED7F000)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1ED7EE40)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1ED7EEB0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1ED7F070)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x363D90)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x933F30)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x933FA0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x933E00)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x933E70)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x934000)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1ED7EEF0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1ED7EF10)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1ED7EF90)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1ED7EE60)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1ED7EED0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x933ED0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x933F00)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x933F70)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x933E40)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x933EA0)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int TransformAccess_TypeDefinitionIndex = 5450;

	struct alignas(4) TransformAccess
	{
		::System::IntPtr hierarchy; // 0x10
		::System::Int32 index; // 0x18

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Void set_localPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_LOCALPOSITION_OFFSET))(this, value);
		}

		::System::Void set_localRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_LOCALROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_localScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALSCALE_OFFSET))(this);
		}

		::System::Void set_localScale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_LOCALSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 get_localToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_worldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_WORLDTOLOCALMATRIX_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ISVALID_OFFSET))(this);
		}

		/*
		static ::System::Void GetPosition(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Vector3& p)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETPOSITION_OFFSET))(access, p);
		}
		*/

		/*
		static ::System::Void SetPosition(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Vector3& p)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETPOSITION_OFFSET))(access, p);
		}
		*/

		/*
		static ::System::Void GetRotation(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Quaternion& r)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETROTATION_OFFSET))(access, r);
		}
		*/

		/*
		static ::System::Void SetRotation(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Quaternion& r)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETROTATION_OFFSET))(access, r);
		}
		*/

		/*
		static ::System::Void SetLocalPosition(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Vector3& p)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETLOCALPOSITION_OFFSET))(access, p);
		}
		*/

		/*
		static ::System::Void SetLocalRotation(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Quaternion& r)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETLOCALROTATION_OFFSET))(access, r);
		}
		*/

		/*
		static ::System::Void GetLocalScale(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Vector3& r)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALSCALE_OFFSET))(access, r);
		}
		*/

		/*
		static ::System::Void SetLocalScale(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Vector3& r)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETLOCALSCALE_OFFSET))(access, r);
		}
		*/

		/*
		static ::System::Void GetLocalToWorldMatrix(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Matrix4x4& m)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALTOWORLDMATRIX_OFFSET))(access, m);
		}
		*/

		/*
		static ::System::Void GetWorldToLocalMatrix(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Matrix4x4& m)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETWORLDTOLOCALMATRIX_OFFSET))(access, m);
		}
		*/
	};
}
