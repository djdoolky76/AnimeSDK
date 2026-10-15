#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define KNFJPANCAJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C421550)

	class KNFJPANCAJD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFJPANCAJD_CTOR_OFFSET))(this);
		}

	};
