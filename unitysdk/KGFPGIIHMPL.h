#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDNCLPGAKOA.h"

#define KGFPGIIHMPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB3DDF90)

	class KGFPGIIHMPL : public ::FDNCLPGAKOA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFPGIIHMPL_CTOR_OFFSET))(this);
		}

	};
