#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define APHANBEOHDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A9630)

	class APHANBEOHDA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHANBEOHDA_CTOR_OFFSET))(this);
		}

	};
