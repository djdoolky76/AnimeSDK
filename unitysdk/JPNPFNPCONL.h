#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLJGGIMAGGA.h"

#define JPNPFNPCONL_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CE5E0)

	class JPNPFNPCONL : public ::CLJGGIMAGGA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPFNPCONL_CTOR_OFFSET))(this);
		}

	};
