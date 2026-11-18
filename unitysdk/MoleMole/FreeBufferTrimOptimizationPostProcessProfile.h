#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class KAFMJLPNNAG;

#define MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1357BF90)
#define MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1357C000)
#define MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1357C010)

namespace MoleMole
{
	inline static constexpr unsigned int FreeBufferTrimOptimizationPostProcessProfile_TypeDefinitionIndex = 38335;

	class FreeBufferTrimOptimizationPostProcessProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Boolean IsDisable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE__CTOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
