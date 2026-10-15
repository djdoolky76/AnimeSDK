#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPPBGLJABD.h"

#define OCBKJCENLLP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD59BC0)

	class OCBKJCENLLP : public ::ILPPBGLJABD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBKJCENLLP_CTOR_OFFSET))(this);
		}

	};
