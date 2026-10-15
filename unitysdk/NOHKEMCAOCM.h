#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NOHKEMCAOCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9761E0)

	class NOHKEMCAOCM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKEMCAOCM_CTOR_OFFSET))(this);
		}

	};
