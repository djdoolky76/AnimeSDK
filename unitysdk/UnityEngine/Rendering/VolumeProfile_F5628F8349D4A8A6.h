#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class E891BA3236FD13E7; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define UNITYENGINE_RENDERING_VOLUMEPROFILE_F5628F8349D4A8A6_A74249183477F27A_OFFSET UNITYSDK_OFFSET(0x403C170)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x403C510)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProfile_F5628F8349D4A8A6_TypeDefinitionIndex = 20358;

	class VolumeProfile_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::VolumeProfile_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::Rendering::VolumeProfile_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(VolumeProfile_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::E891BA3236FD13E7<::UnityEngine::Rendering::VolumeComponent*>** StaticGet_E3CEE43317B9E051()
		{
			return (::System::E891BA3236FD13E7<::UnityEngine::Rendering::VolumeComponent*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeProfile_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean A74249183477F27A(::UnityEngine::Rendering::VolumeComponent* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE_F5628F8349D4A8A6_A74249183477F27A_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
