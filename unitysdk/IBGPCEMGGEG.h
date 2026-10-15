#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define IBGPCEMGGEG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E34F60)

	class IBGPCEMGGEG : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGPCEMGGEG_CTOR_OFFSET))(this);
		}

	};
