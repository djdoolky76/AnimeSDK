#pragma once
#include "unitysdk/unitysdk.h"

#define HIDDOBJMJMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1902D4D0)
#define HIDDOBJMJMC_DMJKIELFJAA_OFFSET UNITYSDK_OFFSET(0x1902D480)
#define HIDDOBJMJMC_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x1902D380)

inline static constexpr unsigned int HIDDOBJMJMC_TypeDefinitionIndex = 62455;

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
