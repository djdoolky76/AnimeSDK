#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFDemolitionMesh_A0EFD0CA417FE45A.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class BA20BA853E642817;
namespace RayFire { class RFFragmentProperties; }
namespace RayFire { class RFRuntimeCaching; }
namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireShatter; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define RAYFIRE_RFDEMOLITIONMESH_CACHEINSTANT_OFFSET UNITYSDK_OFFSET(0x29E2BC0)
#define RAYFIRE_RFDEMOLITIONMESH_CACHERUNTIME_OFFSET UNITYSDK_OFFSET(0x29E2C80)
#define RAYFIRE_RFDEMOLITIONMESH_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29E2DD0)
#define RAYFIRE_RFDEMOLITIONMESH_CREATEFRAGMENTS_OFFSET UNITYSDK_OFFSET(0x29E2EE0)
#define RAYFIRE_RFDEMOLITIONMESH_CREATESLICES_OFFSET UNITYSDK_OFFSET(0x29E3B50)
#define RAYFIRE_RFDEMOLITIONMESH_DEMOLISHMESH_OFFSET UNITYSDK_OFFSET(0x29E4380)
#define RAYFIRE_RFDEMOLITIONMESH_GETLAYER_OFFSET UNITYSDK_OFFSET(0x29E4770)
#define RAYFIRE_RFDEMOLITIONMESH_RESETRUNTIMECACHING_OFFSET UNITYSDK_OFFSET(0x29E4880)
#define RAYFIRE_RFDEMOLITIONMESH_RESET_OFFSET UNITYSDK_OFFSET(0x29E4900)
#define RAYFIRE_RFDEMOLITIONMESH_RUNTIMECACHINGCOR_OFFSET UNITYSDK_OFFSET(0x29E4910)
#define RAYFIRE_RFDEMOLITIONMESH_SLICEMESH_OFFSET UNITYSDK_OFFSET(0x29E49A0)
#define RAYFIRE_RFDEMOLITIONMESH_STOPRUNTIMECACHING_OFFSET UNITYSDK_OFFSET(0x29E5120)
#define RAYFIRE_RFDEMOLITIONMESH__CCTOR_OFFSET UNITYSDK_OFFSET(0x29E5150)
#define RAYFIRE_RFDEMOLITIONMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x29E51B0)

namespace RayFire
{
	inline static constexpr unsigned int RFDemolitionMesh_TypeDefinitionIndex = 15728;

	class RFDemolitionMesh : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_fragmentStr()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RFDemolitionMesh_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 amount; // 0x10
		::System::Int32 variation; // 0x14
		::System::Single depthFade; // 0x18
		::System::Single contactBias; // 0x1C
		::System::Int32 seed; // 0x20
		::System::Boolean useShatter; // 0x24
		::System::Byte _padding0[0x3];
		::RayFire::RFDemolitionMesh_A0EFD0CA417FE45A meshInput; // 0x28
		::System::Byte _padding1[0x4];
		::RayFire::RFFragmentProperties* properties; // 0x30
		::RayFire::RFRuntimeCaching* runtimeCaching; // 0x38
		::System::Int32 badMesh; // 0x40
		::System::Int32 shatterMode; // 0x44
		::System::Int32 totalAmount; // 0x48
		::System::Int32 innerSubId; // 0x4C
		::System::Boolean compressPrefab; // 0x50
		::System::Byte _padding2[0x3];
		::UnityEngine::Quaternion cacheRotationStart; // 0x54
		::System::Byte _padding3[0x4];
		::UnityEngine::Mesh* mesh; // 0x68
		::BA20BA853E642817* rfShatter; // 0x70
		::RayFire::RayfireShatter* scrShatter; // 0x78

		::System::Collections::IEnumerator* RuntimeCachingCor(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_RUNTIMECACHINGCOR_OFFSET))(this, F2C7FF5A19F78852);
		}

		::System::Void StopRuntimeCaching()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_STOPRUNTIMECACHING_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* CreateFragments(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_CREATEFRAGMENTS_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Boolean DemolishMesh(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_DEMOLISHMESH_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* CreateSlices(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_CREATESLICES_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void CacheRuntime(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_CACHERUNTIME_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void CacheInstant(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_CACHEINSTANT_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH__CTOR_OFFSET))(this);
		}

		static ::System::Void SliceMesh(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_SLICEMESH_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Void CopyFrom(::RayFire::RFDemolitionMesh* A271877B1AD84D9E)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFDemolitionMesh*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_COPYFROM_OFFSET))(this, A271877B1AD84D9E);
		}

		::System::Int32 GetLayer(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Int32(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_GETLAYER_OFFSET))(this, F2C7FF5A19F78852);
		}

		::System::Void ResetRuntimeCaching(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::UnityEngine::GameObject* E03401629583691D)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_RESETRUNTIMECACHING_OFFSET))(this, F2C7FF5A19F78852, E03401629583691D);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_RESET_OFFSET))(this);
		}
	};
}
