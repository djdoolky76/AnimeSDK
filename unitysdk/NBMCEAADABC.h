#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MABHMGJMHFC.h"

#define NBMCEAADABC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F0D30)

	class NBMCEAADABC : public ::MABHMGJMHFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMCEAADABC_CTOR_OFFSET))(this);
		}

	};
