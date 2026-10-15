#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHDCHADFHND_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E4720)

	class CHDCHADFHND : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDCHADFHND_CTOR_OFFSET))(this);
		}

	};
