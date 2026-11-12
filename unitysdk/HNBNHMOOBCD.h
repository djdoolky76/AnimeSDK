#pragma once
#include "unitysdk/unitysdk.h"

#define HNBNHMOOBCD_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0x16D2C8B0)
#define HNBNHMOOBCD_CTOR_OFFSET UNITYSDK_OFFSET(0x16D2CAF0)
#define HNBNHMOOBCD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x16D2C920)

inline static constexpr unsigned int HNBNHMOOBCD_TypeDefinitionIndex = 55267;

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
