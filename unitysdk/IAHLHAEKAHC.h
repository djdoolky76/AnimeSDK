#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IAHLHAEKAHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB061F0)

	class IAHLHAEKAHC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHLHAEKAHC_CTOR_OFFSET))(this);
		}

	};
