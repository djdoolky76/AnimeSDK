#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class KAFMJLPNNAG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1B94A420)
#define MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94A490)
#define MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1B94A610)

namespace MoleMole
{
	inline static constexpr unsigned int CpuQualityLevelByCPUNamePostProcessorProfile_TypeDefinitionIndex = 93155;

	class CpuQualityLevelByCPUNamePostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* MediumCPUNameRegexList; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* HighCPUNameRegexList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* LowCPUNameRegexList; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* UltraCPUNameRegexList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
