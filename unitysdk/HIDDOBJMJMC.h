#pragma once
#include "unitysdk/unitysdk.h"

#define HIDDOBJMJMC_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD4D60)
#define HIDDOBJMJMC_DMJKIELFJAA_OFFSET UNITYSDK_OFFSET(0x15CD4D10)
#define HIDDOBJMJMC_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x15CD4C10)

inline static constexpr unsigned int HIDDOBJMJMC_TypeDefinitionIndex = 61070;

	class HIDDOBJMJMC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDDOBJMJMC_CTOR_OFFSET))(this);
		}

		::System::Void OnStartLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDDOBJMJMC_ONSTARTLOADING_OFFSET))(this);
		}

		::System::Void DMJKIELFJAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDDOBJMJMC_DMJKIELFJAA_OFFSET))(this);
		}

	};
