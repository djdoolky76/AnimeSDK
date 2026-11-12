#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD8A70)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FFD89A0)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FFD87C0)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_REMOVECUSTOMMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1FFD8540)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_REMOVECUSTOMSLOTMATERIALS_OFFSET UNITYSDK_OFFSET(0x1FFD80D0)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SETCUSTOMMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1FFD8380)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SETCUSTOMSLOTMATERIALS_OFFSET UNITYSDK_OFFSET(0x1FFD7EC0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRendererCustomMaterials_TypeDefinitionIndex = 46128;

	class SkeletonRendererCustomMaterials : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* customSlotMaterials; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* customMaterialOverrides; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_CTOR_OFFSET))(this);
		}

		::System::Void SetCustomSlotMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SETCUSTOMSLOTMATERIALS_OFFSET))(this);
		}

		::System::Void RemoveCustomSlotMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_REMOVECUSTOMSLOTMATERIALS_OFFSET))(this);
		}

		::System::Void SetCustomMaterialOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SETCUSTOMMATERIALOVERRIDES_OFFSET))(this);
		}

		::System::Void RemoveCustomMaterialOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_REMOVECUSTOMMATERIALOVERRIDES_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ONDISABLE_OFFSET))(this);
		}

	};
}
