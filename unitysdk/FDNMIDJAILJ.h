#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KODIMAJKOMJ.h"

#define FDNMIDJAILJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDEA50)

	class FDNMIDJAILJ : public ::KODIMAJKOMJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNMIDJAILJ_CTOR_OFFSET))(this);
		}

	};
