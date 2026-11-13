#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class VolumeProfile; }
namespace UnityEngine::Rendering { class VolumeProxy; }

#define UNITYENGINE_RENDERING_VOLUME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F663280)
#define UNITYENGINE_RENDERING_VOLUME_CTOR_OFFSET UNITYSDK_OFFSET(0x1F663270)
#define UNITYENGINE_RENDERING_VOLUME_GET_PROFILE_OFFSET UNITYSDK_OFFSET(0x1F661BF0)
#define UNITYENGINE_RENDERING_VOLUME_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1F662C50)
#define UNITYENGINE_RENDERING_VOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F6631A0)
#define UNITYENGINE_RENDERING_VOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F662F70)
#define UNITYENGINE_RENDERING_VOLUME_SET_PROFILE_OFFSET UNITYSDK_OFFSET(0x1F661C00)
#define UNITYENGINE_RENDERING_VOLUME_START_OFFSET UNITYSDK_OFFSET(0x1F663170)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Volume_TypeDefinitionIndex = 36542;

	class Volume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::VolumeProfile* sharedProfile; // 0x18
		::UnityEngine::Rendering::VolumeProxy* _Proxy; // 0x20
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::VolumeProxy*>** StaticGet__ProxyCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::VolumeProxy*>**)UnitySDK::FromName("UnityEngine.Rendering", "Volume")->GetStaticField(0x62A60);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::VolumeProfile*>** StaticGet__ProfileCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::VolumeProfile*>**)UnitySDK::FromName("UnityEngine.Rendering", "Volume")->GetStaticField(0x62A68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_CCTOR_OFFSET))();
		}

		::UnityEngine::Rendering::VolumeProfile* get_Profile()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_GET_PROFILE_OFFSET))(this);
		}

		::System::Void set_Profile(::UnityEngine::Rendering::VolumeProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_SET_PROFILE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::VolumeProxy* get_Proxy()
		{
			return ((::UnityEngine::Rendering::VolumeProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_GET_PROXY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_ONDISABLE_OFFSET))(this);
		}

	};
}
