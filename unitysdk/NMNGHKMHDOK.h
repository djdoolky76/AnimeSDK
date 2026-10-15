#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMNGHKMHDOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC90760)

	class NMNGHKMHDOK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNGHKMHDOK_CTOR_OFFSET))(this);
		}

	};
