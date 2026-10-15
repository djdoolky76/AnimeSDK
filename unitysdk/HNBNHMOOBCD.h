#pragma once
#include "unitysdk/unitysdk.h"

#define HNBNHMOOBCD_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0x15D7FA00)
#define HNBNHMOOBCD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D7FC40)
#define HNBNHMOOBCD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15D7FA70)

inline static constexpr unsigned int HNBNHMOOBCD_TypeDefinitionIndex = 54103;

	class HNBNHMOOBCD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBNHMOOBCD_CTOR_OFFSET))(this);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBNHMOOBCD_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBNHMOOBCD_HKKFFCBJOKM_OFFSET))(this);
		}

	};
