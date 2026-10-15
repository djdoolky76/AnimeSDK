#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKEOHKIGEHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88B160)

	class AKEOHKIGEHL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEOHKIGEHL_CTOR_OFFSET))(this);
		}

	};
