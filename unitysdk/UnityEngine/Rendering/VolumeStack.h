#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeStack_RuntimeTypeHandleComparer; }

#define UNITYENGINE_RENDERING_VOLUMESTACK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F66A200)
#define UNITYENGINE_RENDERING_VOLUMESTACK_CHECKORUPDATEVERSION_OFFSET UNITYSDK_OFFSET(0x1F66A1D0)
#define UNITYENGINE_RENDERING_VOLUMESTACK_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x1F66A1F0)
#define UNITYENGINE_RENDERING_VOLUMESTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F665660)
#define UNITYENGINE_RENDERING_VOLUMESTACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F666E10)
#define UNITYENGINE_RENDERING_VOLUMESTACK_GETCOMPONENT_2_OFFSET UNITYSDK_OFFSET(0x1F6678C0)
#define UNITYENGINE_RENDERING_VOLUMESTACK_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F66A1B0)
#define UNITYENGINE_RENDERING_VOLUMESTACK_RELOAD_OFFSET UNITYSDK_OFFSET(0x1F665DE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeStack_TypeDefinitionIndex = 36595;

	class VolumeStack : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeComponent*>* components; // 0x10
		::System::Int32 _version; // 0x18
		static ::UnityEngine::Rendering::VolumeStack_RuntimeTypeHandleComparer** StaticGet__typeHandleComparer()
		{
			return (::UnityEngine::Rendering::VolumeStack_RuntimeTypeHandleComparer**)UnitySDK::FromName("UnityEngine.Rendering", "VolumeStack")->GetStaticField(0x62C50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_CCTOR_OFFSET))();
		}

		::System::Void Reload(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RELOAD_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::VolumeComponent* GetComponent_2(::System::RuntimeTypeHandle a1)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_GETCOMPONENT_2_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_ISVALID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CheckOrUpdateVersion(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_CHECKORUPDATEVERSION_OFFSET))(this, a1);
		}

		::System::Boolean CheckVersion(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_CHECKVERSION_OFFSET))(this, a1);
		}

	};
}
