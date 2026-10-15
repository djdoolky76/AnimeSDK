#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHCNDENHLGO.h"

#define OIEEAAFAOON_CTOR_OFFSET UNITYSDK_OFFSET(0xBE7AEB0)

	class OIEEAAFAOON : public ::DHCNDENHLGO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEEAAFAOON_CTOR_OFFSET))(this);
		}

	};
