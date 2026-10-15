#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FAHMFMMNIHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA63280)

	class FAHMFMMNIHD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHMFMMNIHD_CTOR_OFFSET))(this);
		}

	};
