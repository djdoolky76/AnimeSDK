#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IEBALBHLCPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB075E0)

	class IEBALBHLCPI : public ::System::Object
	{
	public:
		::System::UInt32 KPGOIAGMDNN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBALBHLCPI_CTOR_OFFSET))(this);
		}

	};
