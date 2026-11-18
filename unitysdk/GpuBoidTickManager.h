#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"

class GpuBoidManager;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define GPUBOIDTICKMANAGER_ALLPOINTSOUTSIDEPLANEAABB_OFFSET UNITYSDK_OFFSET(0x1CEBFAA0)
#define GPUBOIDTICKMANAGER_FRUSTUMCULLED_OFFSET UNITYSDK_OFFSET(0x1CEBF6C0)
#define GPUBOIDTICKMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CEBF000)
#define GPUBOIDTICKMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1CEBF200)
#define GPUBOIDTICKMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1CEBF290)
#define GPUBOIDTICKMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CEBF320)
#define GPUBOIDTICKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBFCC0)
#define GPUBOIDTICKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBF150)

inline static constexpr unsigned int GpuBoidTickManager_TypeDefinitionIndex = 26614;

class GpuBoidTickManager : public ::System::Object
{
public:
	static ::GpuBoidTickManager** StaticGet__Inst()
	{
		return (::GpuBoidTickManager**)Il2CppClass::FromTypeDefinitionIndex(GpuBoidTickManager_TypeDefinitionIndex)->GetStaticField(0x248C0);
	}
	// static const ::System::Int32 numPlanes = 0x6; // 0x0
	// static const ::System::Int32 numPoints = 0x8; // 0x0
	::System::Collections::Generic::List_1<::GpuBoidManager*>* flocks; // 0x10
	::Il2CppArray<::UnityEngine::Plane>* planes; // 0x18
	::Il2CppArray<::UnityEngine::Vector3>* points; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDTICKMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPUBOIDTICKMANAGER__CCTOR_OFFSET))();
	}

	static ::GpuBoidTickManager* get_Instance()
	{
		return ((::GpuBoidTickManager*(*)())((::PBYTE)hIl2Cpp + GPUBOIDTICKMANAGER_GET_INSTANCE_OFFSET))();
	}

	::System::Void Register(::GpuBoidManager* flock)
	{
		return ((::System::Void(*)(::PVOID, ::GpuBoidManager*))((::PBYTE)hIl2Cpp + GPUBOIDTICKMANAGER_REGISTER_OFFSET))(this, flock);
	}

	::System::Void Unregister(::GpuBoidManager* flock)
	{
		return ((::System::Void(*)(::PVOID, ::GpuBoidManager*))((::PBYTE)hIl2Cpp + GPUBOIDTICKMANAGER_UNREGISTER_OFFSET))(this, flock);
	}

	::System::Void Update(::UnityEngine::Camera* mainCamera)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + GPUBOIDTICKMANAGER_UPDATE_OFFSET))(this, mainCamera);
	}

	static ::System::Boolean AllPointsOutsidePlaneAABB(::UnityEngine::Plane& plane, ::Il2CppArray<::UnityEngine::Vector3>* points)
	{
		return ((::System::Boolean(*)(::UnityEngine::Plane&, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + GPUBOIDTICKMANAGER_ALLPOINTSOUTSIDEPLANEAABB_OFFSET))(plane, points);
	}

	::System::Boolean FrustumCulled(::UnityEngine::Bounds b)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + GPUBOIDTICKMANAGER_FRUSTUMCULLED_OFFSET))(this, b);
	}
};
