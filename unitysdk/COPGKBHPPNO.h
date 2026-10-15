#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define COPGKBHPPNO_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC6C10)

	class COPGKBHPPNO : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COPGKBHPPNO_CTOR_OFFSET))(this);
		}

	};
