#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
namespace System { class Type; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeManager; }
namespace UnityEngine::Rendering { class VolumeProxy; }
namespace UnityEngine::Rendering { class VolumeStack; }

#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6685D0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKBASETYPES_OFFSET UNITYSDK_OFFSET(0x1F667F10)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKSTACK_OFFSET UNITYSDK_OFFSET(0x1F667F80)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CREATESTACK_OFFSET UNITYSDK_OFFSET(0x1F666DB0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F665570)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_DESTROYSTACK_OFFSET UNITYSDK_OFFSET(0x1F666DF0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_BASECOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x1F665390)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_CURRENTPROXY_OFFSET UNITYSDK_OFFSET(0x1F665440)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_CURRENTVOLUME_OFFSET UNITYSDK_OFFSET(0x1F6653D0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F663000)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_ISANYENABLE_OFFSET UNITYSDK_OFFSET(0x1F6653B0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_MAINPROXY_OFFSET UNITYSDK_OFFSET(0x1F665510)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_MAINVOLUME_OFFSET UNITYSDK_OFFSET(0x1F6654A0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_STACK_OFFSET UNITYSDK_OFFSET(0x1F665370)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_GRABALLBASETYPES_OFFSET UNITYSDK_OFFSET(0x1F666F80)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1F665670)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x1F667640)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1F663060)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_RELOADBASETYPES_OFFSET UNITYSDK_OFFSET(0x1F6658A0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_REPLACEDATA_OFFSET UNITYSDK_OFFSET(0x1F667910)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1F667110)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_BASECOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x1F6653A0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_CURRENTVOLUME_OFFSET UNITYSDK_OFFSET(0x1F665400)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_ISANYENABLE_OFFSET UNITYSDK_OFFSET(0x1F6653C0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_MAINVOLUME_OFFSET UNITYSDK_OFFSET(0x1F6654D0)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_STACK_OFFSET UNITYSDK_OFFSET(0x1F665380)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1F663240)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATECURRENTVOLUME_OFFSET UNITYSDK_OFFSET(0x1F666F90)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1F668340)
#define UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F668330)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeManager_TypeDefinitionIndex = 36547;

	class VolumeManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* m_ComponentsDefaultState; // 0x10
		::System::Collections::Generic::IEnumerable_1<::System::Type*>* _baseComponentTypes_k__BackingField; // 0x18
		::UnityEngine::Rendering::VolumeStack* _stack_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>* m_Volumes; // 0x28
		::System::Boolean _IsAnyEnable_k__BackingField; // 0x30
		static ::UnityEngine::Rendering::Volume** StaticGet__MainVolume_k__BackingField()
		{
			return (::UnityEngine::Rendering::Volume**)UnitySDK::FromName("UnityEngine.Rendering", "VolumeManager")->GetStaticField(0x440D0);
		}

		static ::UnityEngine::Rendering::Volume** StaticGet__CurrentVolume_k__BackingField()
		{
			return (::UnityEngine::Rendering::Volume**)UnitySDK::FromName("UnityEngine.Rendering", "VolumeManager")->GetStaticField(0x440D8);
		}

		static ::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>** StaticGet_s_Instance()
		{
			return (::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>**)UnitySDK::FromName("UnityEngine.Rendering", "VolumeManager")->GetStaticField(0x440E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::VolumeManager* get_instance()
		{
			return ((::UnityEngine::Rendering::VolumeManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::UnityEngine::Rendering::VolumeStack* get_stack()
		{
			return ((::UnityEngine::Rendering::VolumeStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_STACK_OFFSET))(this);
		}

		::System::Void set_stack(::UnityEngine::Rendering::VolumeStack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_STACK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_baseComponentTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_BASECOMPONENTTYPES_OFFSET))(this);
		}

		::System::Void set_baseComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_BASECOMPONENTTYPES_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAnyEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_ISANYENABLE_OFFSET))(this);
		}

		::System::Void set_IsAnyEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_ISANYENABLE_OFFSET))(this, a1);
		}

		static ::UnityEngine::Rendering::Volume* get_CurrentVolume()
		{
			return ((::UnityEngine::Rendering::Volume*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_CURRENTVOLUME_OFFSET))();
		}

		static ::System::Void set_CurrentVolume(::UnityEngine::Rendering::Volume* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_CURRENTVOLUME_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::VolumeProxy* get_CurrentProxy()
		{
			return ((::UnityEngine::Rendering::VolumeProxy*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_CURRENTPROXY_OFFSET))();
		}

		static ::UnityEngine::Rendering::Volume* get_MainVolume()
		{
			return ((::UnityEngine::Rendering::Volume*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_MAINVOLUME_OFFSET))();
		}

		static ::System::Void set_MainVolume(::UnityEngine::Rendering::Volume* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_SET_MAINVOLUME_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::VolumeProxy* get_MainProxy()
		{
			return ((::UnityEngine::Rendering::VolumeProxy*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GET_MAINPROXY_OFFSET))();
		}

		::System::Void Init(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_INIT_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::VolumeStack* CreateStack()
		{
			return ((::UnityEngine::Rendering::VolumeStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CREATESTACK_OFFSET))(this);
		}

		::System::Void DestroyStack(::UnityEngine::Rendering::VolumeStack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_DESTROYSTACK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* GrabAllBaseTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_GRABALLBASETYPES_OFFSET))(this);
		}

		::System::Void ReloadBaseTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_RELOADBASETYPES_OFFSET))(this, a1);
		}

		::System::Void Register(::UnityEngine::Rendering::Volume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_REGISTER_OFFSET))(this, a1);
		}

		::System::Void Unregister(::UnityEngine::Rendering::Volume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UNREGISTER_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_RESET_OFFSET))(this);
		}

		::System::Void UpdateCurrentVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATECURRENTVOLUME_OFFSET))(this);
		}

		::System::Void OverrideData(::UnityEngine::Rendering::VolumeStack* a1, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_OVERRIDEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void ReplaceData(::UnityEngine::Rendering::VolumeStack* a1, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_REPLACEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void CheckBaseTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKBASETYPES_OFFSET))(this);
		}

		::System::Void CheckStack(::UnityEngine::Rendering::VolumeStack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_CHECKSTACK_OFFSET))(this, a1);
		}

		::System::Void Update(::UnityEngine::Transform* a1, ::UnityEngine::LayerMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void Update_1(::UnityEngine::Rendering::VolumeStack* a1, ::UnityEngine::Transform* a2, ::UnityEngine::LayerMask a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*, ::UnityEngine::Transform*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEMANAGER_UPDATE_1_OFFSET))(this, a1, a2, a3);
		}

	};
}
