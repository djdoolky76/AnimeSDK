#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DCMGMHEFMNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC84F00)

	class DCMGMHEFMNH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMGMHEFMNH_CTOR_OFFSET))(this);
		}

	};
