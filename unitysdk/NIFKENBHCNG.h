#pragma once
#include "unitysdk/unitysdk.h"

#define NIFKENBHCNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x21420)
#define NIFKENBHCNG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x21430)
#define NIFKENBHCNG_HFPJMFFFAFH_OFFSET UNITYSDK_OFFSET(0x21410)

inline static constexpr unsigned int NIFKENBHCNG_TypeDefinitionIndex = 71071;

	struct alignas(4) NIFKENBHCNG
	{
		::System::Void HFPJMFFFAFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKENBHCNG_HFPJMFFFAFH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKENBHCNG_DISPOSE_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NIFKENBHCNG_EXECUTE_OFFSET))(this, a1);
		}

	};
