#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DBAEIACKKJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA14100)

	class DBAEIACKKJP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAEIACKKJP_CTOR_OFFSET))(this);
		}

	};
