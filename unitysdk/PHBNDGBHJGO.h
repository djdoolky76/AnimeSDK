#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGLLENLBNFD.h"

#define PHBNDGBHJGO_CTOR_OFFSET UNITYSDK_OFFSET(0xCB210B0)
#define PHBNDGBHJGO_ONINIT_OFFSET UNITYSDK_OFFSET(0xCB20D40)

inline static constexpr unsigned int PHBNDGBHJGO_TypeDefinitionIndex = 62491;

	class PHBNDGBHJGO : public ::KGLLENLBNFD
	{
	public:
		::System::Single KDBGMBINNAP; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBNDGBHJGO_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBNDGBHJGO_ONINIT_OFFSET))(this);
		}

	};
