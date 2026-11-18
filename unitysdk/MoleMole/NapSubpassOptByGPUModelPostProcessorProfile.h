#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class KAFMJLPNNAG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NAPSUBPASSOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11947F00)
#define MOLEMOLE_NAPSUBPASSOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x11947F70)
#define MOLEMOLE_NAPSUBPASSOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11947FF0)

namespace MoleMole
{
	inline static constexpr unsigned int NapSubpassOptByGPUModelPostProcessorProfile_TypeDefinitionIndex = 58472;

	class NapSubpassOptByGPUModelPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Boolean NapSubpassOpt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSUBPASSOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSUBPASSOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSUBPASSOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
