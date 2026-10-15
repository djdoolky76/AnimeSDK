#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKGFIFMIGNC.h"

#define OHEJGOBGBHA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE64410)
#define OHEJGOBGBHA_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBE64170)

	class OHEJGOBGBHA : public ::AKGFIFMIGNC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEJGOBGBHA_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEJGOBGBHA_KIGBILLGNOH_OFFSET))(this);
		}

	};
