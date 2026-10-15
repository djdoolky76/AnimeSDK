#pragma once
#include "unitysdk/unitysdk.h"

#define BGMAKCLLBFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10160)
#define BGMAKCLLBFF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10170)
#define BGMAKCLLBFF_HFPJMFFFAFH_OFFSET UNITYSDK_OFFSET(0x10150)

inline static constexpr unsigned int BGMAKCLLBFF_TypeDefinitionIndex = 71083;

	struct alignas(4) BGMAKCLLBFF
	{
		::System::UInt32 GMDBHJKEAEI; // 0x10
		::System::Void HFPJMFFFAFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMAKCLLBFF_HFPJMFFFAFH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMAKCLLBFF_DISPOSE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMAKCLLBFF_EXECUTE_OFFSET))(this);
		}

	};
