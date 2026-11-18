#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class KAFMJLPNNAG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x135C58F0)
#define MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x135C5960)
#define MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x135C59F0)

namespace MoleMole
{
	inline static constexpr unsigned int NapPassSpecOptByGPUModelPostProcessorProfile_TypeDefinitionIndex = 70559;

	class NapPassSpecOptByGPUModelPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Boolean ShadowAfterGBuffer; // 0x18
		::System::Boolean SeparateAfterGbufferPass; // 0x19
		::System::Boolean LightLoopAfterGbuffer; // 0x1A
		::System::Boolean EnableRefactorLayout; // 0x1B
		::System::Boolean oneLightPerPassOpt; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single oneLightPerPassOptScreenRatioSqr; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
