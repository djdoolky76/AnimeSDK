#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPLEGFOGGAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD1EB0)

	class HPLEGFOGGAL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLEGFOGGAL_CTOR_OFFSET))(this);
		}

	};
