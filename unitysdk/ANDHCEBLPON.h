#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FECDLDCCHPN.h"

#define ANDHCEBLPON_CTOR_OFFSET UNITYSDK_OFFSET(0x15592B90)

	class ANDHCEBLPON : public ::FECDLDCCHPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDHCEBLPON_CTOR_OFFSET))(this);
		}

	};
