#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class KAFMJLPNNAG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x118F7400)
#define MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x118F7470)
#define MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x118F7500)

namespace MoleMole
{
	inline static constexpr unsigned int CrowdSpecSocketOptByGPUModelPostProcessorProfile_TypeDefinitionIndex = 43060;

	class CrowdSpecSocketOptByGPUModelPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Boolean CrowdSpecSocketOpt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
