#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define FFBPHKOLDBM_CTOR_OFFSET UNITYSDK_OFFSET(0x304B150)
#define FFBPHKOLDBM_GET_CLOSEDFOLLOWOFFSET_OFFSET UNITYSDK_OFFSET(0x304B1C0)
#define FFBPHKOLDBM_GET_COASTERSCALE_OFFSET UNITYSDK_OFFSET(0x18C40)
#define FFBPHKOLDBM_GET_OPENFOLLOWOFFSET_OFFSET UNITYSDK_OFFSET(0x2020)
#define FFBPHKOLDBM_GET_OVERRIDECAMERAOFFSET_OFFSET UNITYSDK_OFFSET(0x30486A0)
#define FFBPHKOLDBM_GET_ROADVISUALPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1D40)
#define FFBPHKOLDBM_GET_TRACKDATAPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1D30)

inline static constexpr unsigned int FFBPHKOLDBM_TypeDefinitionIndex = 81558;

	struct alignas(8) FFBPHKOLDBM
	{
		::System::String* _TrackDataPrefabPath_k__BackingField; // 0x10
		::System::String* _RoadVisualPrefabPath_k__BackingField; // 0x18
		::System::Single _CoasterScale_k__BackingField; // 0x20
		::System::Boolean _OverrideCameraOffset_k__BackingField; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 _OpenFollowOffset_k__BackingField; // 0x28
		::UnityEngine::Vector3 _ClosedFollowOffset_k__BackingField; // 0x34
		// static const ::System::Object BDOKLGKLIEL; // 0x0
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FFBPHKOLDBM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* get_TrackDataPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPHKOLDBM_GET_TRACKDATAPREFABPATH_OFFSET))(this);
		}

		::System::String* get_RoadVisualPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPHKOLDBM_GET_ROADVISUALPREFABPATH_OFFSET))(this);
		}

		::System::Single get_CoasterScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPHKOLDBM_GET_COASTERSCALE_OFFSET))(this);
		}

		::System::Boolean get_OverrideCameraOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPHKOLDBM_GET_OVERRIDECAMERAOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_OpenFollowOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPHKOLDBM_GET_OPENFOLLOWOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_ClosedFollowOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPHKOLDBM_GET_CLOSEDFOLLOWOFFSET_OFFSET))(this);
		}

	};
