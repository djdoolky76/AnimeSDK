#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEAMIIFFDKL.h"

#define EBOLIJDCIPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD62730)

	class EBOLIJDCIPI : public ::IEAMIIFFDKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLIJDCIPI_CTOR_OFFSET))(this);
		}

	};
