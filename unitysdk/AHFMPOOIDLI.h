#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define AHFMPOOIDLI_CTOR_OFFSET UNITYSDK_OFFSET(0xEB807F0)

	class AHFMPOOIDLI : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFMPOOIDLI_CTOR_OFFSET))(this);
		}

	};
