#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCIntersectContext.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCRay.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCRayHit.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RaycastHitInfo.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define RPG_EMBREE_EMBREEWRAPPER_ADDMESH_OFFSET UNITYSDK_OFFSET(0xB6D4750)
#define RPG_EMBREE_EMBREEWRAPPER_CLEANUP_OFFSET UNITYSDK_OFFSET(0xB6D5D30)
#define RPG_EMBREE_EMBREEWRAPPER_COMMITSCENE_OFFSET UNITYSDK_OFFSET(0xB6D5280)
#define RPG_EMBREE_EMBREEWRAPPER_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D3C90)
#define RPG_EMBREE_EMBREEWRAPPER_GET_SCENE_OFFSET UNITYSDK_OFFSET(0xB6D7E70)
#define RPG_EMBREE_EMBREEWRAPPER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB6D3CF0)
#define RPG_EMBREE_EMBREEWRAPPER_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0xB6D5AD0)
#define RPG_EMBREE_EMBREEWRAPPER_RAYCAST_OFFSET UNITYSDK_OFFSET(0xB6D5550)
#define RPG_EMBREE_EMBREEWRAPPER_RTCATTACHGEOMETRY_OFFSET UNITYSDK_OFFSET(0xB6D82B0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITGEOMETRY_OFFSET UNITYSDK_OFFSET(0xB6D8400)
#define RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITSCENE_OFFSET UNITYSDK_OFFSET(0xB6D8120)
#define RPG_EMBREE_EMBREEWRAPPER_RTCGETDEVICEERROR_OFFSET UNITYSDK_OFFSET(0xB6D7FA0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCGETGEOMETRYBUFFERDATA_OFFSET UNITYSDK_OFFSET(0xB6D8480)
#define RPG_EMBREE_EMBREEWRAPPER_RTCINTERSECT1_OFFSET UNITYSDK_OFFSET(0xB6D8510)
#define RPG_EMBREE_EMBREEWRAPPER_RTCNEWDEVICE_OFFSET UNITYSDK_OFFSET(0xB6D7E80)
#define RPG_EMBREE_EMBREEWRAPPER_RTCNEWGEOMETRY_OFFSET UNITYSDK_OFFSET(0xB6D81A0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCNEWSCENE_OFFSET UNITYSDK_OFFSET(0xB6D8020)
#define RPG_EMBREE_EMBREEWRAPPER_RTCOCCLUDED1_OFFSET UNITYSDK_OFFSET(0xB6D85A0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEDEVICE_OFFSET UNITYSDK_OFFSET(0xB6D7F20)
#define RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xB6D8230)
#define RPG_EMBREE_EMBREEWRAPPER_RTCRELEASESCENE_OFFSET UNITYSDK_OFFSET(0xB6D80A0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCSETNEWGEOMETRYBUFFER_OFFSET UNITYSDK_OFFSET(0xB6D8340)

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapper_TypeDefinitionIndex = 48044;

	class EmbreeWrapper : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::IntPtr>* geometries; // 0x10
		::System::IntPtr device; // 0x18
		::System::IntPtr scene; // 0x20
		::System::Boolean isInitialized; // 0x28
		// static const ::System::String* EMBREE_DLL; // 0x0
		// static const ::System::Object RTC_MAX_INSTANCE_LEVEL_COUNT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_CTOR_OFFSET))(this);
		}

		::System::IntPtr get_Scene()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_GET_SCENE_OFFSET))(this);
		}

		static ::System::IntPtr rtcNewDevice(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCNEWDEVICE_OFFSET))(a1);
		}

		static ::System::Void rtcReleaseDevice(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEDEVICE_OFFSET))(a1);
		}

		static ::System::Int32 rtcGetDeviceError(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCGETDEVICEERROR_OFFSET))(a1);
		}

		static ::System::IntPtr rtcNewScene(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCNEWSCENE_OFFSET))(a1);
		}

		static ::System::Void rtcReleaseScene(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCRELEASESCENE_OFFSET))(a1);
		}

		static ::System::Void rtcCommitScene(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITSCENE_OFFSET))(a1);
		}

		static ::System::IntPtr rtcNewGeometry(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCNEWGEOMETRY_OFFSET))(a1, a2);
		}

		static ::System::Void rtcReleaseGeometry(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEGEOMETRY_OFFSET))(a1);
		}

		static ::System::UInt32 rtcAttachGeometry(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCATTACHGEOMETRY_OFFSET))(a1, a2);
		}

		static ::System::IntPtr rtcSetNewGeometryBuffer(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCSETNEWGEOMETRYBUFFER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void rtcCommitGeometry(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITGEOMETRY_OFFSET))(a1);
		}

		static ::System::IntPtr rtcGetGeometryBufferData(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCGETGEOMETRYBUFFERDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void rtcIntersect1(::System::IntPtr a1, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext a2, ::RPG::Embree::EmbreeWrapper_RTCRayHit a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext, ::RPG::Embree::EmbreeWrapper_RTCRayHit))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCINTERSECT1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void rtcOccluded1(::System::IntPtr a1, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext a2, ::RPG::Embree::EmbreeWrapper_RTCRay a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext, ::RPG::Embree::EmbreeWrapper_RTCRay))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCOCCLUDED1_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Initialize(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_CLEANUP_OFFSET))(this);
		}

		::System::UInt32 AddMesh(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_ADDMESH_OFFSET))(this, a1, a2);
		}

		::System::Void CommitScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_COMMITSCENE_OFFSET))(this);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RAYCAST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsOccluded(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_ISOCCLUDED_OFFSET))(this, a1, a2, a3);
		}

	};
}
