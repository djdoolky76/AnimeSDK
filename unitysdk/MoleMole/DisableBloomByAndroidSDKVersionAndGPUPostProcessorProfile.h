#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class KAFMJLPNNAG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1CD16AB0)
#define MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD16B20)
#define MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1CD16BB0)

namespace MoleMole
{
	inline static constexpr unsigned int DisableBloomByAndroidSDKVersionAndGPUPostProcessorProfile_TypeDefinitionIndex = 75192;

	class DisableBloomByAndroidSDKVersionAndGPUPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Int32 MaxSDKVersionThreshold; // 0x18
		::System::Boolean DisableBloom; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
