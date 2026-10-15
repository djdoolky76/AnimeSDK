#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"

#define IHNMBEJMDKM_CTOR_OFFSET UNITYSDK_OFFSET(0x16426240)

	class IHNMBEJMDKM : public ::LLJAOGKDNFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNMBEJMDKM_CTOR_OFFSET))(this);
		}

	};
