#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MABHMGJMHFC.h"

#define FDEEAPALFKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDB7F0)

	class FDEEAPALFKE : public ::MABHMGJMHFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEEAPALFKE_CTOR_OFFSET))(this);
		}

	};
