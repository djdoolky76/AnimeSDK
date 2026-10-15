#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PLCKNNJKNFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F63E0)

	class PLCKNNJKNFD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCKNNJKNFD_CTOR_OFFSET))(this);
		}

	};
