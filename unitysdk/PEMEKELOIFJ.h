#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFINOGCFBMJ.h"

#define PEMEKELOIFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F38D0)

	class PEMEKELOIFJ : public ::BFINOGCFBMJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMEKELOIFJ_CTOR_OFFSET))(this);
		}

	};
