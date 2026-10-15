#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMCIEIIHGCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C970020)

	class NMCIEIIHGCP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIEIIHGCP_CTOR_OFFSET))(this);
		}

	};
