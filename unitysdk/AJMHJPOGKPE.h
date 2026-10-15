#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define AJMHJPOGKPE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC5AF0)

	class AJMHJPOGKPE : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMHJPOGKPE_CTOR_OFFSET))(this);
		}

	};
