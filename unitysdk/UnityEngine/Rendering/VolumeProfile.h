#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1F2E2F20)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2E36F0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_GETCOMPONENTLISTHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2E3590)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_HASSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x1F2E32D0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_1_OFFSET UNITYSDK_OFFSET(0x1F2E30A0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F2E2E10)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1F2E31A0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_RESET_OFFSET UNITYSDK_OFFSET(0x1F2E2F10)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET UNITYSDK_OFFSET(0x1F2E34A0)

namespace UnityEngine::Rendering
{
	class VolumeProfile : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* components; // 0x18
		::System::Boolean isDirty; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_RESET_OFFSET))(this);
		}

		::UnityEngine::Rendering::VolumeComponent* Add_1(::System::RuntimeTypeHandle a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_ADD_1_OFFSET))(this, a1, a2);
		}

		::System::Void Remove_1(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Boolean Has_1(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_HAS_1_OFFSET))(this, a1);
		}

		::System::Boolean HasSubclassOf(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_HASSUBCLASSOF_OFFSET))(this, a1);
		}

		::System::Boolean TryGet(::System::RuntimeTypeHandle a1, ::UnityEngine::Rendering::VolumeComponent* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_TRYGET_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetComponentListHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_GETCOMPONENTLISTHASHCODE_OFFSET))(this);
		}

	};
}
