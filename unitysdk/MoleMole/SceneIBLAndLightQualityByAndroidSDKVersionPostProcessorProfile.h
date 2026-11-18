#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EIndirectionSpecularQuality.h"

class KAFMJLPNNAG;

#define MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x15AD5DF0)
#define MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD5E60)
#define MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x15AD5E70)

namespace MoleMole
{
	inline static constexpr unsigned int SceneIBLAndLightQualityByAndroidSDKVersionPostProcessorProfile_TypeDefinitionIndex = 39202;

	class SceneIBLAndLightQualityByAndroidSDKVersionPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::UnityEngine::Rendering::Universal::EIndirectionSpecularQuality iblQuality; // 0x10
		::System::Int32 MaxSDKVersionThreshold; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
