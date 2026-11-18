#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class KAFMJLPNNAG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DITHEROPTBYGPUMODELPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x118F8AF0)
#define MOLEMOLE_DITHEROPTBYGPUMODELPOSTPROCESSPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x118F8B60)
#define MOLEMOLE_DITHEROPTBYGPUMODELPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x118F8BE0)

namespace MoleMole
{
	inline static constexpr unsigned int DitherOptByGPUModelPostProcessProfile_TypeDefinitionIndex = 91995;

	class DitherOptByGPUModelPostProcessProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Boolean DitherOpt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHEROPTBYGPUMODELPOSTPROCESSPROFILE__CTOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHEROPTBYGPUMODELPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHEROPTBYGPUMODELPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
