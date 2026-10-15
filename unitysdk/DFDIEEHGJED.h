#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFDIEEHGJED_CTOR_OFFSET UNITYSDK_OFFSET(0xE825000)

	class DFDIEEHGJED : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDIEEHGJED_CTOR_OFFSET))(this);
		}

	};
