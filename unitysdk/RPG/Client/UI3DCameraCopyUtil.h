#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define RPG_CLIENT_UI3DCAMERACOPYUTIL_COPYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xEDBE610)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL_CTOR_OFFSET UNITYSDK_OFFSET(0xEDBF2A0)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL_OVERRIDEDOFOFENVVOLUME_OFFSET UNITYSDK_OFFSET(0xEDBE970)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL_SWITCHVOLUMEPROFILE_OFFSET UNITYSDK_OFFSET(0xEDBF180)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DCameraCopyUtil_TypeDefinitionIndex = 75109;

	class UI3DCameraCopyUtil : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::VolumeProfile** StaticGet__3DUIInstanceVolumeProfile()
		{
			return (::UnityEngine::Rendering::VolumeProfile**)UnitySDK::FromName("RPG.Client", "UI3DCameraCopyUtil")->GetStaticField(0x3ABD0);
		}

		static ::UnityEngine::Rendering::VolumeProfile** StaticGet__DefaultVolumeProfile()
		{
			return (::UnityEngine::Rendering::VolumeProfile**)UnitySDK::FromName("RPG.Client", "UI3DCameraCopyUtil")->GetStaticField(0x3ABD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_CTOR_OFFSET))(this);
		}

		static ::System::Void CopyCameraConfig(::UnityEngine::Camera* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_COPYCAMERACONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void OverrideDofOfEnvVolume(::UnityEngine::Camera* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_OVERRIDEDOFOFENVVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void SwitchVolumeProfile(::UnityEngine::Camera* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_SWITCHVOLUMEPROFILE_OFFSET))(a1, a2);
		}

	};
}
