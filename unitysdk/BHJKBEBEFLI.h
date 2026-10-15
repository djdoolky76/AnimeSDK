#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BHJKBEBEFLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB48D900)

	class BHJKBEBEFLI : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJKBEBEFLI_CTOR_OFFSET))(this);
		}

	};
