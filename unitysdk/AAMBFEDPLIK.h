#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AAMBFEDPLIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8775F0)

	class AAMBFEDPLIK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMBFEDPLIK_CTOR_OFFSET))(this);
		}

	};
